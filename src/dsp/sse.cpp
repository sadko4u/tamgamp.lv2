/*
 * sse.cpp
 *
 *  Created on: 28 февр. 2020 г.
 *      Author: sadko
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

#include <dsp/dsp.h>

#ifdef ARCH_X86

#include <dsp/arch/x86/features.h>
#include <dsp/arch/x86/sse/mxcsr.h>

namespace sse
{
    using namespace x86;

    static dsp::start_t     dsp_start       = NULL;
    static dsp::finish_t    dsp_finish      = NULL;

    void start(dsp::context_t *ctx)
    {
        dsp_start(ctx);
        uint32_t    mxcsr       = read_mxcsr();
        ctx->data[ctx->top++]   = mxcsr;
        write_mxcsr(mxcsr | MXCSR_ALL_MASK | MXCSR_FZ | MXCSR_DAZ);
    }

    void finish(dsp::context_t *ctx)
    {
        write_mxcsr(ctx->data[--ctx->top]);
        dsp_finish(ctx);
    }

    #define EXPORT2(function, export)           dsp::function = sse::export;
    #define EXPORT1(function)                   EXPORT2(function, function);

    void dsp_init(const cpu_features_t *f)
    {
        if ((f->features & CPU_OPTION_SSE) != CPU_OPTION_SSE)
            return;

        // Initialize MXCSR mask
        if (f->features & CPU_OPTION_FXSAVE)
            init_mxcsr_mask();
        else
            mxcsr_mask  = MXCSR_DEFAULT;

        // Save previous entry points
        dsp_start                       = dsp::start;
        dsp_finish                      = dsp::finish;

        // Export routines
        EXPORT1(start);
        EXPORT1(finish);
    }

    #undef EXPORT1
    #undef EXPORT2
}


#endif



