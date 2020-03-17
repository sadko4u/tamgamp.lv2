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

declare id "12AT7"; // in amp tube ba.selector
declare name "12AT7";
declare samplerate "96000";

import("stdfaust.lib"); 
import("amp_sim.lib");

/****************************************************************
 ** Tube Preamp Emulation stage 1 - 2 
 *         12AT7
 */
 
tubeax(pregain) =
    stage1 :
    stage2 
    
    with {
        stage1 =
            tubestage(TB_12AT7_68k,86.0,2700.0,2.617753) :
            *(pregain) :
            fi.lowpass(1,6531.0) :
            tubestage(TB_12AT7_250k,132.0,1500.0,1.887332) ;
        
        stage2 =
            *(pregain) :
            fi.lowpass(1,6531.0) :
            tubestage(TB_12AT7_250k,194.0,820.0,1.256962) ; 
    } ;

process =
    component("amp_dist.dsp").dist(gain) :
    tubeax(pregain) :
    *(postgain)
    
    with {
        gain        = ampctrl.gain : si.smooth(0.999);
        pregain     = ampctrl.pregain : si.smooth(0.999);
        postgain    = ampctrl.postgain * 0.06310 : si.smooth(0.999); // -24 dB correction
    };
