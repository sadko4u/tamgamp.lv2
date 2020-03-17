/*
 * gxsim.h
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

#ifndef RESOURCES_GXSIM_H_
#define RESOURCES_GXSIM_H_

#include <resources/faust.h>

#define GXSIM_GAIN_NORM_STEPS       32

namespace tamgamp_lv2
{
    /**
     * Null-terminated list of amplifier simulators
     */
    extern faust::dsp_factory_t gxsim_dsp[];

    /**
     * Output gain norming coefficients
     */
    extern const float gxsim_norming[];
}

#endif /* RESOURCES_GXSIM_H_ */
