/*
 * Crossfade.h
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

#ifndef TAMGAMP_LV2_UTIL_CROSSFADE_H_
#define TAMGAMP_LV2_UTIL_CROSSFADE_H_

#include <stddef.h>

namespace tamgamp_lv2
{

    class Crossfade
    {
        private:
            Crossfade & operator = (const Crossfade &);

        protected:
            size_t      nSamples;
            size_t      nCounter;
            float       fDelta;
            float       fGain;

        public:
            explicit Crossfade();
            virtual ~Crossfade();

        public:
            /**
             * Initialize crossfade
             * @param sample_rate sample rate of the signal
             * @param time crossfade time, by default 5 msec
             */
            void init(int sample_rate, float time = 0.005);

            /**
             * Crossfade the signal
             * @param dst destination buffer
             * @param fade_out the signal that will fade out, may be NULL
             * @param fade_in the signal that will fade in, may be NULL
             * @param count number of samples to process
             */
            void process(float *dst, const float *fade_out, const float *fade_in, size_t count);

            /**
             * Return the remaining number of samples to process
             * @return the remaining number of samples to process before crossfade becomes inactive
             */
            inline size_t remaining() const { return nCounter; }

            /**
             * Check if crossfade is currently active
             * @return true if crossfade is currently active
             */
            inline bool active() const { return nCounter > 0; }

            /**
             * Reset the crossfade state, immediately interrupt it's processing
             */
            void reset();

            /**
             * Toggle crossfade processing
             * @return true if crossfade has been toggled, false
             * if crossfade is currently active
             */
            bool toggle();
    };

}


#endif /* TAMGAMP_LV2_UTIL_CROSSFADE_H_ */
