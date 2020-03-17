/*
 * Bypass.h
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

#ifndef TAMGAMP_LV2_UTIL_BYPASS_H_
#define TAMGAMP_LV2_UTIL_BYPASS_H_

#include <stddef.h>

namespace tamgamp_lv2
{
    /**
     * Bypass class, provides utilitary class for implementing mono bypass function
     */
    class Bypass
    {
        private:
            Bypass & operator = (const Bypass &);

        private:
            enum state_t
            {
                S_ON,
                S_ACTIVE,
                S_OFF
            };

            state_t     nState;
//            float       fLength;
            float       fDelta;
            float       fGain;

        public:
            explicit Bypass();
            ~Bypass();

        public:
            /**
             * Initialize bypass
             * @param sample_rate sample rate
             * @param time the bypass switch time, by default 5 milliseconds
             */
            void init(int sample_rate, float time = 0.005 );

            /**
             * Process the signal. If Bypass is on, then dry signal is passed to output.
             * If bypass is off, then wet signal is passed.
             * When bypass is in active state, the mix of dry and wet signal is passed to
             * output.
             *
             * @param dst output buffer
             * @param dry dry signal buffer
             * @param wet wet signal buffer
             * @param count number of samples to process
             */
            void process(float *dst, const float *dry, const float *wet, size_t count);

            /**
             * Enable/disable bypass
             * @param bypass bypass value
             * @return true if bypass state has changed
             */
            bool set_bypass(bool bypass);

            /** Enable/disable bypass
             *
             * @param bypass bypass value, when less than 0.5, bypass is considered to become shut down
             * @return true if bypass state has changed
             */
            inline bool set_bypass(float bypass) { return set_bypass(bypass >= 0.5f); };

            /**
             * Return true if bypass is on (final state)
             * @return true if bypass is on
             */
            inline bool on() const      { return nState == S_ON; };

            /**
             * Return true if bypass is off (final state)
             * @return true if bypass is off
             */
            inline bool off() const     { return nState == S_OFF; };

            /**
             * Return true if bypass is active
             * @return true if bypass is active
             */
            inline bool active() const  { return nState == S_ACTIVE; };

            /**
             * Return true if bypass is on or is currently going to become on
             * @return true if bypass is on or is currently going to become on
             */
            bool bypassing() const;
    };
}

#endif /* TAMGAMP_LV2_UTIL_BYPASS_H_ */
