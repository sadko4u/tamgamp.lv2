/*
 * lv2.cpp
 *
 *  Created on: 6 янв. 2020 г.
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

#include <stddef.h>
#include <string.h>

#include <lv2.h>

#include "../include/tamgamp.lv2/debug.h"
#include "../include/tamgamp.lv2/product.h"
#include "../include/tamgamp.lv2/tamgamp.h"
#include "../include/tamgamp.lv2/tamgamp_gx.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
    const LV2_Descriptor *do_log(const LV2_Descriptor * d)
    {
        plug_info("Return plugin URL: %s\n", d->URI);
        return d;
    }

    LV2_SYMBOL_EXPORT
    const LV2_Descriptor *lv2_descriptor(uint32_t index)
    {
        if (index == 0)
            return do_log(&tamgamp_lv2::tamgamp::lv2_descriptor);
        else if (index == 1)
            return do_log(&tamgamp_lv2::tamgamp_gx::lv2_descriptor);

        return NULL;
    }
#ifdef __cplusplus
}
#endif /* __cplusplus */


