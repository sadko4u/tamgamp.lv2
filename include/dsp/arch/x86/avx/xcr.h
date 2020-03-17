/*
 * xcr.h
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

#ifndef DSP_ARCH_X86_AVX_XCR_H_
#define DSP_ARCH_X86_AVX_XCR_H_

namespace x86
{
    #ifdef ARCH_X86_AVX
        uint64_t read_xcr(umword_t xcr_id)
        {
            uint64_t xcr;

            ARCH_X86_ASM
            (
                __ASM_EMIT64("xor       %%rax, %%rax")
                __ASM_EMIT("xgetbv")
                __ASM_EMIT64("shl       $32, %%rdx")
                __ASM_EMIT64("or        %%rdx, %%rax")
                : __IF_32("=A" (xcr)) __IF_64("=a" (xcr))
                : "c" (xcr_id)
                : __IF_64("%rdx")
            );
            return xcr;
        }
    #else
        uint64_t read_xcr(umword_t xcr_id)
        {
            return 0;
        }
    #endif /* ARCH_X86_AVX */
}

#endif /* DSP_ARCH_X86_AVX_XCR_H_ */
