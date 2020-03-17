/*
 * avx.cpp
 *
 *  Created on: 28 февр. 2020 г.
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

#include <dsp/dsp.h>

#ifdef ARCH_X86

#include <dsp/arch/x86/features.h>
#include <dsp/arch/x86/avx/xcr.h>

namespace avx
{
    using namespace x86;

    #define EXPORT2(function, export)               dsp::function = avx::export;
    #define EXPORT1(function)                       EXPORT2(function, function)

    void dsp_init(const cpu_features_t *f)
    {
        if (!(f->features & CPU_OPTION_AVX))
            return;

//        bool favx   = feature_check(f, FEAT_FAST_AVX);
//        bool ffma   = favx && feature_check(f, FEAT_FAST_FMA3);
    }

    #undef EXPORT1
    #undef EXPORT2
}

#endif

