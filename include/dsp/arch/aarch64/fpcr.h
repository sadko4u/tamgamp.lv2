/*
 * fpcr.h
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

#ifndef DSP_ARCH_AARCH64_FPCR_H_
#define DSP_ARCH_AARCH64_FPCR_H_

#define FPCR_IOE                (1 << 8)    /* Invalid operation exception enable */
#define FPCR_DZE                (1 << 9)    /* Division by zero exception enable */
#define FPCR_OFE                (1 << 10)   /* Overflow exception enable */
#define FPCR_UFE                (1 << 11)   /* Underflow exception enable */
#define FPCR_IXE                (1 << 12)   /* Inexact exception enable */
#define FPCR_IDE                (1 << 15)   /* Input Denormal exception enable */
#define FPCR_FZ16               (1 << 19)   /* Flush-to-zero mode control bit on half-precision data-processing instructions */
#define FPCR_RMODE_MASK         (3 << 22)   /* Rounding mode mask */
#define FPCR_RMODE_RN           (0 << 22)   /* Rounding to nearest */
#define FPCR_RMODE_RP           (1 << 22)   /* Rounding towards plus infinity  */
#define FPCR_RMODE_RM           (2 << 22)   /* Rounding towards minus infinity  */
#define FPCR_RMODE_RZ           (3 << 22)   /* Rounding towards zero  */
#define FPCR_FZ                 (1 << 24)   /* Flush-to-zero mode */
#define FPCR_DN                 (1 << 25)   /* Default NaN mode control */
#define FPCR_AHP                (1 << 26)   /* Alternative half-precision control */

namespace aarch64
{
    inline uint64_t read_fpcr()
    {
        uint64_t fpcr = 0;

        ARCH_AARCH64_ASM
        (
            __ASM_EMIT("mrs         %[fpcr], FPCR")
            : [fpcr] "=&r" (fpcr)
            : :
        );

        return fpcr;
    }

    inline void write_fpcr(uint64_t fpcr)
    {
        ARCH_AARCH64_ASM
        (
            __ASM_EMIT("msr         FPCR, %[fpcr]")
            :
            : [fpcr] "r" (fpcr)
            :
        );
    }
}



#endif /* DSP_ARCH_AARCH64_FPCR_H_ */
