/*
 * faust.cpp
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

#include <resources/faust.h>

namespace faust
{
    //-------------------------------------------------------------------------
    // UI Stubs
    UI::UI(): fStopped(false)
    {
    }

    UI::~UI()
    {
    }

    void UI::addButton(const char* label, float* zone)
    {
    }

    void UI::addCheckButton(const char* label, float* zone)
    {
    }

    void UI::addVerticalSlider(const char* label, float* zone, float init, float min, float max, float step)
    {
    }

    void UI::addHorizontalSlider(const char* label, float* zone, float init, float min, float max, float step)
    {
    }

    void UI::addNumEntry(const char* label, float* zone, float init, float min, float max, float step)
    {
    }

    void UI::addHorizontalBargraph(const char* label, float* zone, float min, float max)
    {
    }

    void UI::addVerticalBargraph(const char* label, float* zone, float min, float max)
    {
    }

    void UI::openTabBox(const char* label)
    {
    }

    void UI::openHorizontalBox(const char* label)
    {
    }

    void UI::openVerticalBox(const char* label)
    {
    }

    void UI::closeBox()
    {
    }

    void UI::run()
    {
    }

    void UI::declare(float* zone, const char* key, const char* value)
    {
    }

    void UI::stop()
    {
        fStopped = true;
    }

    bool UI::stopped()
    {
        return fStopped;
    }

    //-------------------------------------------------------------------------
    // Metadata Stubs
    Meta::Meta()
    {
    }

    Meta::~Meta()
    {
    }

    void Meta::declare(const char* key, const char* value)
    {
    }

    //-------------------------------------------------------------------------
    // DSP Stubs
    dsp::dsp()
    {
    }

    dsp::~dsp()
    {
    }

    void dsp::compute(double date_usec, int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs)
    {
        compute(count, inputs, outputs);
    }
}


