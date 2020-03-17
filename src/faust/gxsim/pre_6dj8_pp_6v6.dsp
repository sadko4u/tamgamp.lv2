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

declare id "pre 6DJ8/ push-pull 6V6"; // in amp tube ba.selector
declare name "pre 6DJ8/ push-pull 6V6";
declare samplerate "96000";

import("stdfaust.lib"); 
import("amp_sim.lib");

/****************************************************************
 ** Tube Preamp Emulation stage 1 - 2 
 */

peak1 = fi.allpassn(4,(-0.2, 0.3, 0.4, 0.5));

process =
    stage1 : 
    component("amp_dist.dsp").dist2(gain) : 
    stage2 :
    *(postgain)

    with {
        gain        = ampctrl.gain : si.smooth(0.999);
        master      = ampctrl.master : si.smooth(0.999);
        pregain     = ampctrl.pregain : si.smooth(0.999);
        postgain    = ampctrl.postgain * 0.06310 : si.smooth(0.999); // -24 dB correction
    
        atten = 0.6;
        stage1 =
            ef.speakerbp(310.0, 12000.0) :
            *(pregain) :
            (
                tubestage130_20(TB_6DJ8_68k,86.0,2700.0,1.863946) :
                + ~ (atten*tubestage130_20(TB_6DJ8_250k,132.0,1500.0,1.271609))
            ) :
            fi.lowpass(1,6531.0) :
            (
                tubestage130_20(TB_6DJ8_250k,132.0,1500.0,1.271609) :
                + ~ (atten*tubestage130_20(TB_6DJ8_250k,194.0,820.0,0.797043))
            ) :
            tubestage130_20(TB_6DJ8_250k,194.0,820.0,0.797043) ; 
        
        stage2 = 
            fi.lowpass(1,6531.0) :
            pot_48db(master) <:
            (
                (min(0.7,tubestage(TB_6V6_250k,6531.0,410.0,0.659761))),
                (max(-0.75,tubestage(TB_6V6_68k,6531.0,410.0,0.664541)))
            ) :> 
            peak1 ;
    };
