/*
 * valve.h
 *
 *  Created on: 11 янв. 2020 г.
 *      Author: Vladimir Sadovnikov <lsp.plugin@gmail.com>
 *
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose, Steve Poskitt
 * This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef TAMGAMP_LV2_RESOURCES_VALVE_H_
#define TAMGAMP_LV2_RESOURCES_VALVE_H_

#include <stdint.h>

namespace tamgamp_lv2
{
    /****************************************************************
     * 1-dimensional function tables for linear interpolation
     *
     * table1d and table1d_imp<size> must only differ in the last
     * element, so that the typecast for tubetab below will work.
     * Can't use inheritance because then C initializers will not
     * work and initialization will be more awkward or less efficient.
     */

    struct table1d   // 1-dimensional function table
    {
        float low;
        float high;
        float istep;
        int32_t size;
        float data[];
    };

    template <int32_t tab_size>
        struct table1d_imp
        {
            float low;
            float high;
            float istep;
            int32_t size;
            float data[tab_size];

            operator table1d&() const
            {
                return *(table1d*)this;
            }
        };

    enum {
        TUBE_TABLE_12AX7_68k,
        TUBE_TABLE_12AX7_250k,
        TUBE_TABLE_6V6_68k,
        TUBE_TABLE_6V6_250k,
        TUBE_TABLE_12AU7_68k,
        TUBE_TABLE_12AU7_250k,
        TUBE_TABLE_6DJ8_68k,
        TUBE_TABLE_6DJ8_250k,
        TUBE_TABLE_12AT7_68k,
        TUBE_TABLE_12AT7_250k,
        TUBE_TABLE_6C16_68k,
        TUBE_TABLE_6C16_250k,
        TUBE_TABLE_6L6CG_68k,
        TUBE_TABLE_6L6CG_250k,
        TUBE_TABLE_EL34_68k,
        TUBE_TABLE_EL34_250k,
        TUBE_TABLE_12AY7_68k,
        TUBE_TABLE_12AY7_250k,
        TUBE_TABLE_JJECC83S_68k,
        TUBE_TABLE_JJECC83S_250k,
        TUBE_TABLE_JJECC99_68k,
        TUBE_TABLE_JJECC99_250k,
        TUBE_TABLE_EL84_68k,
        TUBE_TABLE_EL84_250k,
        TUBE_TABLE_EF86_68k,
        TUBE_TABLE_EF86_250k,
        TUBE_TABLE_SVEL34_68k,
        TUBE_TABLE_SVEL34_250k,
        TUBE_TABLE_SIZE
    };

    extern table1d *tubetab[TUBE_TABLE_SIZE];

    /*
     *  definitions for ffunction(float Ftube(int32_t,float), "valve.h", "");
     *  in gx_amp.dsp - gx_ampmodul.dsp
     */
    static inline double Ftube(int32_t table, double Vgk)
    {
        const table1d& tab = *tubetab[table];
        double f = (Vgk - tab.low) * tab.istep;
        int32_t i = static_cast<int32_t>(f);
        if (i < 0)
            return tab.data[0];
        if (i >= tab.size-1)
            return tab.data[tab.size-1];

        f -= i;
        return tab.data[i]*(1-f) + tab.data[i+1]*f;
    }
}


#endif /* TAMGAMP_LV2_RESOURCES_VALVE_H_ */
