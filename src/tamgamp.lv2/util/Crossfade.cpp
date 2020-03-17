/*
 * Crossfade.cpp
 *
 *  Created on: 23 янв. 2020 г.
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

#include "../../../include/tamgamp.lv2/util/Crossfade.h"

#include <string.h>
#include <sys/types.h>

namespace tamgamp_lv2
{
    Crossfade::Crossfade()
    {
        nSamples    = 0;
        nCounter    = 0;
        fDelta      = 0.0f;
        fGain       = 1.0f;
    }

    Crossfade::~Crossfade()
    {
    }

    void Crossfade::init(int sample_rate, float time)
    {
        ssize_t samples     = sample_rate * time;
        nSamples            = (samples < 1) ? 1 : samples;
    }

    bool Crossfade::toggle()
    {
        if (nCounter > 0)
            return false;

        fDelta      = 1.0f / nSamples;
        fGain       = 0.0f;
        nCounter    = nSamples;

        return true;
    }

    void Crossfade::reset()
    {
        nCounter    = 0;
        fDelta      = 0.0f;
        fGain       = 0.0f;
    }

    void Crossfade::process(float *dst, const float *fade_out, const float *fade_in, size_t count)
    {
        // Skip empty buffers
        if (count == 0)
            return;

        if (fade_out == NULL)
        {
            if (fade_in == NULL)
            {
                size_t delta    = (nCounter < count) ? nCounter : count;
                nCounter       -= delta;
                fGain          += fDelta * delta;

                ::bzero(dst, count*sizeof(float));
                return;
            }

            // Perform crossfade
            while (nCounter > 0)
            {
                *dst            = *fade_in * fGain;
                fGain          += fDelta;

                --nCounter;
                ++fade_in;
                ++dst;
                if ((--count) <= 0)
                    return;
            }

            // Just bypass fade_in to output
            if (fGain > 0.0f)
                ::memcpy(dst, fade_in, count * sizeof(float));
            else
                ::bzero(dst, count*sizeof(float));
        }
        else
        {
            if (fade_in == NULL)
            {
                // Perform crossfade
                while (nCounter > 0)
                {
                    *dst            = *fade_out * (1.0f - fGain);
                    fGain          += fDelta;

                    --nCounter;
                    ++fade_out;
                    ++dst;
                    if ((--count) <= 0)
                        return;
                }

                // Fill output
                if (fGain > 0.0f)
                    ::bzero(dst, count*sizeof(float));
                else
                    ::memcpy(dst, fade_out, count * sizeof(float));
            }
            else
            {
                // Perform crossfade
                while (nCounter > 0)
                {
                    *dst            = *fade_out + (*fade_in - *fade_out) * fGain;
                    fGain          += fDelta;

                    --nCounter;
                    ++fade_in;
                    ++fade_out;
                    ++dst;
                    if ((--count) <= 0)
                        return;
                }

                // Just bypass fade_in to output
                ::memcpy(dst, (fGain > 0.0f) ? fade_in : fade_out, count * sizeof(float));
            }
        }
    }


}

