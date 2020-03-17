/*
 * fpu.h
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

#ifndef DSP_ARCH_X86_FPU_H_
#define DSP_ARCH_X86_FPU_H_

namespace x86
{
    static uint32_t fpu_read_cr()
    {
        uint16_t cr = 0;

        ARCH_X86_ASM
        (
            __ASM_EMIT("fstcw   %[cr]")

            : [cr] "+m" (cr)
            :
            : "memory"
        );

        return cr;
    }

    static void fpu_write_cr(uint32_t value)
    {
        uint16_t cr     = value;

        ARCH_X86_ASM
        (
            __ASM_EMIT("fldcw   %[cr]")

            :
            : [cr] "m" (cr)
            :
        );
    }
}

#endif /* DSP_ARCH_X86_FPU_H_ */
