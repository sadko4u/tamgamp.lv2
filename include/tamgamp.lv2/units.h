/*
 * units.h
 *
 *  Created on: 9 янв. 2020 г.
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

#ifndef TAMGAMP_LV2_UNITS_H_
#define TAMGAMP_LV2_UNITS_H_

#include <math.h>

// Gain levels in decibels
#define GAIN_AMP_P_72_DB                    3981.073            /* +72 dB       */
#define GAIN_AMP_P_60_DB                    1000.0              /* +60 dB       */
#define GAIN_AMP_P_48_DB                    251.18861           /* +48 dB       */
#define GAIN_AMP_P_36_DB                    63.09575            /* +36 dB       */
#define GAIN_AMP_P_30_DB                    31.62277            /* +30 dB       */
#define GAIN_AMP_P_24_DB                    15.84893            /* +24 dB       */
#define GAIN_AMP_P_18_DB                    7.94328             /* +18 dB       */
#define GAIN_AMP_P_12_DB                    3.98107             /* +12 dB       */
#define GAIN_AMP_P_6_DB                     1.99526             /* +6 dB        */
#define GAIN_AMP_P_3_DB                     1.412536            /* +3 dB        */
#define GAIN_AMP_0_DB                       1.0                 /* 0 dB         */
#define GAIN_AMP_M_3_DB                     0.707946            /* -3 dB        */
#define GAIN_AMP_M_6_DB                     0.50118             /* -6 dB        */
#define GAIN_AMP_M_12_DB                    0.25119             /* -12 dB       */
#define GAIN_AMP_M_18_DB                    0.12589             /* -18 dB       */
#define GAIN_AMP_M_24_DB                    0.06310             /* -24 dB       */
#define GAIN_AMP_M_36_DB                    0.01585             /* -36 dB       */
#define GAIN_AMP_M_48_DB                    0.00398             /* -48 dB       */
#define GAIN_AMP_M_60_DB                    0.001               /* -60 dB       */
#define GAIN_AMP_M_72_DB                    0.00025             /* -72 dB       */
#define GAIN_AMP_M_84_DB                    0.0000628           /* -84 dB       */
#define GAIN_AMP_M_INF_DB                   0.0                 /* -inf dB      */

namespace tamgamp_lv2
{
    /** Convert decibels to gain value
     *
     * @param db decibels
     * @return gain
     */
    inline float db_to_gain(float db)
    {
        return expf(db * M_LN10 * 0.05f);
    }

    /** Convert decibels to power value
     *
     * @param db decibels
     * @return power
     */
    inline float db_to_power(float db)
    {
        return expf(db * M_LN10 * 0.1f);
    }

    /** Convert gain value to decibels
     *
     * @param gain gain value
     * @return decibels
     */
    inline float gain_to_db(float gain)
    {
        return (20.0f / M_LN10) * logf(gain);
    }

    /** Convert powerr value to decibels
     *
     * @param pwr power value
     * @return decibels
     */
    inline float power_to_db(float pwr)
    {
        return (10.0f / M_LN10) * logf(pwr);
    }
}


#endif /* TAMGAMP_LV2_UNITS_H_ */
