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

declare id "12AU7 feedback"; // in amp tube ba.selector
declare name "12AU7 feedback";
declare samplerate "96000";

import("stdfaust.lib"); 
import("amp_sim.lib");

/****************************************************************
 ** Tube Preamp Emulation stage 1 - 2 
 *   12AU7 feedback
 */
 
val(x) =
    valve.vt(dist, q(x), x)
    with {
        dist =  40.1;
        q(x) = lp1tm1(x) * 1 - lp2tm1(x) * 1.02 - 1.0 : clip(-1,-0.01);
        lp(a) = *(1 - a) : + ~ *(a);
        lp1tm1 = abs <: lp(0.9999), _ : max;
        avgs = lp1tm1 : avg;
        avg_size = ma.SR/9;
        avg(x) = x - de.delay1s(avg_size,x) : + ~ _ : /(avg_size);
        lp2tm1 = avgs : lp(0.999);
    };

tubeax(pregain) =
    stage1 :
    stage2 
    
    with {
        stage1 =
            tubestage130_10(TB_12AU7_68k,86.0,2700.0,1.257240) :
            - ~ tubestage130_10(TB_12AU7_250k,132.0,1500.0,0.776162) :
            *(pregain) :
            fi.lowpass(1,6531.0) :
            tubestage130_10(TB_12AU7_250k,132.0,1500.0,0.776162) :
            + ~ tubestage130_10(TB_12AU7_250k,194.0,820.0,0.445487) ; 
        
        stage2 = 
            fi.lowpass(1,6531.0) : 
            tubestage130_10(TB_12AU7_250k,194.0,820.0,0.445487) ; 
    } ;

process =
    val : 
    component("amp_dist.dsp").dist1(gain) : 
    tubeax(pregain) : 
    *(postgain)
    
    with {
        gain        = ampctrl.gain : si.smooth(0.999);
        pregain     = ampctrl.pregain : si.smooth(0.999);
        postgain    = ampctrl.postgain * 0.06310 : si.smooth(0.999); // -24 dB correction
    };
