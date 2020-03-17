/*
 * Simulation of Guitarix preamplifier chain
 * 
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
 * Copyright (C) 2011 Pete Shorthose <http://guitarix.org/>
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

declare id "6V6"; // in amp tube ba.selector
declare name "6V6";
declare samplerate "96000";

import("stdfaust.lib"); 
import("amp_sim.lib");

/****************************************************************
 ** Tube Preamp Emulation stage 1 - 2 
 */
 
bifilter = fi.tf2(b0,b1,b2,a1,a2) with
{
    c = 1.059;
    R = 0.9221;
    lc0 = 0.00506158;
    lc1 = 0.06446806;
    lc2 = 0.27547621;
    lc3 = 0.43359433;
    lc4 = 1.31282248;
    lc5 = 0.07238887;
    fc = 1200 : *(2*ma.PI/ma.SR) : log;
    p = lc0*pow(fc,5) + lc1*pow(fc,4) + lc2*pow(fc,3) + lc3*pow(fc,2) + lc4*fc + lc5 : exp;
    //b0 = 1;
    //b1 = -1.01;
    //b2 = 0;
    //a1 = -1.84;
    //a2 = 0.846416;
    b0 = 1;
    b1 = -c;
    b2 = 0;
    a1 = -2*R*cos(p);
    a2 = R*R;
};

tubeax(pregain, master) =
    stage1 :
    stage2 
    with {
        stage1 =
            *(pregain) :
            tubestage(TB_6V6_68k,86.0,2700.0,2.296150) :
            *(0.77) :
            fi.lowpass(1,6531.0) :
            *(pregain) :
            tubestage(TB_6V6_250k,132.0,1500.0,1.675587) :
            *(0.77) ;
        
        stage2 =
            fi.lowpass(1,6531.0) :
            pot_48db(master) :
            bifilter :
            tubestage(TB_6V6_250k,194.0,820.0,1.130462) :
            *(0.77) ;
    } ;

process =
    component("amp_dist.dsp").dist(gain) :
    tubeax(pregain, master) :
    *(postgain)
    
    with {
        gain        = ampctrl.gain : si.smooth(0.999);
        master      = ampctrl.master : si.smooth(0.999);
        pregain     = ampctrl.pregain : si.smooth(0.999);
        postgain    = ampctrl.postgain * 0.06310 : si.smooth(0.999); // -24 dB correction
    };
