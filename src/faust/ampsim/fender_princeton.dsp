/*
 * Simulation of Fender Princeton Reverb-amp AA1164 (without reverb module)
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
declare id "fender_princeton";
declare name "fender_princeton";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 = 
    fi.iir((b0/a0,b1/a0),(a1/a0)) : 
    s01_stage1clip 
    with {
        fs = float(ma.SR);
    
    
        b0 = -0.00121958463123679*fs - 0.0162611284164904;
        b1 = 0.00121958463123679*fs - 0.0162611284164904;
        a0 = 2.08224169602437e-5*fs + 0.000523985908304094;
        a1 = -2.08224169602437e-5*fs + 0.000523985908304094;
    };

s01_stage1clip = 
    _<: 
        ba.if(signbit(_), s01_stage1_neg_clip, s01_stage1_clip) 
    :>_ 

    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/fender_princeton/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/fender_princeton/s01_stage1_neg_table.h", "");
    };

p2 = fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) 
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);

        bass = ampctrl.bass : LogPot(3.0) : si.smooth(0.999);
        treble = ampctrl.treble : LogPot(3.0) : si.smooth(0.999);
    
        b0 = bass*fs*(fs*(1.34457306503762e-15*fs + 1.00884809971388e-11) + 1.20501921839819e-8) + fs*(8.41073364087361e-14*fs + 4.81430720551463e-10) + treble*(1.41236666495548e-14*bass*pow(fs,3) + fs*(8.83480424461513e-13*fs + 3.00503545735209e-11));
        b1 = bass*fs*(fs*(-4.03371919511285e-15*fs - 1.00884809971388e-11) + 1.20501921839819e-8) + fs*(-8.41073364087361e-14*fs + 4.81430720551463e-10) + treble*(-4.23709999486644e-14*bass*pow(fs,3) + fs*(-8.83480424461513e-13*fs + 3.00503545735209e-11));
        b2 = bass*fs*(fs*(4.03371919511285e-15*fs - 1.00884809971388e-11) - 1.20501921839819e-8) + fs*(-8.41073364087361e-14*fs - 4.81430720551463e-10) + treble*(4.23709999486644e-14*bass*pow(fs,3) + fs*(-8.83480424461513e-13*fs - 3.00503545735209e-11));
        b3 = bass*fs*(fs*(-1.34457306503762e-15*fs + 1.00884809971388e-11) - 1.20501921839819e-8) + fs*(8.41073364087361e-14*fs - 4.81430720551463e-10) + treble*(-1.41236666495548e-14*bass*pow(fs,3) + fs*(8.83480424461513e-13*fs - 3.00503545735209e-11));
        a0 = bass*fs*(fs*(1.54682397145924e-14*fs + 1.23077814193577e-10) + 1.20501921839819e-8) + fs*(9.67587760870249e-13*fs + 7.57932447081709e-9) + 2.40402836588167e-7;
        a1 = bass*fs*(fs*(-4.64047191437773e-14*fs - 1.23077814193577e-10) + 1.20501921839819e-8) + fs*(-9.67587760870249e-13*fs + 7.57932447081709e-9) + 7.21208509764501e-7;
        a2 = bass*fs*(fs*(4.64047191437773e-14*fs - 1.23077814193577e-10) - 1.20501921839819e-8) + fs*(-9.67587760870249e-13*fs - 7.57932447081709e-9) + 7.21208509764501e-7;
        a3 = bass*fs*(fs*(-1.54682397145924e-14*fs + 1.23077814193577e-10) - 1.20501921839819e-8) + fs*(9.67587760870249e-13*fs - 7.57932447081709e-9) + 2.40402836588167e-7;
    };

p3 =
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s03_stage2clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
        
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(fs*(-2.39054193785811e-8*fs - 2.42241583036289e-5) - 0.000318738925047744);
        b1 = gain*(4.78108387571622e-8*pow(fs,2) - 0.000637477850095488);
        b2 = gain*(fs*(-2.39054193785811e-8*fs + 2.42241583036289e-5) - 0.000318738925047744);
    
        a0 = fs*(4.25078851900361e-10*fs + 4.29329117862591e-7) + 1.05275641642752e-5;
        a1 = -8.50157703800721e-10*pow(fs,2) + 2.10551283285504e-5;
        a2 = fs*(4.25078851900361e-10*fs - 4.29329117862591e-7) + 1.05275641642752e-5;
    };

s03_stage2clip = 
    _<:
        ba.if(signbit(_), s03_stage2_neg_clip, s03_stage2_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s03_stage2_clip = ffunction(float s03_stage2clip(float), "generated/stage/fender_princeton/s03_stage2_table.h", "");
        s03_stage2_neg_clip = ffunction(float s03_stage2_negclip(float), "generated/stage/fender_princeton/s03_stage2_neg_table.h", "");
    };

p4 =
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) :
    s04_stage3clip
    
    with {
        fs = float(ma.SR);
   
        b0 = fs*(-7.18566052160675e-9*fs - 0.000108969453073724) - 0.00145164859022357;
        b1 = 1.43713210432135e-8*pow(fs,2) - 0.00290329718044715;
        b2 = fs*(-7.18566052160675e-9*fs + 0.000108969453073724) - 0.00145164859022357;
    
        a0 = fs*(1.228211327564e-10*fs + 1.49300944816928e-5) + 0.000375575007998186;
        a1 = -2.456422655128e-10*pow(fs,2) + 0.000751150015996373;
        a2 = fs*(1.228211327564e-10*fs - 1.49300944816928e-5) + 0.000375575007998186;
    };

s04_stage3clip = 
    _<: 
        ba.if(signbit(_), s04_stage3_neg_clip, s04_stage3_clip) 
    :>_

    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s04_stage3_clip = ffunction(float s04_stage3clip(float), "generated/stage/fender_princeton/s04_stage3_table.h", "");
        s04_stage3_neg_clip = ffunction(float s04_stage3_negclip(float), "generated/stage/fender_princeton/s04_stage3_neg_table.h", "");
    };

p5 = s05_stage4clip;

s05_stage4clip =
    _<:
        ba.if(signbit(_), s05_stage4_neg_clip, s05_stage4_clip)
    :>_
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s05_stage4_clip = ffunction(float s05_stage4clip(float), "generated/stage/fender_princeton/s05_stage4_table.h", "");
        s05_stage4_neg_clip = ffunction(float s05_stage4_negclip(float), "generated/stage/fender_princeton/s05_stage4_neg_table.h", "");
    };

process = 
    *(pregain) :
    *(0.06) :
    p1 :
    p2 :
    *(0.35) :
    p3 :
    *(0.65) :
    p4 : 
    *(32.0) :
    p5
    *(12.0) :
    *(postgain)
    with {
        pregain     = ampctrl.pregain;
        postgain    = ampctrl.postgain;
        tune1       = ampctrl.tune1;
        tune2       = ampctrl.tune2;
        tune3       = ampctrl.tune3;
        tune4       = ampctrl.tune4;
        tune5       = ampctrl.tune5;
        tune6       = ampctrl.tune6;
        tune7       = ampctrl.tune7;
        tune8       = ampctrl.tune8;
        tune9       = ampctrl.tune9;
        tune10      = ampctrl.tune10;
    };

