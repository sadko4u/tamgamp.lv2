/*
 * plugin_gx.cpp
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

#include "../../include/tamgamp.lv2/tamgamp_gx.h"

#include <string.h>

#include <dsp/dsp.h>

#include <resources/gxsim.h>
#include <resources/tonestack.h>
#include "../../include/tamgamp.lv2/debug.h"
#include "../../include/tamgamp.lv2/product.h"
#include "../../include/tamgamp.lv2/units.h"

#define BUF_SIZE            2048
#define BUF_GAP             64
#define INNER_SAMPLE_RATE   96000
#define RESAMPLE_QUALITY    16
#define CROSSFADE_TIME      0.005       /* 5 msec crossfade time to change one processor to another */

namespace tamgamp_lv2
{
    namespace tamgamp_gx
    {
        void plugin::amp_binder::bind()
        {
            for ( ; count > 0; --count, ++list)
                list->dsp->buildUserInterface(this);
        }

        void plugin::amp_binder::addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step)
        {
            if (!::strcmp(label, ".amp.pregain"))
                list->pre_gain  = zone;
            else if (!::strcmp(label, ".amp.gain"))
                list->gain      = zone;
            else if (!::strcmp(label, ".amp.bass"))
                list->bass      = zone;
            else if (!::strcmp(label, ".amp.middle"))
                list->middle    = zone;
            else if (!::strcmp(label, ".amp.treble"))
                list->treble    = zone;
            else if (!::strcmp(label, ".amp.postgain"))
                list->post_gain = zone;
        }

        void plugin::ts_binder::bind()
        {
            for ( ; count > 0; --count, ++list)
                list->dsp->buildUserInterface(this);
        }

