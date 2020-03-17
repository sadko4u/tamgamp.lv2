/*
 * atomic.h
 *
 *  Created on: 11 янв. 2020 г.
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

#ifndef TAMGAMP_LV2_ATOMIC_H_
#define TAMGAMP_LV2_ATOMIC_H_

#include <stdint.h>

namespace tamgamp_lv2
{
    inline int32_t atomic_get(volatile int32_t &var) { return var; }
    inline uint32_t atomic_get(volatile uint32_t &var) { return var; }
    inline int32_t atomic_get(volatile int32_t *var) { return *var; }
    inline uint32_t atomic_get(volatile uint32_t *var) { return *var; }

    inline int32_t atomic_set(volatile int32_t &var, int32_t value) { return var = value; }
    inline uint32_t atomic_set(volatile uint32_t &var, uint32_t value) { return var = value; }
    inline int32_t atomic_set(volatile int32_t *var, int32_t value) { return *var = value; }
    inline uint32_t atomic_set(volatile uint32_t *var, uint32_t value) { return *var = value; }

}


#endif /* TAMGAMP_LV2_ATOMIC_H_ */
