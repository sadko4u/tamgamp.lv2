/*
 * tamgamp_gx.h
 *
 *  Created on: 27 февр. 2020 г.
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


#ifndef TAMGAMP_LV2_TAMGAMP_GX_H_
#define TAMGAMP_LV2_TAMGAMP_GX_H_

#include <stddef.h>
#include <lv2.h>

#include <resources/faust.h>
#include <zita-resampler/resampler.h>

#include "../tamgamp.lv2/util/Bypass.h"
#include "../tamgamp.lv2/util/Crossfade.h"

namespace tamgamp_lv2
{
    namespace tamgamp_gx
    {
        enum port_t
        {
            PORT_IN,
            PORT_OUT,
            PORT_BYPASS,

            PORT_AMPLIFIER,     // Amplifier model
            PORT_TONESTACK,     // Tone stack model
            PORT_PRE_GAIN,      // Input Pre-gain in dB
            PORT_GAIN,          // Amplifier gain
            PORT_BASS,          // Amplifier/Tonestack bass
            PORT_MIDDLE,        // Amplifier/Tonestack middle
            PORT_TREBLE,        // Amplifier/Tonestack treble
            PORT_POST_GAIN,     // Output post-gain in dB

            PORTS_TOTAL
        };

        extern LV2_Descriptor   lv2_descriptor;

        class plugin
        {
            private:
                plugin & operator = (const plugin &);

            protected:
                typedef struct amp_binding_t
                {
                    faust::dsp     *dsp;

                    float           norm;           // Norming gain for constant loudness

                    float          *pre_gain;
                    float          *gain;
                    float          *bass;
                    float          *middle;
                    float          *treble;
                    float          *post_gain;
                } amp_binding_t;

                typedef struct ts_binding_t
                {
                    faust::dsp     *dsp;

                    float           norm;           // Norming gain

                    float          *bass;
                    float          *middle;
                    float          *treble;
                } ts_binding_t;

                class amp_binder: public faust::UI
                {
                    private:
                        amp_binding_t  *list;
                        size_t          count;

                    public:
                        explicit inline amp_binder(amp_binding_t *list, size_t count) { this->list = list; this->count = count; };
                        virtual void addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step);
                        void bind();
                };

                class ts_binder: public faust::UI
                {
                    private:
                        ts_binding_t   *list;
                        size_t          count;

                    public:
                        explicit ts_binder(ts_binding_t *list, size_t count) { this->list = list; this->count = count; };
                        virtual void addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step);
                        void bind();
                };

            private:
                void           *lv2_ports[PORTS_TOTAL];

                float           pre_gain;
                float           gain;
                float           bass;
                float           middle;
                float           treble;
                float           post_gain;

                float          *in_buf;
                float          *out_buf;
                float          *tmp_buf;            // Temporary buffer for audio processing
                float          *wet_buf;            // Wet signal buffer
                float          *cf_c_buf;           // Crossfade current buffer
                float          *cf_p_buf;           // Crossfade pending buffer
                amp_binding_t  *v_asim;             // Array of amplifier simulators
                ts_binding_t   *v_tstack;           // Array of tone stack simulators
                amp_binding_t  *c_asim;             // Current amplifier simulator
                amp_binding_t  *p_asim;             // Pending amplifier simulator for replacement
                ts_binding_t   *c_tstack;           // Current tone stack simulator
                ts_binding_t   *p_tstack;           // Pending tone stack simulator
                size_t          num_asim;           // Number of amplifier simulators
                size_t          num_tstack;         // Number of tone stack simulators
                bool            b_resampling;       // Use resampling flag
                int             sr_outer, sr_inner; // Sample rate for outer signal and inner processing
                size_t          bufsize;            // Size of each data buffer

                Resampler       rs_up, rs_down;     // Resamplers to perform upsampling and downsampling
                Bypass          bypass;
                Crossfade       cf_asim, cf_tstack; // Crossfades for amplifier and tone stack

            protected:
                void            apply_amp_settings(amp_binding_t &b);
                void            apply_ts_settings(ts_binding_t &b);

                static size_t   count_dsp(faust::dsp_factory_t *list);
                void            normalize(float *buf, ts_binding_t *bind, size_t count);
                size_t          probe_asim();
                size_t          probe_tstack();
                float           calc_amp_norm(float gain, size_t index);

            protected:
                bool            sync_ports();
                void            init_processors();
                void            init_resamplers();
                void            destroy_processors();
                inline float    read_float(port_t port, float dfl);
                inline size_t   read_uint(port_t port, size_t dfl);
                inline size_t   read_bool(port_t port, bool dfl);
                inline float   *get_float_buf(port_t port);

            public:
                explicit        plugin(double sample_rate);
                ~plugin();

            public:
                void            connect(size_t port, void *data);
                void            activate();
                void            run(size_t samples);
                void            deactivate();

        };
    }
}



#endif /* TAMGAMP_LV2_TAMGAMP_GX_H_ */
