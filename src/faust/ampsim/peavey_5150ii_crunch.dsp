/*
 * Simulation of Peavey 5150II crunch channel 
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
declare id "peavey_5150ii_crunch";
declare name "peavey_5150ii_crunch";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) : 
    s01_stage1clip 
    
    with {
        fs = float(ma.SR);
    
        b0 = pow(fs,2)*(-1.41619366649534e-13*fs - 8.63532723472799e-13);
        b1 = 2.83238733299068e-13*pow(fs,3);
        b2 = 1.7270654469456e-12*pow(fs,2);
        b3 = -2.83238733299068e-13*pow(fs,3);
        b4 = pow(fs,2)*(1.41619366649534e-13*fs - 8.63532723472799e-13);
    
        a0 = fs*(fs*(fs*(6.72246728677859e-21*fs + 8.7052636265908e-15) + 6.86307224330787e-13) + 1.208780256712e-11) + 4.40771504790753e-11;
        a1 = fs*(pow(fs,2)*(-2.68898691471143e-20*fs - 1.74105272531816e-14) + 2.41756051342399e-11) + 1.76308601916301e-10;
        a2 = pow(fs,2)*(4.03348037206715e-20*pow(fs,2) - 1.37261444866157e-12) + 2.64462902874452e-10;
        a3 = fs*(pow(fs,2)*(-2.68898691471143e-20*fs + 1.74105272531816e-14) - 2.41756051342399e-11) + 1.76308601916301e-10;
        a4 = fs*(fs*(fs*(6.72246728677859e-21*fs - 8.7052636265908e-15) + 6.86307224330787e-13) - 1.208780256712e-11) + 4.40771504790753e-11;
    };

s01_stage1clip = 
    _<: 
        ba.if(signbit(_), s01_stage1_neg_clip, s01_stage1_clip) 
    :>_
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/peavey_5150ii_crunch/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/peavey_5150ii_crunch/s01_stage1_neg_table.h", "");
    };

p2 =
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) :
    s02_stage2clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(pow(fs,2)*gain*(fs*(4.65094790958669e-17*fs + 1.37304022225245e-13) + 7.25018598718153e-11) + fs*(fs*(fs*(-4.65094790958669e-17*fs - 1.40723836864647e-13) - 8.25977438589657e-11) - 5.33101910822171e-9));
        b1 = gain*(pow(fs,3)*gain*(-1.86037916383467e-16*fs - 2.7460804445049e-13) + fs*(pow(fs,2)*(1.86037916383467e-16*fs + 2.81447673729294e-13) - 1.06620382164434e-8));
        b2 = gain*(pow(fs,2)*gain*(2.79056874575201e-16*pow(fs,2) - 1.45003719743631e-10) + pow(fs,2)*(-2.79056874575201e-16*pow(fs,2) + 1.65195487717931e-10));
        b3 = gain*(pow(fs,3)*gain*(-1.86037916383467e-16*fs + 2.7460804445049e-13) + fs*(pow(fs,2)*(1.86037916383467e-16*fs - 2.81447673729294e-13) + 1.06620382164434e-8));
        b4 = gain*(pow(fs,2)*gain*(fs*(4.65094790958669e-17*fs - 1.37304022225245e-13) + 7.25018598718153e-11) + fs*(fs*(fs*(-4.65094790958669e-17*fs + 1.40723836864647e-13) - 8.25977438589657e-11) + 5.33101910822171e-9));
    
        a0 = fs*(fs*(1.96553718457028e-16*fs + 1.13349301191717e-12) + 1.11617868321251e-9) + gain*(fs*gain*(fs*(fs*(-6.53431917359364e-19*fs - 4.15013217407039e-15) - 4.94521757525643e-12) - 1.12107818776202e-9) + fs*(fs*(fs*(6.53431917359364e-19*fs + 4.00162492012508e-15) + 4.12028433597e-12) + 4.0496760992863e-10) + 6.22821215423343e-8) + 5.85451942497945e-8;
        a1 = fs*(-3.93107436914056e-16*pow(fs,2) + 2.23235736642502e-9) + gain*(fs*gain*(pow(fs,2)*(2.61372766943745e-18*fs + 8.30026434814079e-15) - 2.24215637552403e-9) + fs*(pow(fs,2)*(-2.61372766943745e-18*fs - 8.00324984025017e-15) + 8.09935219857261e-10) + 2.49128486169337e-7) + 2.34180776999178e-7;
        a2 = -2.26698602383433e-12*pow(fs,2) + gain*(pow(fs,2)*gain*(-3.92059150415618e-18*pow(fs,2) + 9.89043515051286e-12) + pow(fs,2)*(3.92059150415618e-18*pow(fs,2) - 8.24056867194e-12) + 3.73692729254006e-7) + 3.51271165498767e-7;
        a3 = fs*(3.93107436914056e-16*pow(fs,2) - 2.23235736642502e-9) + gain*(fs*gain*(pow(fs,2)*(2.61372766943745e-18*fs - 8.30026434814079e-15) + 2.24215637552403e-9) + fs*(pow(fs,2)*(-2.61372766943745e-18*fs + 8.00324984025017e-15) - 8.09935219857261e-10) + 2.49128486169337e-7) + 2.34180776999178e-7;
        a4 = fs*(fs*(-1.96553718457028e-16*fs + 1.13349301191717e-12) - 1.11617868321251e-9) + gain*(fs*gain*(fs*(fs*(-6.53431917359364e-19*fs + 4.15013217407039e-15) - 4.94521757525643e-12) + 1.12107818776202e-9) + fs*(fs*(fs*(6.53431917359364e-19*fs - 4.00162492012508e-15) + 4.12028433597e-12) - 4.0496760992863e-10) + 6.22821215423343e-8) + 5.85451942497945e-8;
    };

s02_stage2clip = 
    _<: 
        ba.if(signbit(_), s02_stage2_neg_clip, s02_stage2_clip) 
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s02_stage2_clip = ffunction(float s02_stage2clip(float), "generated/stage/peavey_5150ii_crunch/s02_stage2_table.h", "");
        s02_stage2_neg_clip = ffunction(float s02_stage2_negclip(float), "generated/stage/peavey_5150ii_crunch/s02_stage2_neg_table.h", "");
    };

p3 = 
    fi.iir((b0/a0,b1/a0),(a1/a0)) : 
    s03_stage3clip
    
    with {
        fs = float(ma.SR);
    
        b0 = -0.000471052261884848*fs - 0.0486624237484344;
        b1 = 0.000471052261884848*fs - 0.0486624237484344;
    
        a0 = 2.07565118653794e-5*fs + 0.00368743046178661;
        a1 = -2.07565118653794e-5*fs + 0.00368743046178661;
    };

s03_stage3clip = 
    _<:
        ba.if(signbit(_), s03_stage3_neg_clip, s03_stage3_clip)
    :>_
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s03_stage3_clip = ffunction(float s03_stage3clip(float), "generated/stage/peavey_5150ii_crunch/s03_stage3_table.h", "");
        s03_stage3_neg_clip = ffunction(float s03_stage3_negclip(float), "generated/stage/peavey_5150ii_crunch/s03_stage3_neg_table.h", "");
    };

p4 = 
    fi.iir((b0/a0,b1/a0),(a1/a0))
    
    with {
        fs = float(ma.SR);
    
        b0 = 5.82287201278019e-6*fs + 0.00107591870154845;
        b1 = -5.82287201278019e-6*fs + 0.00107591870154845;
    
        a0 = 2.07583450601951e-5*fs + 0.0035994371106348;
        a1 = -2.07583450601951e-5*fs + 0.0035994371106348;
    };

p5 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) 
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        bass   = ampctrl.bass : LogPot(3) : si.smooth(0.999);
        middle = ampctrl.middle : LogPot(3) : si.smooth(0.999);
        treble = ampctrl.treble : si.smooth(0.999) ;
        master = ampctrl.master : LogPot(3) : si.smooth(0.999);
    
        b0 = bass*fs*(9.89404969304451e-12*fs + 2.81767586220316e-8) + fs*(2.47351242326113e-13*fs + 7.0441896555079e-10) + middle*(bass*pow(fs,2)*(9.74689135900239e-15*fs + 3.09944344842348e-11) + pow(fs,2)*middle*(-2.4367228397506e-16*fs - 7.74860862105869e-13) + fs*(fs*(2.4367228397506e-16*fs + 9.70550136098047e-13) + 6.86629031551501e-10)) + treble*(bass*(bass*fs*(fs*(4.54625321338628e-13*fs + 3.95761987721781e-10) + 1.12707034488126e-6) + fs*(fs*(2.27312660669314e-14*fs + 3.05588370266185e-11) + 3.52927322217472e-8)) + fs*(fs*(2.84140825836642e-16*fs + 5.1661968333935e-13) + 1.77899339992889e-10) + middle*(bass*(bass*pow(fs,2)*(3.89875654360096e-13*fs + 1.23977737936939e-9) + fs*(fs*(-1.2984374707929e-14*fs + 2.89279557508774e-11) - 7.11597359971556e-10)) + fs*(fs*(-5.68281651673284e-16*fs - 7.63970925665462e-13) - 8.82318305543679e-10) + middle*(bass*pow(fs,2)*(-1.94937827180048e-14*fs - 6.19888689684695e-11) + pow(fs,2)*middle*(2.4367228397506e-16*fs + 7.74860862105869e-13) + fs*(fs*(4.04685418615824e-17*fs - 9.70550136098047e-13) - 6.86629031551501e-10))));
        b1 = bass*fs*(-9.89404969304451e-12*fs + 2.81767586220316e-8) + fs*(-2.47351242326113e-13*fs + 7.0441896555079e-10) + middle*(bass*pow(fs,2)*(-2.92406740770072e-14*fs - 3.09944344842348e-11) + pow(fs,2)*middle*(7.3101685192518e-16*fs + 7.74860862105869e-13) + fs*(fs*(-7.3101685192518e-16*fs - 9.70550136098047e-13) + 6.86629031551501e-10)) + treble*(bass*(bass*fs*(fs*(-1.36387596401588e-12*fs - 3.95761987721781e-10) + 1.12707034488126e-6) + fs*(fs*(-6.81937982007941e-14*fs - 3.05588370266185e-11) + 3.52927322217472e-8)) + fs*(fs*(-8.52422477509927e-16*fs - 5.1661968333935e-13) + 1.77899339992889e-10) + middle*(bass*(bass*pow(fs,2)*(-1.16962696308029e-12*fs - 1.23977737936939e-9) + fs*(fs*(3.8953124123787e-14*fs - 2.89279557508774e-11) - 7.11597359971556e-10)) + fs*(fs*(1.70484495501985e-15*fs + 7.63970925665462e-13) - 8.82318305543679e-10) + middle*(bass*pow(fs,2)*(5.84813481540144e-14*fs + 6.19888689684695e-11) + pow(fs,2)*middle*(-7.3101685192518e-16*fs - 7.74860862105869e-13) + fs*(fs*(-1.21405625584747e-16*fs + 9.70550136098047e-13) - 6.86629031551501e-10))));
        b2 = bass*fs*(-9.89404969304451e-12*fs - 2.81767586220316e-8) + fs*(-2.47351242326113e-13*fs - 7.0441896555079e-10) + middle*(bass*pow(fs,2)*(2.92406740770072e-14*fs - 3.09944344842348e-11) + pow(fs,2)*middle*(-7.3101685192518e-16*fs + 7.74860862105869e-13) + fs*(fs*(7.3101685192518e-16*fs - 9.70550136098047e-13) - 6.86629031551501e-10)) + treble*(bass*(bass*fs*(fs*(1.36387596401588e-12*fs - 3.95761987721781e-10) - 1.12707034488126e-6) + fs*(fs*(6.81937982007941e-14*fs - 3.05588370266185e-11) - 3.52927322217472e-8)) + fs*(fs*(8.52422477509927e-16*fs - 5.1661968333935e-13) - 1.77899339992889e-10) + middle*(bass*(bass*pow(fs,2)*(1.16962696308029e-12*fs - 1.23977737936939e-9) + fs*(fs*(-3.8953124123787e-14*fs - 2.89279557508774e-11) + 7.11597359971556e-10)) + fs*(fs*(-1.70484495501985e-15*fs + 7.63970925665462e-13) + 8.82318305543679e-10) + middle*(bass*pow(fs,2)*(-5.84813481540144e-14*fs + 6.19888689684695e-11) + pow(fs,2)*middle*(7.3101685192518e-16*fs - 7.74860862105869e-13) + fs*(fs*(1.21405625584747e-16*fs + 9.70550136098047e-13) + 6.86629031551501e-10))));
        b3 = bass*fs*(9.89404969304451e-12*fs - 2.81767586220316e-8) + fs*(2.47351242326113e-13*fs - 7.0441896555079e-10) + middle*(bass*pow(fs,2)*(-9.74689135900239e-15*fs + 3.09944344842348e-11) + pow(fs,2)*middle*(2.4367228397506e-16*fs - 7.74860862105869e-13) + fs*(fs*(-2.4367228397506e-16*fs + 9.70550136098047e-13) - 6.86629031551501e-10)) + treble*(bass*(bass*fs*(fs*(-4.54625321338628e-13*fs + 3.95761987721781e-10) - 1.12707034488126e-6) + fs*(fs*(-2.27312660669314e-14*fs + 3.05588370266185e-11) - 3.52927322217472e-8)) + fs*(fs*(-2.84140825836642e-16*fs + 5.1661968333935e-13) - 1.77899339992889e-10) + middle*(bass*(bass*pow(fs,2)*(-3.89875654360096e-13*fs + 1.23977737936939e-9) + fs*(fs*(1.2984374707929e-14*fs + 2.89279557508774e-11) + 7.11597359971556e-10)) + fs*(fs*(5.68281651673284e-16*fs - 7.63970925665462e-13) + 8.82318305543679e-10) + middle*(bass*pow(fs,2)*(1.94937827180048e-14*fs - 6.19888689684695e-11) + pow(fs,2)*middle*(-2.4367228397506e-16*fs + 7.74860862105869e-13) + fs*(fs*(-4.04685418615824e-17*fs - 9.70550136098047e-13) + 6.86629031551501e-10))));

        a0 = bass*fs*(fs*(1.13656330334657e-14*fs + 4.97734638455557e-11) + 2.81767586220316e-8) + fs*(fs*(2.84140825836642e-16*fs + 1.76095627947824e-12) + 2.69501894883964e-9) + middle*(bass*pow(fs,2)*(9.74689135900239e-15*fs + 3.09944344842348e-11) + pow(fs,2)*middle*(-2.4367228397506e-16*fs - 7.74860862105869e-13) + fs*(fs*(-4.04685418615824e-17*fs - 2.64352177147328e-14) + 6.86629031551501e-10)) + 6.24208210501365e-7;
        a1 = bass*fs*(fs*(-3.40968991003971e-14*fs - 4.97734638455557e-11) + 2.81767586220316e-8) + fs*(fs*(-8.52422477509927e-16*fs - 1.76095627947824e-12) + 2.69501894883964e-9) + middle*(bass*pow(fs,2)*(-2.92406740770072e-14*fs - 3.09944344842348e-11) + pow(fs,2)*middle*(7.3101685192518e-16*fs + 7.74860862105869e-13) + fs*(fs*(1.21405625584747e-16*fs + 2.64352177147328e-14) + 6.86629031551501e-10)) + 1.87262463150409e-6;
        a2 = bass*fs*(fs*(3.40968991003971e-14*fs - 4.97734638455557e-11) - 2.81767586220316e-8) + fs*(fs*(8.52422477509927e-16*fs - 1.76095627947824e-12) - 2.69501894883964e-9) + middle*(bass*pow(fs,2)*(2.92406740770072e-14*fs - 3.09944344842348e-11) + pow(fs,2)*middle*(-7.3101685192518e-16*fs + 7.74860862105869e-13) + fs*(fs*(-1.21405625584747e-16*fs + 2.64352177147328e-14) - 6.86629031551501e-10)) + 1.87262463150409e-6;
        a3 = bass*fs*(fs*(-1.13656330334657e-14*fs + 4.97734638455557e-11) - 2.81767586220316e-8) + fs*(fs*(-2.84140825836642e-16*fs + 1.76095627947824e-12) - 2.69501894883964e-9) + middle*(bass*pow(fs,2)*(-9.74689135900239e-15*fs + 3.09944344842348e-11) + pow(fs,2)*middle*(2.4367228397506e-16*fs - 7.74860862105869e-13) + fs*(fs*(4.04685418615824e-17*fs - 2.64352177147328e-14) - 6.86629031551501e-10)) + 6.24208210501365e-7;
    };

p6 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) :
    s06_stage4clip
    
    with {
        fs = float(ma.SR);
    
        b0 = 8.82123032648896e-15*pow(fs,3);
        b1 = -2.64636909794669e-14*pow(fs,3);
        b2 = 2.64636909794669e-14*pow(fs,3);
        b3 = -8.82123032648896e-15*pow(fs,3);
    
        a0 = fs*(fs*(9.03361060537002e-15*fs + 4.14420870053604e-13) + 2.29677429297512e-12) + 1.14901989819789e-12;
        a1 = fs*(fs*(-2.71008318161101e-14*fs - 4.14420870053604e-13) + 2.29677429297512e-12) + 3.44705969459367e-12;
        a2 = fs*(fs*(2.71008318161101e-14*fs - 4.14420870053604e-13) - 2.29677429297512e-12) + 3.44705969459367e-12;
        a3 = fs*(fs*(-9.03361060537002e-15*fs + 4.14420870053604e-13) - 2.29677429297512e-12) + 1.14901989819789e-12;
    };

s06_stage4clip = 
    _<:
        ba.if(signbit(_), s06_stage4_neg_clip, s06_stage4_clip)
    :>_

    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s06_stage4_clip = ffunction(float s06_stage4clip(float), "generated/stage/peavey_5150ii_crunch/s06_stage4_table.h", "");
        s06_stage4_neg_clip = ffunction(float s06_stage4_negclip(float), "generated/stage/peavey_5150ii_crunch/s06_stage4_neg_table.h", "");
    };

p7 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s07_stage5clip
    
    with {
        fs = float(ma.SR);
    
        b0 = fs*(-6.2021647107889e-9*fs - 0.000199940835293);
        b1 = 1.24043294215778e-8*pow(fs,2);
        b2 = fs*(-6.2021647107889e-9*fs + 0.000199940835293);
    
        a0 = fs*(1.3725322285498e-10*fs + 1.42420224832928e-5) + 0.00015149534407047;
        a1 = -2.74506445709959e-10*pow(fs,2) + 0.00030299068814094;
        a2 = fs*(1.3725322285498e-10*fs - 1.42420224832928e-5) + 0.00015149534407047;
    };

s07_stage5clip =
    _<:
        ba.if(signbit(_), s07_stage5_neg_clip, s07_stage5_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s07_stage5_clip = ffunction(float s07_stage5clip(float), "generated/stage/peavey_5150ii_crunch/s07_stage5_table.h", "");
        s07_stage5_neg_clip = ffunction(float s07_stage5_negclip(float), "generated/stage/peavey_5150ii_crunch/s07_stage5_neg_table.h", "");
    };

p8 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s08_stage6clip 
    
    with {
        fs = float(ma.SR);
    
        b0 = fs*(4.86576834283976e-12*fs + 6.31789783214569e-10) + 6.84578809362547e-11;
        b1 = -9.73153668567952e-12*pow(fs,2) + 1.36915761872509e-10;
        b2 = fs*(4.86576834283976e-12*fs - 6.31789783214569e-10) + 6.84578809362547e-11;
    
        a0 = fs*(4.33699283765577e-10*fs + 1.57671526976176e-8) + 2.6874624433038e-8;
        a1 = -8.67398567531154e-10*pow(fs,2) + 5.37492488660761e-8;
        a2 = fs*(4.33699283765577e-10*fs - 1.57671526976176e-8) + 2.6874624433038e-8;
    };

s08_stage6clip = 
    _<:
        ba.if(signbit(_), s08_stage6_neg_clip, s08_stage6_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s08_stage6_clip = ffunction(float s08_stage6clip(float), "generated/stage/peavey_5150ii_crunch/s08_stage6_table.h", "");
        s08_stage6_neg_clip = ffunction(float s08_stage6_negclip(float), "generated/stage/peavey_5150ii_crunch/s08_stage6_neg_table.h", "");
    };

process = 
    *(pregain) :
//    *(0.2) :
    *(0.1) :
    p1 :
//    *(1.05) :
    *(0.7) :
    p2 : 
    *(1.35) :
    p3 : 
    p4 : 
//    *(2.15) :
    *(2.4) :
    p5 : 
//    *(3.4) :
    *(4.9) :
    p6 : 
//    *(5.0) :
    *(10.24) :
    p7 : 
//    *(11.8) :
    *(21.9) :
    p8 :
//    *(71.5) :
    *(75.21) :
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
