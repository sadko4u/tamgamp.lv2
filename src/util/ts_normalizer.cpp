/*
 * ts_normalizer.cpp
 *
 *  Created on: 24 янв. 2020 г.
 *      Author: Vladimir Sadovnikov <lsp.plugin@gmail.com>
 *
  * This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <math.h>
#include <stdlib.h>

#include <sndfile.h>

#include <resources/tonestack.h>
#include "../../include/tamgamp.lv2/debug.h"

#define BUFFER_SIZE         4096

namespace ts_norm
{
    using namespace tamgamp_lv2;

    typedef struct biquad_t
    {
        float   b[3];  //  b0 b1 b2
        float   a[2];  //  a1 a2
        float   d[2];  //  z0 z1
    } biquad_t;

    void biquad_process(float *dst, const float *src, size_t count, biquad_t *f)
    {
        for (size_t i=0; i<count; ++i)
        {
            float s     = src[i];
            float s2    = f->b[0]*s + f->d[0];
            float p1    = f->b[1]*s - f->a[0]*s2;
            float p2    = f->b[2]*s - f->a[1]*s2;

            dst[i]      = s2;

            // Shift buffer
            f->d[0]     = f->d[1] + p1;
            f->d[1]     = p2;
        }
    }

    bool read_audio_file(const char *path, float **outbuf, size_t *outlen, int *sampleRate)
    {
        SF_INFO sf_info;
        SNDFILE* fd = sf_open(path, SFM_READ, &sf_info);

        // Allocate buffer
        float *dst = reinterpret_cast<float *>(::malloc(sf_info.frames * sizeof(float)));
        if (!dst)
        {
            sf_close(fd);
            return false;
        }
        *outbuf         = dst;
        *outlen         = sf_info.frames;
        *sampleRate     = sf_info.samplerate;

        // Create temporary buffer
        float *tmp = reinterpret_cast<float *>(::malloc(sf_info.channels * sizeof(float) * BUFFER_SIZE));
        if (!tmp)
        {
            ::free(dst);
            sf_close(fd);
            return false;
        }

        // Perform read
        while (sf_info.frames > 0)
        {
            // Read frames
            size_t to_read = (sf_info.frames > BUFFER_SIZE) ? BUFFER_SIZE : sf_info.frames;
            sf_count_t read = sf_readf_float(fd, tmp, to_read);
            if (read < 0)
            {
                plug_error("Error while reading audio stream, code=%d: (%s)", int(sf_error(fd)), sf_strerror(fd));
                ::free(tmp);
                ::free(dst);
                sf_close(fd);
                return false;
            }

            // Unpack frames
            const float *src = tmp;
            for (sf_count_t i=0; i<read; ++i)
            {
                *dst = *src;
                ++dst;
                src += sf_info.channels;
            }

            // Update number of estimated frames
            sf_info.frames -= read;
        }

        // Close the file and return success
        ::free(tmp);
        sf_close(fd);

        return true;
    }

    float estimate_rms(faust::dsp_factory_t factory, int sampleRate, float *tmp, float *buf, size_t buflen)
    {
        // Allocate DSP
        faust::dsp *dsp = factory();
        if (dsp == NULL)
            return -1.0f;

        dsp->init(sampleRate);
        double rms = 0.0f;
        double norm = 1.0f / buflen;

        // Initialize LUFS filters, coefficients taken from ITU-R BS.1770
        biquad_t hishelf, hipass;

        hishelf.b[0]    = 1.53512485958697f;
        hishelf.b[1]    = -2.69169618940638f;
        hishelf.b[2]    = 1.19839281085285f;
        hishelf.a[0]    = -1.69065929318241f;
        hishelf.a[1]    = 0.73248077421585f;
        hishelf.d[0]    = 0.0f;
        hishelf.d[1]    = 0.0f;

        hipass.b[0]     = 1.0f;
        hipass.b[1]     = -2.0f;
        hipass.b[2]     = 1.0f;
        hipass.a[0]     = -1.99004745483398f;
        hipass.a[1]     = 0.99007225036621f;
        hipass.d[0]     = 0.0f;
        hipass.d[1]     = 0.0f;

        while (buflen > 0)
        {
            // Call processor
            size_t to_process = (buflen > BUFFER_SIZE) ? BUFFER_SIZE : buflen;
            dsp->compute(to_process, &buf, &tmp);

            // ITU-R BS.1770: update spectrum to measure LUFS
            // Process the LUFS filters
            biquad_process(tmp, tmp, to_process, &hishelf);
            biquad_process(tmp, tmp, to_process, &hipass);

            // Compute RMS value
            for (size_t i=0; i<to_process; ++i)
                rms    += tmp[i] * tmp[i];

            // Update pointers
            buf        += to_process;
            buflen     -= to_process;
        }

        // Return the final RMS value
        return sqrt(rms * norm);
    }

    bool perform_norming(float **items, size_t *nitems, float *buf, size_t buflen, int sampleRate)
    {
        // Estimate number of DSP modules
        size_t count = 0;
        for (size_t i=0; tonestack_dsp[i] != NULL; ++i)
            ++count;

        // Allocate RMS (norming) array
        float *rms  = reinterpret_cast<float *>(::malloc(sizeof(float) * count));
        if (!rms)
            return false;
        *items      = rms;
        *nitems     = count;

        float *tmp  = reinterpret_cast<float *>(::malloc(BUFFER_SIZE * sizeof(float)));
        if (!tmp)
        {
            ::free(rms);
            return false;
        }

        // Estimate RMS for each module
        for (size_t i=0; i<count; ++i)
        {
            printf("Processing tone stack #%d...\n", int(i));
            rms[i] = estimate_rms(tonestack_dsp[i], sampleRate, tmp, buf, buflen);
            if (rms[i] < 0.0f)
            {
                ::free(tmp);
                ::free(rms);
                return false;
            }
        }

        // We consider that RMS of module #0 is a reference (ideal) RMS
        float norm = rms[0];
        for (size_t i=0; i<count; ++i)
            rms[i] = norm / rms[i];

        return true;
    }

    void output_info(const float *norm, size_t count)
    {
        printf("\nconst float tonestack_norm[] = \n{\n    ");
        for (size_t i=0; i<count; ++i)
        {
            printf("%.6f", norm[i]);
            if (i < (count-1))
                printf(", ");
            if ((i & 0x3) == 0x3)
                printf("\n    ");
        }
        printf("\n};\n\n");
    }

    int main(int argc, const char *argv[])
    {
        if (argc < 2)
        {
            plug_error("Required arguments: <audio signal file>");
            return 1;
        }

        const char *fname = argv[1];
        float *buf = NULL;
        size_t buflen = 0;
        int sampleRate = 0;

        if (!read_audio_file(fname, &buf, &buflen, &sampleRate))
        {
            plug_error("Could not read audio file %s", fname);
            return 2;
        }

        if (sampleRate != 48000)
        {
            plug_error("The audio file should have 48kHz sample rate");
            ::free(buf);
            return 3;
        }

        // Estimate norming coefficients
        float *norm  = NULL;
        size_t count = 0;
        if (!perform_norming(&norm, &count, buf, buflen, sampleRate))
        {
            ::free(buf);
            plug_error("Could not perform norming of DSP modules");
        }

        // Output norming coefficients
        output_info(norm, count);

        ::free(norm);
        ::free(buf);

        return 0;
    }
}

#ifdef TS_NORMING
int main(int argc, const char *argv[])
{
    return ts_norm::main(argc, argv);
}
#endif

