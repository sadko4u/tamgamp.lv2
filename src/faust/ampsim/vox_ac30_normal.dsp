/*
 * Simulation of VOX AC-30 normal channel
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
declare id "vox_ac30_normal";
declare name "vox_ac30_normal";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s01_stage1clip 
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = fs*gain*(-2.95426319132753e-8*fs - 3.93901758843667e-7);
        b1 = 5.90852638265507e-8*pow(fs,2)*gain;
        b2 = fs*gain*(-2.95426319132753e-8*fs + 3.93901758843667e-7);
    
        a0 = fs*(4.33649382290441e-10*fs + 1.81594277789899e-8) + 1.7066943322007e-7;
        a1 = -8.67298764580881e-10*pow(fs,2) + 3.4133886644014e-7;
        a2 = fs*(4.33649382290441e-10*fs - 1.81594277789899e-8) + 1.7066943322007e-7;
    };

s01_stage1clip = 
    _<: 
        ba.if(signbit(_), s01_stage1_neg_clip, s01_stage1_clip) 
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/vox_ac30_normal/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/vox_ac30_normal/s01_stage1_neg_table.h", "");
    };

p2 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) :
    s02_stage2clip
    
    with {
        fs = float(ma.SR);
    
        b0 = pow(fs,2)*(1.66051214997777e-13*fs + 6.26909307070816e-14);
        b1 = pow(fs,2)*(-4.9815364499333e-13*fs - 6.26909307070816e-14);
        b2 = pow(fs,2)*(4.9815364499333e-13*fs - 6.26909307070816e-14);
        b3 = pow(fs,2)*(-1.66051214997777e-13*fs + 6.26909307070816e-14);

        a0 = fs*(fs*(9.03712610288755e-15*fs + 2.45691087748693e-13) + 1.6200511205926e-12) + 8.32789355310672e-13;
        a1 = fs*(fs*(-2.71113783086627e-14*fs - 2.45691087748693e-13) + 1.6200511205926e-12) + 2.49836806593202e-12;
        a2 = fs*(fs*(2.71113783086627e-14*fs - 2.45691087748693e-13) - 1.6200511205926e-12) + 2.49836806593202e-12;
        a3 = fs*(fs*(-9.03712610288755e-15*fs + 2.45691087748693e-13) - 1.6200511205926e-12) + 8.32789355310672e-13;
    };

s02_stage2clip = 
    _<: 
        ba.if(signbit(_), s02_stage2_neg_clip, s02_stage2_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s02_stage2_clip = ffunction(float s02_stage2clip(float), "generated/stage/vox_ac30_normal/s02_stage2_table.h", "");
        s02_stage2_neg_clip = ffunction(float s02_stage2_negclip(float), "generated/stage/vox_ac30_normal/s02_stage2_neg_table.h", "");
    };

process =
    *(pregain) :
    *(0.12) :
    p1 : 
    *(0.89) :
    p2 : 
    *(1.0) :
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

