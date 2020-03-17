/*
 * Simulation of Fender Twin Reverb-Amp AA769 (Vibrato channel, bright on)
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
declare id "fender_twin_reverb_vibrato";
declare name "fender_twin_reverb_vibrato";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 =
    fi.iir((b0/a0,b1/a0),(a1/a0)) :
    s01_stage1clip
    
    with {
        fs = float(ma.SR);
    
        b0 = -0.00129014420144197*fs - 0.017201922685893;
        b1 = 0.00129014420144197*fs - 0.017201922685893;
    
        a0 = 2.08221197518557e-5*fs + 0.000538251910926107;
        a1 = -2.08221197518557e-5*fs + 0.000538251910926107;
    };

s01_stage1clip =
    _<:
        ba.if(signbit(_), s01_stage1_neg_clip, s01_stage1_clip)
    :>_
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/fender_twin_reverb_vibrato/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/fender_twin_reverb_vibrato/s01_stage1_neg_table.h", "");
    };

p2 =
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0))
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        bass = ampctrl.bass : LogPot(3.0) : si.smooth(0.999);
        middle = ampctrl.middle : LogPot(3.0) : si.smooth(0.999);
        treble = ampctrl.treble : LogPot(3.0) : si.smooth(0.999);
    
        b0 = bass*fs*(2.4398878836093e-12*fs + 1.23223556842233e-8) + middle*(bass*pow(fs,2)*(2.02197257860821e-15*fs + 1.15830143431699e-11) + fs*(1.26480837895918e-13*fs + 7.23976807781299e-10)) + treble*(1.44426612757729e-14*bass*pow(fs,3) + fs*(9.03434556399414e-13*fs + 3.07290665441977e-11));
        b1 = bass*fs*(-2.4398878836093e-12*fs + 1.23223556842233e-8) + middle*(bass*pow(fs,2)*(-6.06591773582464e-15*fs - 1.15830143431699e-11) + fs*(-1.26480837895918e-13*fs + 7.23976807781299e-10)) + treble*(-4.33279838273188e-14*bass*pow(fs,3) + fs*(-9.03434556399414e-13*fs + 3.07290665441977e-11));
        b2 = bass*fs*(-2.4398878836093e-12*fs - 1.23223556842233e-8) + middle*(bass*pow(fs,2)*(6.06591773582464e-15*fs - 1.15830143431699e-11) + fs*(-1.26480837895918e-13*fs - 7.23976807781299e-10)) + treble*(4.33279838273188e-14*bass*pow(fs,3) + fs*(-9.03434556399414e-13*fs - 3.07290665441977e-11));
        b3 = bass*fs*(2.4398878836093e-12*fs - 1.23223556842233e-8) + middle*(bass*pow(fs,2)*(-2.02197257860821e-15*fs + 1.15830143431699e-11) + fs*(1.26480837895918e-13*fs - 7.23976807781299e-10)) + treble*(-1.44426612757729e-14*bass*pow(fs,3) + fs*(9.03434556399414e-13*fs - 3.07290665441977e-11));
    
        a0 = bass*fs*(fs*(1.44426612757729e-14*fs + 1.17981178089793e-10) + 1.23223556842233e-8) + fs*(9.03434556399414e-13*fs + 7.25820551773951e-9) + middle*(bass*pow(fs,2)*(2.02197257860821e-15*fs + 1.15830143431699e-11) + fs*(1.26480837895918e-13*fs + 7.23976807781299e-10)) + 2.45832532353582e-7;
        a1 = bass*fs*(fs*(-4.33279838273188e-14*fs - 1.17981178089793e-10) + 1.23223556842233e-8) + fs*(-9.03434556399414e-13*fs + 7.25820551773951e-9) + middle*(bass*pow(fs,2)*(-6.06591773582464e-15*fs - 1.15830143431699e-11) + fs*(-1.26480837895918e-13*fs + 7.23976807781299e-10)) + 7.37497597060746e-7;
        a2 = bass*fs*(fs*(4.33279838273188e-14*fs - 1.17981178089793e-10) - 1.23223556842233e-8) + fs*(-9.03434556399414e-13*fs - 7.25820551773951e-9) + middle*(bass*pow(fs,2)*(6.06591773582464e-15*fs - 1.15830143431699e-11) + fs*(-1.26480837895918e-13*fs - 7.23976807781299e-10)) + 7.37497597060746e-7;
        a3 = bass*fs*(fs*(-1.44426612757729e-14*fs + 1.17981178089793e-10) - 1.23223556842233e-8) + fs*(9.03434556399414e-13*fs - 7.25820551773951e-9) + middle*(bass*pow(fs,2)*(-2.02197257860821e-15*fs + 1.15830143431699e-11) + fs*(1.26480837895918e-13*fs - 7.23976807781299e-10)) + 2.45832532353582e-7;
    };

p3 =
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) :
    s03_stage2clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(fs*gain*(8.40462734303842e-8*fs + 2.04990910805815e-6) + fs*(-8.40462734303842e-8*fs - 0.000352242715067992) - 0.00854128795024229);
        b1 = gain*(-1.68092546860768e-7*pow(fs,2)*gain + 1.68092546860768e-7*pow(fs,2) - 0.0170825759004846);
        b2 = gain*(fs*gain*(8.40462734303842e-8*fs - 2.04990910805815e-6) + fs*(-8.40462734303842e-8*fs + 0.000352242715067992) - 0.00854128795024229);
    
        a0 = 5.36521601137911e-6*fs + gain*(fs*gain*(-1.28765184273099e-9*fs - 4.83816520054756e-8) + fs*(1.28765184273099e-9*fs + 4.83816520054756e-8)) + 0.000201590216689482;
        a1 = gain*(2.57530368546197e-9*pow(fs,2)*gain - 2.57530368546197e-9*pow(fs,2)) + 0.000403180433378964;
        a2 = -5.36521601137911e-6*fs + gain*(fs*gain*(-1.28765184273099e-9*fs + 4.83816520054756e-8) + fs*(1.28765184273099e-9*fs - 4.83816520054756e-8)) + 0.000201590216689482;
    };

s03_stage2clip = 
    _<:
        ba.if(signbit(_), s03_stage2_neg_clip, s03_stage2_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s03_stage2_clip = ffunction(float s03_stage2clip(float), "generated/stage/fender_twin_reverb_vibrato/s03_stage2_table.h", "");
        s03_stage2_neg_clip = ffunction(float s03_stage2_negclip(float), "generated/stage/fender_twin_reverb_vibrato/s03_stage2_neg_table.h", "");
    };

p4 =
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s04_stage3clip
    
    with {
        fs = float(ma.SR);

        b0 = fs*(-4.67849403955662e-9*fs - 7.10003829373363e-5) - 0.00172893349577111;
        b1 = 9.35698807911324e-9*pow(fs,2) - 0.00345786699154223;
        b2 = fs*(-4.67849403955662e-9*fs + 7.10003829373363e-5) - 0.00172893349577111;

        a0 = fs*(7.16780319383327e-11*fs + 1.73791857892897e-5) + 0.000652896528176287;
        a1 = -1.43356063876665e-10*pow(fs,2) + 0.00130579305635257;
        a2 = fs*(7.16780319383327e-11*fs - 1.73791857892897e-5) + 0.000652896528176287;
    };

s04_stage3clip =
    _<:
        ba.if(signbit(_), s04_stage3_neg_clip, s04_stage3_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s04_stage3_clip = ffunction(float s04_stage3clip(float), "generated/stage/fender_twin_reverb_vibrato/s04_stage3_table.h", "");
        s04_stage3_neg_clip = ffunction(float s04_stage3_negclip(float), "generated/stage/fender_twin_reverb_vibrato/s04_stage3_neg_table.h", "");
    };

p5 =
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) :
    s05_stage4clip
    
    with {
        fs = float(ma.SR);
    
        b0 = pow(fs,2)*(fs*(-3.74247111665692e-18*fs - 5.17684011327779e-17) - 3.4215978904891e-17);
        b1 = pow(fs,3)*(1.49698844666277e-17*fs + 1.03536802265556e-16);
        b2 = pow(fs,2)*(-2.24548266999415e-17*pow(fs,2) + 6.8431957809782e-17);
        b3 = pow(fs,3)*(1.49698844666277e-17*fs - 1.03536802265556e-16);
        b4 = pow(fs,2)*(fs*(-3.74247111665692e-18*fs + 5.17684011327779e-17) - 3.4215978904891e-17);
    
        a0 = fs*(fs*(fs*(1.87256459364461e-19*fs + 5.38993753233175e-17) + 1.72508035993432e-15) + 1.46964199243802e-14) + 1.08177249568012e-14;
        a1 = fs*(pow(fs,2)*(-7.49025837457845e-19*fs - 1.07798750646635e-16) + 2.93928398487605e-14) + 4.32708998272046e-14;
        a2 = pow(fs,2)*(1.12353875618677e-18*pow(fs,2) - 3.45016071986864e-15) + 6.4906349740807e-14;
        a3 = fs*(pow(fs,2)*(-7.49025837457845e-19*fs + 1.07798750646635e-16) - 2.93928398487605e-14) + 4.32708998272046e-14;
        a4 = fs*(fs*(fs*(1.87256459364461e-19*fs - 5.38993753233175e-17) + 1.72508035993432e-15) - 1.46964199243802e-14) + 1.08177249568012e-14;
    };

s05_stage4clip =
    _<:
        ba.if(signbit(_), s05_stage4_neg_clip, s05_stage4_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s05_stage4_clip = ffunction(float s05_stage4clip(float), "generated/stage/fender_twin_reverb_vibrato/s05_stage4_table.h", "");
        s05_stage4_neg_clip = ffunction(float s05_stage4_negclip(float), "generated/stage/fender_twin_reverb_vibrato/s05_stage4_neg_table.h", "");
    };

process =
    *(pregain) :
    *(0.044) :
    p1 : 
    p2 : 
    *(0.019) :
    p3 : 
    *(0.05) :
    p4 :
    *(0.15) :
    p5 :
    *(70.0) :
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