        void plugin::ts_binder::addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step)
        {
            if (!::strcmp(label, ".ts.bass"))
                list->bass      = zone;
            else if (!::strcmp(label, ".ts.middle"))
                list->middle    = zone;
            else if (!::strcmp(label, ".ts.treble"))
                list->treble    = zone;
        }

        float plugin::read_float(port_t port, float dfl)
        {
            float *pv = reinterpret_cast<float *>(lv2_ports[port]);
            return (pv != NULL) ? *pv : dfl;
        }

        size_t plugin::read_uint(port_t port, size_t dfl)
        {
            float *pv = reinterpret_cast<float *>(lv2_ports[port]);
            return (pv != NULL) ? size_t(*pv) : dfl;
        }

        size_t plugin::read_bool(port_t port, bool dfl)
        {
            float *pv = reinterpret_cast<float *>(lv2_ports[port]);
            return (pv != NULL) ? (*pv >= 0.5f): dfl;
        }

        float *plugin::get_float_buf(port_t port)
        {
            float *pv = reinterpret_cast<float *>(lv2_ports[port]);
            return (pv != NULL) ? pv : NULL;
        }

        float plugin::calc_amp_norm(float gain, size_t index)
        {
            const float *gains = &gxsim_norming[index * GXSIM_GAIN_NORM_STEPS];
            ssize_t x = (gain * GXSIM_GAIN_NORM_STEPS) - 1;

//            plug_trace("    index=%d, gain=%f, x=%d",
//                    int(index), gain, int(x));

            if (x <= 0)
                return gains[0];
            else if (x >= (GXSIM_GAIN_NORM_STEPS-1))
                return gains[GXSIM_GAIN_NORM_STEPS-1];

            float d = gain - x / float(GXSIM_GAIN_NORM_STEPS);
            return gains[x]*(1-d) + gains[x+1] * d;
        }

        plugin::plugin(double sample_rate)
        {
            for (size_t i=0; i<PORTS_TOTAL; ++i)
                lv2_ports[i]    = NULL;

            pre_gain        = 1.0f;
            gain            = 0.5f;
            bass            = 0.5f;
            middle          = 0.5f;
            treble          = 0.5f;
            post_gain       = 1.0f;

            in_buf          = NULL;
            out_buf         = NULL;
            tmp_buf         = NULL;
            wet_buf         = NULL;
            v_asim          = NULL;
            v_tstack        = NULL;
            c_asim          = NULL;
            p_asim          = NULL;
            c_tstack        = NULL;
            p_tstack        = NULL;
            num_asim        = 0;
            num_tstack      = 0;
            sr_outer        = sample_rate;
            b_resampling    = (sr_outer < INNER_SAMPLE_RATE);
            sr_inner        = (b_resampling) ? INNER_SAMPLE_RATE : sr_outer; // Minimum INNER_SAMPLE_RATE kHz
            bufsize         = BUF_SIZE;

            init_resamplers();
            init_processors();

            bypass.init(sr_outer, CROSSFADE_TIME);
            cf_asim.init(sr_inner, CROSSFADE_TIME);
            cf_tstack.init(sr_inner, CROSSFADE_TIME);
        }

        plugin::~plugin()
        {
            destroy_processors();
            if (tmp_buf != NULL)
            {
                delete [] tmp_buf;
                tmp_buf     = NULL;
                wet_buf     = NULL;
            }
        }

        void plugin::init_processors()
        {
            num_asim        = count_dsp(gxsim_dsp);
            num_tstack      = count_dsp(tonestack_dsp);

            // Create amplifier processors
            v_asim          = new amp_binding_t[num_asim];
            for (size_t i=0; i<num_asim; ++i)
            {
                v_asim[i].dsp       = gxsim_dsp[i]();         // Call factory to create DSP processor

                v_asim[i].norm      = calc_amp_norm(gain, i);

                v_asim[i].pre_gain  = NULL;
                v_asim[i].gain      = NULL;
                v_asim[i].bass      = NULL;
                v_asim[i].middle    = NULL;
                v_asim[i].treble    = NULL;
                v_asim[i].post_gain = NULL;

                v_asim[i].dsp->init(sr_inner);
            }

            // Bind amplifier processor parameters
            amp_binder asim_binder(v_asim, num_asim);
            asim_binder.bind();

            // Create tone stack processors
            v_tstack        = new ts_binding_t[num_tstack];
            for (size_t i=0; i<num_tstack; ++i)
            {
                v_tstack[i].dsp     = tonestack_dsp[i]();
                v_tstack[i].bass    = NULL;
                v_tstack[i].middle  = NULL;
                v_tstack[i].treble  = NULL;

                // Norming factors
                v_tstack[i].norm    = tonestack_norm[i];
                v_tstack[i].dsp->init(sr_inner);
            }

            // Bind tone stack processor parameters
            ts_binder tstack_binder(v_tstack, num_tstack);
            tstack_binder.bind();

            // Set current amplifier simulator and tone stack
            c_asim      = &v_asim[0];
            c_tstack    = &v_tstack[0];
        }

        void plugin::init_resamplers()
        {
            bufsize         = BUF_SIZE;

            // Compute the buffer size for processing and allocate the buffer
            if (b_resampling)
            {
                rs_up.setup(sr_outer, sr_inner, 1, RESAMPLE_QUALITY);
                rs_down.setup(sr_inner, sr_outer, 1, RESAMPLE_QUALITY);
                bufsize         = BUF_GAP + (BUF_SIZE * (sr_inner + 1)) / sr_outer;
            }

            // Allocate buffers
            tmp_buf         = new float[bufsize * 4];
            wet_buf         = &tmp_buf[bufsize];
            cf_c_buf        = &wet_buf[bufsize];
            cf_p_buf        = &cf_c_buf[bufsize];

            // Cleanup buffers
            ::bzero(tmp_buf, bufsize * sizeof(float) * 4);
        }

        void plugin::destroy_processors()
        {
            // Destroy amp simulators
            if (v_asim != NULL)
            {
                for (size_t i=0; i<num_asim; ++i)
                    if (v_asim[i].dsp != NULL)
                    {
                        delete v_asim[i].dsp;
                        v_asim[i].dsp = NULL;
                    }
                delete [] v_asim;
                v_asim = NULL;
            }

            // Destroy tone stack simpulators
            if (v_tstack != NULL)
            {
                for (size_t i=0; i<num_tstack; ++i)
                    if (v_tstack[i].dsp != NULL)
                    {
                        delete v_tstack[i].dsp;
                        v_tstack[i].dsp = NULL;
                    }
                delete [] v_tstack;
                v_tstack = NULL;
            }
        }

        size_t plugin::count_dsp(faust::dsp_factory_t *list)
        {
            size_t count = 0;
            for (size_t i=0; list[i] != NULL; ++i)
                ++count;
            return count;
        }

        void plugin::activate()
        {
        }

        void plugin::deactivate()
        {
        }

        void plugin::connect(size_t port, void *data)
        {
            if (port > PORTS_TOTAL)
                return;
            lv2_ports[port] = data;
        }

        bool plugin::sync_ports()
        {
            // Get input and output data buffers
            in_buf              = get_float_buf(PORT_IN);
            out_buf             = get_float_buf(PORT_OUT);
            if ((!in_buf) || (!out_buf))
                return false;

            // Commit bypass state
            float enable        = read_float(PORT_BYPASS, 0.0f);
            bypass.set_bypass(enable <= 0.5f);

            // Read other settings
            pre_gain            = db_to_gain(read_float(PORT_PRE_GAIN, pre_gain));
            gain                = read_float(PORT_GAIN, gain) * 0.01f;
            bass                = read_float(PORT_BASS, bass) * 0.01f;
            middle              = read_float(PORT_MIDDLE, middle) * 0.01f;
            treble              = read_float(PORT_TREBLE, treble) * 0.01f;
            post_gain           = db_to_gain(read_float(PORT_POST_GAIN, post_gain));

    //        plug_info("pre_gain=%f, gain=%f, bass=%f, middle=%f, treble=%f, master=%f, output=%f, post_gain=%f",
    //                pre_gain, gain, bass, middle, treble, master, output, post_gain);

            // Synchronize settings with all DSP amplifier simulators
            for (size_t i=0; i<num_asim; ++i)
            {
                v_asim[i].norm  = calc_amp_norm(gain, i);

                apply_amp_settings(v_asim[i]);
            }

            // Synchronize settings with all DSP tone stack simulators
            for (size_t i=0; i<num_tstack; ++i)
                apply_ts_settings(v_tstack[i]);

            return true;
        }

        void plugin::apply_ts_settings(ts_binding_t &b)
        {
            if (b.bass != NULL)
                *(b.bass)           = bass;
            if (b.middle != NULL)
                *(b.middle)         = middle;
            if (b.treble != NULL)
                *(b.treble)         = treble;
        }

        void plugin::apply_amp_settings(amp_binding_t &b)
        {
            if (b.pre_gain != NULL)
                *(b.pre_gain)       = pre_gain;
            if (b.gain != NULL)
                *(b.gain)           = gain;
            if (b.bass != NULL)
                *(b.bass)           = bass;
            if (b.middle != NULL)
                *(b.middle)         = middle;
            if (b.treble != NULL)
                *(b.treble)         = treble;
            if (b.post_gain != NULL)
                *(b.post_gain)      = post_gain * b.norm;
        }

        size_t plugin::probe_asim()
        {
            // Check if there is pending simulator and toggle cross-fade
            size_t amp          = read_uint(PORT_AMPLIFIER, 0);
            amp_binding_t *xamp = &v_asim[(amp < num_asim) ? amp : 0];

            if ((p_asim == NULL) && (c_asim != xamp))
            {
                xamp->dsp->instanceClear();     // Reset state of the processor
                apply_amp_settings(*xamp);
                p_asim              = xamp;
                cf_asim.toggle();
            }

            // Check if we can release current simulator and switch to pending
            size_t remaining    = cf_asim.remaining();
            if ((remaining <= 0) && (p_asim != NULL))
            {
                c_asim              = p_asim;
                p_asim              = NULL;
            }

            return remaining;
        }

        size_t plugin::probe_tstack()
        {
            // Check if there is pending simulator and toggle cross-fade
            size_t tstack           = read_uint(PORT_TONESTACK, 0);
            ts_binding_t *xts       = &v_tstack[(tstack < num_tstack) ? tstack : 0];
            if ((p_tstack == NULL) && (c_tstack != xts))
            {
                xts->dsp->instanceClear();   // Reset state of the processor
                apply_ts_settings(*xts);
                p_tstack            = xts;
                cf_tstack.toggle();
            }

            // Check if we can release current simulator and switch to pending
            size_t remaining    = cf_tstack.remaining();
            if ((remaining <= 0) && (p_tstack != NULL))
            {
                c_tstack            = p_tstack;
                p_tstack            = NULL;
            }

            return remaining;
        }

        void plugin::normalize(float *buf, ts_binding_t *bind, size_t count)
        {
            float norm = bind->norm;
            for (size_t i=0; i<count; ++i)
                buf[i]     *= norm;
        }

        void plugin::run(size_t samples)
        {
            // Synchronize ports, protect from some buggy implementations
            if (!sync_ports())
            {
                if (out_buf != NULL)
                    ::bzero(out_buf, samples * sizeof(float));
                return;
            }

            // Do main stuff.
            while (samples > 0)
            {
                size_t to_process = (samples > BUF_SIZE) ? BUF_SIZE : samples;

                // Step 1. Perform upsampling (if required)
                float *in       = in_buf;
                size_t isamples = to_process;
                if (b_resampling)
                {
                    isamples            = (to_process * sr_outer) / sr_inner;
                    ::bzero(tmp_buf, bufsize);

                    rs_up.inp_data      = in;
                    rs_up.inp_count     = to_process;
                    rs_up.out_data      = tmp_buf;
                    rs_up.out_count     = bufsize;

                    rs_up.process();
                    isamples            = bufsize - rs_up.out_count;
                    in                  = tmp_buf;
                }

                // Step 2. Perform amplifier processing
                for (size_t off = 0; off < isamples; )
                {
                    // Set active amplifier (if currently possible)
                    size_t remaining    = probe_asim();
                    size_t left         = isamples - off;
                    float *xin          = &in[off];
                    float *xout         = &tmp_buf[off];

                    if (remaining > 0)
                    {
                        // Call both processors and perform cross-fade
                        if (left > remaining)
                            left            = remaining;

                        c_asim->dsp->compute(left, &xin, &cf_c_buf);
                        p_asim->dsp->compute(left, &xin, &cf_p_buf);
                        cf_asim.process(xout, cf_c_buf, cf_p_buf, left);
                    }
                    else // Call active processor only
                        c_asim->dsp->compute(left, &xin, &xout);

                    off += left;
                }

                // Step 3. Perform tonestack processing
                in                  = tmp_buf;
                for (size_t off = 0; off < isamples; )
                {
                    // Set active amplifier (if currently possible)
                    size_t remaining    = probe_tstack();
                    size_t left         = isamples - off;
                    float *xin          = &in[off];
                    float *xout         = &tmp_buf[off];

                    if (remaining > 0)
                    {
                        // Call both processors and perform cross-fade
                        if (left > remaining)
                            left            = remaining;

                        c_tstack->dsp->compute(left, &xin, &cf_c_buf);
                        p_tstack->dsp->compute(left, &xin, &cf_p_buf);
                        normalize(cf_c_buf, c_tstack, left);
                        normalize(cf_p_buf, p_tstack, left);
                        cf_tstack.process(xout, cf_c_buf, cf_p_buf, left);
                    }
                    else // Call active processor only
                    {
                        c_tstack->dsp->compute(left, &xin, &xout);
                        normalize(xout, c_tstack, left);
                    }

                    off += left;
                }

                // Step 4. Perform downsampling (if required)
                if (b_resampling)
                {
                    rs_down.inp_data    = tmp_buf;
                    rs_down.out_data    = wet_buf;
                    rs_down.inp_count   = isamples;
                    rs_down.out_count   = to_process + 1;       // Trick to drain input (+1 sample)

                    rs_down.process();
                    in                  = wet_buf;
                }
                else
                    in                  = tmp_buf;

                // Step 5. Apply bypass
                bypass.process(out_buf, in_buf, in, to_process);

                // Shift pointers
                in_buf         += to_process;
                out_buf        += to_process;
                samples        -= to_process;
            }
        }

        //-------------------------------------------------------------------------
        // LV2 stuff
        LV2_Handle lv2_instantiate(
                const struct _LV2_Descriptor *descriptor,
                double sample_rate,
                const char *bundle_path,
                const LV2_Feature * const *features
        )
        {
            dsp::init();

            plug_info("descriptor->URI=%s, PLUGIN_URI=%s", descriptor->URI, TAMGAMP_GX_URI);
            if (!::strcmp(descriptor->URI, TAMGAMP_GX_URI))
                return new plugin(sample_rate);
            return NULL;
        }

        void lv2_connect_port(
                LV2_Handle instance,
                uint32_t port,
                void *data_location
        )
        {
            plugin *_this = reinterpret_cast<plugin *>(instance);
            _this->connect(port, data_location);
        }

        void lv2_activate(LV2_Handle instance)
        {
            plugin *_this = reinterpret_cast<plugin *>(instance);
            _this->activate();
        }

        void lv2_run(LV2_Handle instance, uint32_t sample_count)
        {
            dsp::context_t ctx;
            dsp::start(&ctx);

            plugin *_this = reinterpret_cast<plugin *>(instance);
            _this->run(sample_count);

            dsp::finish(&ctx);
        }

        void lv2_deactivate(LV2_Handle instance)
        {
            plugin *_this = reinterpret_cast<plugin *>(instance);
            _this->deactivate();
        }

        void lv2_cleanup(LV2_Handle instance)
        {
            plugin *_this = reinterpret_cast<plugin *>(instance);
            delete _this;
        }

        const void *lv2_extension_data(const char * uri)
        {
            return NULL;
        }

        LV2_Descriptor lv2_descriptor =
        {
            TAMGAMP_GX_URI,
            lv2_instantiate,
            lv2_connect_port,
            lv2_activate,
            lv2_run,
            lv2_deactivate,
            lv2_cleanup,
            lv2_extension_data
        };
    }
}

