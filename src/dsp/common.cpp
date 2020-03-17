/*
 * common.cpp
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

namespace native
{
    extern void dsp_init();
}

IF_ARCH_X86(
    namespace x86
    {
        extern void dsp_init();
    }
)

IF_ARCH_ARM(
    namespace arm
    {
        extern void dsp_init();
    }
)

IF_ARCH_AARCH64(
    namespace aarch64
    {
        extern void dsp_init();
    }
)

// Declare static variables
namespace dsp
{
    void    (* start)(dsp::context_t *ctx) = NULL;
    void    (* finish)(dsp::context_t *ctx) = NULL;
    info_t *(*info)() = NULL;
}

namespace dsp
{
    void init_context(dsp::context_t *ctx)
    {
        ctx->top        = 0;
    }

    void init()
    {
        // Consider already initialized
        if (start != NULL)
            return;

        // Initialize native functions
        native::dsp_init();

        // Initialize architecture-dependent functions that utilize architecture-specific features
        IF_ARCH_X86(x86::dsp_init());
        IF_ARCH_ARM(arm::dsp_init());
        IF_ARCH_AARCH64(aarch64::dsp_init());
    }
}



