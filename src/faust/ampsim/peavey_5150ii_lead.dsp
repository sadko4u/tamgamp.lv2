/*
 * Simulation of Peavey 5150II lead channel 
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
declare id "peavey_5150ii_lead";
declare name "peavey_5150ii_lead";
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
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/peavey_5150ii_lead/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/peavey_5150ii_lead/s01_stage1_neg_table.h", "");
    };

p2 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) :
    s02_stage2clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(fs*gain*(fs*(3.4063252169753e-13*fs + 1.72393288420091e-10) + 1.03851378566326e-9) + fs*(fs*(-3.4063252169753e-13*fs - 3.42709549268856e-10) - 2.07702757132652e-9));
        b1 = gain*(fs*gain*(fs*(-1.02189756509259e-12*fs - 1.72393288420091e-10) + 1.03851378566326e-9) + fs*(fs*(1.02189756509259e-12*fs + 3.42709549268856e-10) - 2.07702757132652e-9));
        b2 = gain*(fs*gain*(fs*(1.02189756509259e-12*fs - 1.72393288420091e-10) - 1.03851378566326e-9) + fs*(fs*(-1.02189756509259e-12*fs + 3.42709549268856e-10) + 2.07702757132652e-9));
        b3 = gain*(fs*gain*(fs*(-3.4063252169753e-13*fs + 1.72393288420091e-10) - 1.03851378566326e-9) + fs*(fs*(3.4063252169753e-13*fs - 3.42709549268856e-10) + 2.07702757132652e-9));
    
        a0 = fs*(5.03890839310646e-11*fs + 5.44278531556381e-8) + gain*(fs*(fs*(3.22215910851706e-14*fs + 1.80358263851319e-11) + 9.62515421273177e-10) + gain*(fs*(fs*(-3.22215910851706e-14*fs - 5.23141147736113e-11) - 2.01495647671585e-8) - 1.02395257582279e-6) - 1.45699490863443e-20) + 3.07185772746841e-6;
        a1 = fs*(-5.03890839310646e-11*fs + 5.44278531556381e-8) + gain*(fs*(fs*(-9.66647732555118e-14*fs - 1.80358263851319e-11) + 9.62515421273177e-10) + gain*(fs*(fs*(9.66647732555118e-14*fs + 5.23141147736113e-11) - 2.01495647671585e-8) - 3.07185772746838e-6) - 4.37098472590328e-20) + 9.21557318240523e-6;
        a2 = fs*(-5.03890839310646e-11*fs - 5.44278531556381e-8) + gain*(fs*(fs*(9.66647732555118e-14*fs - 1.80358263851319e-11) - 9.62515421273177e-10) + gain*(fs*(fs*(-9.66647732555118e-14*fs + 5.23141147736113e-11) + 2.01495647671585e-8) - 3.07185772746838e-6) - 4.37098472590328e-20) + 9.21557318240523e-6;
        a3 = fs*(5.03890839310646e-11*fs - 5.44278531556381e-8) + gain*(fs*(fs*(-3.22215910851706e-14*fs + 1.80358263851319e-11) - 9.62515421273177e-10) + gain*(fs*(fs*(3.22215910851706e-14*fs - 5.23141147736113e-11) + 2.01495647671585e-8) - 1.02395257582279e-6) - 1.45699490863443e-20) + 3.07185772746841e-6;
    };

s02_stage2clip = 
    _<:
        ba.if(signbit(_), s02_stage2_neg_clip, s02_stage2_clip)
    :>_
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s02_stage2_clip = ffunction(float s02_stage2clip(float), "generated/stage/peavey_5150ii_lead/s02_stage2_table.h", "");
        s02_stage2_neg_clip = ffunction(float s02_stage2_negclip(float), "generated/stage/peavey_5150ii_lead/s02_stage2_neg_table.h", "");
    };

p3 = s03_stage3clip;

s03_stage3clip = 
    _<:
        ba.if(signbit(_), s03_stage3_neg_clip, s03_stage3_clip)
    :>_ 
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s03_stage3_clip = ffunction(float s03_stage3clip(float), "generated/stage/peavey_5150ii_lead/s03_stage3_table.h", "");
        s03_stage3_neg_clip = ffunction(float s03_stage3_negclip(float), "generated/stage/peavey_5150ii_lead/s03_stage3_neg_table.h", "");
    };

p4 =
    fi.iir((b0/a0,b1/a0),(a1/a0)) :
    s04_stage4clip
    
    with {
        fs = float(ma.SR);
    
        b0 = -0.000408700311197658*fs - 0.00249207506827852;
        b1 = 0.000408700311197658*fs - 0.00249207506827852;
    
        a0 = 2.08110484866641e-5*fs + 0.00106967264012324;
        a1 = -2.08110484866641e-5*fs + 0.00106967264012324;
    };

s04_stage4clip = 
    _<:
        ba.if(signbit(_), s04_stage4_neg_clip, s04_stage4_clip)
    :>_

    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s04_stage4_clip = ffunction(float s04_stage4clip(float), "generated/stage/peavey_5150ii_lead/s04_stage4_table.h", "");
        s04_stage4_neg_clip = ffunction(float s04_stage4_negclip(float), "generated/stage/peavey_5150ii_lead/s04_stage4_neg_table.h", "");
    };

p5 = s05_stage5clip;

s05_stage5clip = 
    _<:
        ba.if(signbit(_), s05_stage5_neg_clip, s05_stage5_clip)
    :>_
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s05_stage5_clip = ffunction(float s05_stage5clip(float), "generated/stage/peavey_5150ii_lead/s05_stage5_table.h", "");
        s05_stage5_neg_clip = ffunction(float s05_stage5_negclip(float), "generated/stage/peavey_5150ii_lead/s05_stage5_neg_table.h", "");
    };

p6 =
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s06_stage6clip 
    
    with {
        fs = float(ma.SR);
    
        b0 = fs*(-3.52021176770952e-10*fs - 5.33049166798005e-7) + 4.79170533214517e-7;
        b1 = 7.04042353541903e-10*pow(fs,2) + 9.58341066429035e-7;
        b2 = fs*(-3.52021176770952e-10*fs + 5.33049166798005e-7) + 4.79170533214517e-7;
    
        a0 = fs*(4.27669797848661e-10*fs + 3.04860828397743e-7) + 1.54659935933281e-5;
        a1 = -8.55339595697322e-10*pow(fs,2) + 3.09319871866562e-5;
        a2 = fs*(4.27669797848661e-10*fs - 3.04860828397743e-7) + 1.54659935933281e-5;
    };

s06_stage6clip = 
    _<:
        ba.if(signbit(_), s06_stage6_neg_clip, s06_stage6_clip)
    :>_
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s06_stage6_clip = ffunction(float s06_stage6clip(float), "generated/stage/peavey_5150ii_lead/s06_stage6_table.h", "");
        s06_stage6_neg_clip = ffunction(float s06_stage6_negclip(float), "generated/stage/peavey_5150ii_lead/s06_stage6_neg_table.h", "");
    };

p7 =
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0))
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        bass   = ampctrl.bass : LogPot(3) : si.smooth(0.999);
        middle = ampctrl.middle : LogPot(3) : si.smooth(0.999);
        treble = ampctrl.treble : si.smooth(0.999) ;
        master = ampctrl.master : LogPot(3) : si.smooth(0.999);
    
        b0 = bass*fs*(7.21272904185746e-12*fs + 2.27820978547042e-8) + fs*(1.74741373694485e-13*fs + 5.51937422253143e-10) + middle*(bass*pow(fs,2)*(1.36999917324118e-14*fs + 5.01206152803492e-11) + pow(fs,2)*treble*(1.67629806160407e-17*fs + 1.35098167440689e-13) + fs*(fs*(3.31907016197606e-16*fs + 1.34125460635116e-12) + 5.40392669762757e-10) + middle*(bass*pow(fs,2)*(-7.0618514084597e-15*fs - 2.58353687012109e-11) + pow(fs,2)*treble*(-2.79383010267345e-16*fs - 1.35098167440689e-13) + pow(fs,2)*(-3.31907016197606e-16*fs - 1.21426232895691e-12))) + treble*(1.0840060798373e-14*bass*pow(fs,3) + fs*(fs*(2.62620029651304e-16*fs + 4.9273003628968e-13) + 1.19132020379517e-10));
        b1 = bass*fs*(-7.21272904185746e-12*fs + 2.27820978547042e-8) + fs*(-1.74741373694485e-13*fs + 5.51937422253143e-10) + middle*(bass*pow(fs,2)*(-4.10999751972355e-14*fs - 5.01206152803492e-11) + pow(fs,2)*treble*(-5.0288941848122e-17*fs - 1.35098167440689e-13) + fs*(fs*(-9.95721048592818e-16*fs - 1.34125460635116e-12) + 5.40392669762757e-10) + middle*(bass*pow(fs,2)*(2.11855542253791e-14*fs + 2.58353687012109e-11) + pow(fs,2)*treble*(8.38149030802034e-16*fs + 1.35098167440689e-13) + pow(fs,2)*(9.95721048592818e-16*fs + 1.21426232895691e-12))) + treble*(-3.25201823951189e-14*bass*pow(fs,3) + fs*(fs*(-7.87860088953912e-16*fs - 4.9273003628968e-13) + 1.19132020379517e-10));
        b2 = bass*fs*(-7.21272904185746e-12*fs - 2.27820978547042e-8) + fs*(-1.74741373694485e-13*fs - 5.51937422253143e-10) + middle*(bass*pow(fs,2)*(4.10999751972355e-14*fs - 5.01206152803492e-11) + pow(fs,2)*treble*(5.0288941848122e-17*fs - 1.35098167440689e-13) + fs*(fs*(9.95721048592818e-16*fs - 1.34125460635116e-12) - 5.40392669762757e-10) + middle*(bass*pow(fs,2)*(-2.11855542253791e-14*fs + 2.58353687012109e-11) + pow(fs,2)*treble*(-8.38149030802034e-16*fs + 1.35098167440689e-13) + pow(fs,2)*(-9.95721048592818e-16*fs + 1.21426232895691e-12))) + treble*(3.25201823951189e-14*bass*pow(fs,3) + fs*(fs*(7.87860088953912e-16*fs - 4.9273003628968e-13) - 1.19132020379517e-10));
        b3 = bass*fs*(7.21272904185746e-12*fs - 2.27820978547042e-8) + fs*(1.74741373694485e-13*fs - 5.51937422253143e-10) + middle*(bass*pow(fs,2)*(-1.36999917324118e-14*fs + 5.01206152803492e-11) + pow(fs,2)*treble*(-1.67629806160407e-17*fs + 1.35098167440689e-13) + fs*(fs*(-3.31907016197606e-16*fs + 1.34125460635116e-12) - 5.40392669762757e-10) + middle*(bass*pow(fs,2)*(7.0618514084597e-15*fs - 2.58353687012109e-11) + pow(fs,2)*treble*(2.79383010267345e-16*fs - 1.35098167440689e-13) + pow(fs,2)*(3.31907016197606e-16*fs - 1.21426232895691e-12))) + treble*(-1.0840060798373e-14*bass*pow(fs,3) + fs*(fs*(-2.62620029651304e-16*fs + 4.9273003628968e-13) - 1.19132020379517e-10));

        a0 = bass*fs*(fs*(1.0840060798373e-14*fs + 5.33406473328063e-11) + 2.27820978547042e-8) + fs*(fs*(2.62620029651304e-16*fs + 1.78500345105354e-12) + 2.76779300131215e-9) + middle*(bass*pow(fs,2)*(1.36999917324118e-14*fs + 5.01206152803492e-11) + fs*(fs*(3.48669996813647e-16*fs + 1.54768460620053e-12) + 1.11527848865931e-9) + middle*(bass*pow(fs,2)*(-7.0618514084597e-15*fs - 2.58353687012109e-11) + fs*(fs*(-6.11290026464951e-16*fs - 2.53822436987567e-12) - 5.7488581889655e-10))) + 5.06944767572412e-7;
        a1 = bass*fs*(fs*(-3.25201823951189e-14*fs - 5.33406473328063e-11) + 2.27820978547042e-8) + fs*(fs*(-7.87860088953912e-16*fs - 1.78500345105354e-12) + 2.76779300131215e-9) + middle*(bass*pow(fs,2)*(-4.10999751972355e-14*fs - 5.01206152803492e-11) + fs*(fs*(-1.04600999044094e-15*fs - 1.54768460620053e-12) + 1.11527848865931e-9) + middle*(bass*pow(fs,2)*(2.11855542253791e-14*fs + 2.58353687012109e-11) + fs*(fs*(1.83387007939485e-15*fs + 2.53822436987567e-12) - 5.7488581889655e-10))) + 1.52083430271724e-6;
        a2 = bass*fs*(fs*(3.25201823951189e-14*fs - 5.33406473328063e-11) - 2.27820978547042e-8) + fs*(fs*(7.87860088953912e-16*fs - 1.78500345105354e-12) - 2.76779300131215e-9) + middle*(bass*pow(fs,2)*(4.10999751972355e-14*fs - 5.01206152803492e-11) + fs*(fs*(1.04600999044094e-15*fs - 1.54768460620053e-12) - 1.11527848865931e-9) + middle*(bass*pow(fs,2)*(-2.11855542253791e-14*fs + 2.58353687012109e-11) + fs*(fs*(-1.83387007939485e-15*fs + 2.53822436987567e-12) + 5.7488581889655e-10))) + 1.52083430271724e-6;
        a3 = bass*fs*(fs*(-1.0840060798373e-14*fs + 5.33406473328063e-11) - 2.27820978547042e-8) + fs*(fs*(-2.62620029651304e-16*fs + 1.78500345105354e-12) - 2.76779300131215e-9) + middle*(bass*pow(fs,2)*(-1.36999917324118e-14*fs + 5.01206152803492e-11) + fs*(fs*(-3.48669996813647e-16*fs + 1.54768460620053e-12) - 1.11527848865931e-9) + middle*(bass*pow(fs,2)*(7.0618514084597e-15*fs - 2.58353687012109e-11) + fs*(fs*(6.11290026464951e-16*fs - 2.53822436987567e-12) + 5.7488581889655e-10))) + 5.06944767572412e-7;
    };

p8 =
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) :
    s08_stage7clip
    
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

s08_stage7clip = 
    _<:
        ba.if(signbit(_), s08_stage7_neg_clip, s08_stage7_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s08_stage7_clip = ffunction(float s08_stage7clip(float), "generated/stage/peavey_5150ii_lead/s08_stage7_table.h", "");
        s08_stage7_neg_clip = ffunction(float s08_stage7_negclip(float), "generated/stage/peavey_5150ii_lead/s08_stage7_neg_table.h", "");
    };

p9 =
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s09_stage8clip 
    with {
        fs = float(ma.SR);
    
        b0 = fs*(-6.2021647107889e-9*fs - 0.000199940835293);
        b1 = 1.24043294215778e-8*pow(fs,2);
        b2 = fs*(-6.2021647107889e-9*fs + 0.000199940835293);
    
        a0 = fs*(1.3725322285498e-10*fs + 1.42420224832928e-5) + 0.00015149534407047;
        a1 = -2.74506445709959e-10*pow(fs,2) + 0.00030299068814094;
        a2 = fs*(1.3725322285498e-10*fs - 1.42420224832928e-5) + 0.00015149534407047;
    };

s09_stage8clip = 
    _<: 
        ba.if(signbit(_), s09_stage8_neg_clip, s09_stage8_clip) 
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s09_stage8_clip = ffunction(float s09_stage8clip(float), "generated/stage/peavey_5150ii_lead/s09_stage8_table.h", "");
        s09_stage8_neg_clip = ffunction(float s09_stage8_negclip(float), "generated/stage/peavey_5150ii_lead/s09_stage8_neg_table.h", "");
    };

p10 =
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s10_stage9clip
    
    with {
        fs = float(ma.SR);
    
        b0 = fs*(2.57276196211087e-11*fs + 4.08266440921021e-12);
        b1 = -5.14552392422173e-11*pow(fs,2);
        b2 = fs*(2.57276196211087e-11*fs - 4.08266440921021e-12);
    
        a0 = fs*(4.3370466939498e-10*fs + 1.55086385348147e-8) + 2.70642953771017e-8;
        a1 = -8.6740933878996e-10*pow(fs,2) + 5.41285907542035e-8;
        a2 = fs*(4.3370466939498e-10*fs - 1.55086385348147e-8) + 2.70642953771017e-8;
    };

s10_stage9clip = 
    _<: 
        ba.if(signbit(_), s10_stage9_neg_clip, s10_stage9_clip)
    :>_
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s10_stage9_clip = ffunction(float s10_stage9clip(float), "generated/stage/peavey_5150ii_lead/s10_stage9_table.h", "");
        s10_stage9_neg_clip = ffunction(float s10_stage9_negclip(float), "generated/stage/peavey_5150ii_lead/s10_stage9_neg_table.h", "");
    };

process =
    *(pregain) :
    *(0.08) :
    p1 :
    *(7.0) :
    p2 : 
    *(4.0) :
    p3 : 
    *(20.9) :
    p4 :
    *(73.0) :
    p5 :
    *(71.0) :
    p6 : 
    p7 : 
    *(90.0) :
    p8 : 
    *(90.0) :
    p9 : 
    *(68.0) :
    p10 :
    *(4.15) :
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


