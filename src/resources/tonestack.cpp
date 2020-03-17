/*
 * tonestack.cpp
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

#include <resources/tonestack.h>

#define MODULE(name)    tonestack_ ## name::instantiate

namespace tamgamp_lv2
{
    using namespace faust;

    #include <generated/tonestack/ac15.h>
    #include <generated/tonestack/ac30.h>
    #include <generated/tonestack/ampeg.h>
    #include <generated/tonestack/ampeg_rev.h>
    #include <generated/tonestack/bassman.h>
    #include <generated/tonestack/bogner.h>
    #include <generated/tonestack/crunch.h>
    #include <generated/tonestack/default.h>
    #include <generated/tonestack/engl.h>
    #include <generated/tonestack/fender_blues.h>
    #include <generated/tonestack/fender_default.h>
    #include <generated/tonestack/fender_deville.h>
    #include <generated/tonestack/gibsen.h>
    #include <generated/tonestack/groove.h>
    #include <generated/tonestack/ibanez.h>
    #include <generated/tonestack/jcm2000.h>
    #include <generated/tonestack/jcm800.h>
    #include <generated/tonestack/jtm45.h>
    #include <generated/tonestack/m2199.h>
    #include <generated/tonestack/mesa.h>
    #include <generated/tonestack/mesa_rect_solo.h>
    #include <generated/tonestack/mesa_vtwin.h>
    #include <generated/tonestack/mlead.h>
    #include <generated/tonestack/none.h>
    #include <generated/tonestack/peavey.h>
    #include <generated/tonestack/princeton.h>
    #include <generated/tonestack/roland.h>
    #include <generated/tonestack/soldano.h>
    #include <generated/tonestack/sovtek.h>
    #include <generated/tonestack/twin.h>

    dsp_factory_t tonestack_dsp[] =
    {
        MODULE(none),
        MODULE(default),
        MODULE(ac15),
        MODULE(ac30),
        MODULE(ampeg),
        MODULE(ampeg_rev),
        MODULE(bassman),
        MODULE(bogner),
        MODULE(crunch),
        MODULE(engl),
        MODULE(fender_blues),
        MODULE(fender_default),
        MODULE(fender_deville),
        MODULE(princeton),
        MODULE(twin),
        MODULE(gibsen),
        MODULE(groove),
        MODULE(ibanez),
        MODULE(jcm2000),
        MODULE(jcm800),
        MODULE(jtm45),
        MODULE(m2199),
        MODULE(mlead),
        MODULE(mesa),
        MODULE(peavey),
        MODULE(roland),
        MODULE(soldano),
        MODULE(sovtek),
        MODULE(mesa_rect_solo),
        MODULE(mesa_vtwin),
        NULL
    };

    // Guitar-noise constants with LUFS pre-processing
    const float tonestack_norm[] =
    {
        1.000000, 1.373637, 1.669131, 6.710094,
        2.193435, 11.114272, 3.201286, 3.236988,
        8.054111, 3.423018, 4.555310, 6.997812,
        5.436375, 7.849741, 10.541955, 5.909801,
        3.371715, 6.581899, 2.821060, 2.337800,
        2.379925, 3.868774, 2.202753, 6.997812,
        3.882288, 5.255991, 2.577902, 2.645187,
        2.599794, 2.265750
    };
}


