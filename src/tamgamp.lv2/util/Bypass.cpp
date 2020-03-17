/*
 * Bypass.cpp
 *
 *  Created on: 22 янв. 2020 г.
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

#include "../../../include/tamgamp.lv2/util/Bypass.h"

#include <string.h>

namespace tamgamp_lv2
{

    Bypass::Bypass()
    {
        nState      = S_OFF;
        fDelta      = 0;
        fGain       = 0;
    }

    Bypass::~Bypass()
    {
    }

    bool Bypass::set_bypass(bool bypass)
    {
        // Trigger state change
        switch (nState)
        {
            case S_ON:
                if (bypass)
                    return false;
                nState  = S_ACTIVE;
                break;
            case S_OFF:
                if (!bypass)
                    return false;
                nState  = S_ACTIVE;
                break;
            case S_ACTIVE:
            {
                bool off    = (fDelta < 0.0f);
                if (bypass == off)
                    return false;
                break;
            }
            default:
                return false;
        }

        // Change sign of the applying delta
        fDelta  = -fDelta;
        return true;
    }

    bool Bypass::bypassing() const
    {
        switch (nState)
        {
            case S_ON: return true;
            case S_OFF: return false;
            case S_ACTIVE: return fDelta < 0.0f;
            default: return false;
        }
    }

    void Bypass::init(int sample_rate, float time)
    {
        // Off by default
        float length= sample_rate * time;
        if (length < 1.0f)
            length      = 1.0f;
        nState      = S_OFF;
        fDelta      = 1.0 / length;
        fGain       = 1.0;
    }

    void Bypass::process(float *dst, const float *dry, const float *wet, size_t count)
    {
        // Skip empty buffers
        if (count == 0)
            return;

        if (dry != NULL)
        {
            // Analyze direction
            if (fDelta > 0.0f)
            {
                // Process transition
                while (fGain < 1.0)
                {
                    *dst    =   *dry + (*wet - *dry) * fGain;

                    fGain  +=  fDelta;
                    dry    ++;
                    wet    ++;
                    dst    ++;

                    if ((--count) <= 0) // Last sample?
                        return;
                }

                // Copy wet data
                fGain   = 1.0;
                nState  = S_OFF;
                if (count > 0)
                    ::memcpy(dst, wet, count*sizeof(float));
            }
            else
            {
                // Process transition
                while (fGain > 0.0)
                {
                    *dst    =   *dry + (*wet - *dry) * fGain;

                    fGain  +=  fDelta;
                    dry    ++;
                    wet    ++;
                    dst    ++;

                    if ((--count) <= 0) // Last sample?
                        return;
                }

                // Copy dry data
                fGain   = 0.0;
                nState  = S_ON;
                if (count > 0)
                    ::memcpy(dst, dry, count*sizeof(float));
            }
        }
        else
        {
            // Analyze direction
            if (fDelta > 0.0f)
            {
                // Process transition
                while (fGain < 1.0)
                {
                    *dst    =   (*wet) * fGain;

                    fGain  +=  fDelta;
                    wet    ++;
                    dst    ++;

                    if ((--count) <= 0) // Last sample?
                        return;
                }

                // Copy wet data
                fGain   = 1.0;
                nState  = S_OFF;
                if (count > 0)
                    ::memcpy(dst, wet, count*sizeof(float));
            }
            else
            {
                // Process transition
                while (fGain > 0.0)
                {
                    *dst    =   (*wet) * fGain;

                    fGain  +=  fDelta;
                    wet    ++;
                    dst    ++;

                    if ((--count) <= 0) // Last sample?
                        return;
                }

                // Zero dry data
                fGain   = 0.0;
                nState  = S_ON;
                if (count > 0)
                    ::bzero(dst, count*sizeof(float));
            }
        }
    }

}


