/*
 * faust.h
 *
 *  Created on: 18 янв. 2020 г.
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

#ifndef RESOURCES_FAUST_H_
#define RESOURCES_FAUST_H_

#include <algorithm>
#include <cmath>
#include <math.h>

#define __rt_data
#define always_inline   inline __attribute__((__always_inline__))

using std::signbit;

namespace faust
{
    /**
     * Standard sample type
     */
    typedef float       FAUSTFLOAT;

    /**
     * UI class
     */
    class UI
    {
        protected:
            bool fStopped;

        public:
            explicit UI();
            virtual ~UI();

        public:
            virtual void addButton(const char* label, float* zone);
            virtual void addCheckButton(const char* label, float* zone);
            virtual void addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step);
            virtual void addHorizontalSlider(const char* label, float* zone, float init, float min, float max, float step);
            virtual void addNumEntry(const char* label, float* zone, float init, float min, float max, float step);

            virtual void addHorizontalBargraph(const char* label, float* zone, float min, float max);
            virtual void addVerticalBargraph(const char* label, float* zone, float min, float max);

            virtual void openTabBox(const char* label);
            virtual void openHorizontalBox(const char* label);
            virtual void openVerticalBox(const char* label);
            virtual void closeBox();

            virtual void run();

            virtual void stop();
            virtual bool stopped();

            virtual void declare(float* zone, const char* key, const char* value);
    };

    /**
     * Metadata class
     */
    class Meta
    {
        public:
            explicit Meta();
            virtual ~Meta();

        public:
            virtual void declare(const char* key, const char* value);
    };

    /**
     * Wrapper for Standard Faust's DSP
     */
    class dsp
    {
        public:
            explicit dsp();
            virtual ~dsp();

        public:
            /** Returns the number of inputs of the Faust program
             *
             */
            virtual int getNumInputs() = 0;

            /**
             * Returns the number of outputs of the Faust program
             */
            virtual int getNumOutputs() = 0;

            /**
             * This method can be called to retrieve the UI description of
             * the Faust program and its associated fields
             */
            virtual void buildUserInterface(UI* ui_interface) = 0;

            /**
             * Returns the current sampling rate
             */
            virtual int getSampleRate() = 0;

            /**
             * Init methods
             */
            virtual void init(int samplingRate) = 0;
            virtual void instanceInit(int samplingRate) = 0;
            virtual void instanceConstants(int samplingRate) = 0;
            virtual void instanceResetUserInterface() = 0;
            virtual void instanceClear() = 0;

            /**
             * Returns a clone of the instance
             */
            virtual dsp* clone() = 0;

            /**
             * Retrieve the global metadata of the Faust program
             * @param m metadata
             */
            virtual void metadata(Meta* m) = 0;

            /**
             * Perform processing
             * @param count number of samples
             * @param inputs array of inputs
             * @param outputs array of outputs
             */
            virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) = 0;

            /**
             * Compute a time-stamped audio frame
             * @param date_usec timestamp
             * @param count number of samples
             * @param inputs array of inputs
             * @param outputs array of outputs
             */
            virtual void compute(double date_usec, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs);
    };

    /**
     * DSP class factory
     * @return instantiated DSP object
     */
    typedef dsp *(* dsp_factory_t)();
}

#endif /* RESOURCES_FAUST_H_ */
