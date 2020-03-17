/*
 * Simulation of VOX AC-30 brilliant channel
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
declare id "vox_ac30_brilliant";
declare name "vox_ac30_brilliant";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) : 
    s01_stage1clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(pow(fs,2)*gain*(1.21691030264956e-12*fs + 1.62254707019943e-11) + fs*(fs*(-1.21691030264956e-12*fs - 1.21853284971976e-8) - 1.62254707019943e-7));
        b1 = gain*(pow(fs,2)*gain*(-3.65073090794867e-12*fs - 1.62254707019943e-11) + fs*(fs*(3.65073090794867e-12*fs + 1.21853284971976e-8) - 1.62254707019943e-7));
        b2 = gain*(pow(fs,2)*gain*(3.65073090794867e-12*fs - 1.62254707019943e-11) + fs*(fs*(-3.65073090794867e-12*fs + 1.21853284971976e-8) + 1.62254707019943e-7));
        b3 = gain*(pow(fs,2)*gain*(-1.21691030264956e-12*fs + 1.62254707019943e-11) + fs*(fs*(1.21691030264956e-12*fs - 1.21853284971976e-8) + 1.62254707019943e-7));
    
        a0 = fs*(fs*(1.46759132724008e-15*fs + 2.11486483634959e-10) + 3.32555682503344e-7) + gain*(pow(fs,2)*gain*(-1.63951503064558e-14*fs - 3.30417460278931e-13) + fs*(fs*(1.49275589792157e-14*fs - 3.25286498377207e-11) - 6.60834920557862e-10)) + 6.60834920557862e-6;
        a1 = fs*(fs*(-4.40277398172025e-15*fs - 2.11486483634959e-10) + 3.32555682503344e-7) + gain*(pow(fs,2)*gain*(4.91854509193674e-14*fs + 3.30417460278931e-13) + fs*(fs*(-4.47826769376472e-14*fs + 3.25286498377207e-11) - 6.60834920557862e-10)) + 1.98250476167359e-5;
        a2 = fs*(fs*(4.40277398172025e-15*fs - 2.11486483634959e-10) - 3.32555682503344e-7) + gain*(pow(fs,2)*gain*(-4.91854509193674e-14*fs + 3.30417460278931e-13) + fs*(fs*(4.47826769376472e-14*fs + 3.25286498377207e-11) + 6.60834920557862e-10)) + 1.98250476167359e-5;
        a3 = fs*(fs*(-1.46759132724008e-15*fs + 2.11486483634959e-10) - 3.32555682503344e-7) + gain*(pow(fs,2)*gain*(1.63951503064558e-14*fs - 3.30417460278931e-13) + fs*(fs*(-1.49275589792157e-14*fs - 3.25286498377207e-11) + 6.60834920557862e-10)) + 6.60834920557862e-6;
    };

s01_stage1clip = 
    _<: 
        ba.if(signbit(_), s01_stage1_neg_clip, s01_stage1_clip) 
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/vox_ac30_brilliant/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/vox_ac30_brilliant/s01_stage1_neg_table.h", "");
    };

p2 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) :
    s02_stage2clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        bass = ampctrl.bass : LogPot(3.0) : si.smooth(0.999);
        treble = ampctrl.treble : LogPot(3.0) : si.smooth(0.999);
    
        b0 = bass*(bass*(pow(fs,3)*treble*(3.05797947138973e-17*fs + 4.63330222937843e-16) + fs*(fs*(fs*(3.3637774185287e-18*fs + 4.09921063749909e-14) + 7.47139476619465e-11) + 1.12263071754777e-9)) + fs*treble*(fs*(fs*(-3.08855926610362e-17*fs + 9.2202714364629e-16) + 1.79013949771437e-13) + 2.39323462261283e-12) + fs*(fs*(fs*(-3.3637774185287e-18*fs - 4.09226068415502e-14) - 7.3973537899982e-11) - 1.11142834271851e-9)) + fs*treble*(fs*(-1.40389057550165e-15*fs - 1.80804089269152e-13) - 2.41716696883895e-12) + fs*(fs*(-1.52898973569486e-16*fs - 1.4826096634268e-12) - 2.24286820047292e-11);
        b1 = bass*(bass*(pow(fs,3)*treble*(-1.22319178855589e-16*fs - 9.26660445875686e-16) + fs*(pow(fs,2)*(-1.34551096741148e-17*fs - 8.19842127499818e-14) + 2.24526143509553e-9)) + fs*treble*(pow(fs,2)*(1.23542370644145e-16*fs - 1.84405428729258e-15) + 4.78646924522565e-12) + fs*(pow(fs,2)*(1.34551096741148e-17*fs + 8.18452136831005e-14) - 2.22285668543703e-9)) + fs*treble*(2.80778115100329e-15*pow(fs,2) - 4.83433393767791e-12) + fs*(3.05797947138973e-16*pow(fs,2) - 4.48573640094584e-11);
        b2 = bass*(bass*(1.83478768283384e-16*pow(fs,4)*treble + pow(fs,2)*(2.01826645111722e-17*pow(fs,2) - 1.49427895323893e-10)) + pow(fs,2)*treble*(-1.85313555966217e-16*pow(fs,2) - 3.58027899542875e-13) + pow(fs,2)*(-2.01826645111722e-17*pow(fs,2) + 1.47947075799964e-10)) + 3.61608178538304e-13*pow(fs,2)*treble + 2.96521932685359e-12*pow(fs,2);
        b3 = bass*(bass*(pow(fs,3)*treble*(-1.22319178855589e-16*fs + 9.26660445875686e-16) + fs*(pow(fs,2)*(-1.34551096741148e-17*fs + 8.19842127499818e-14) - 2.24526143509553e-9)) + fs*treble*(pow(fs,2)*(1.23542370644145e-16*fs + 1.84405428729258e-15) - 4.78646924522565e-12) + fs*(pow(fs,2)*(1.34551096741148e-17*fs - 8.18452136831005e-14) + 2.22285668543703e-9)) + fs*treble*(-2.80778115100329e-15*pow(fs,2) + 4.83433393767791e-12) + fs*(-3.05797947138973e-16*pow(fs,2) + 4.48573640094584e-11);
        b4 = bass*(bass*(pow(fs,3)*treble*(3.05797947138973e-17*fs - 4.63330222937843e-16) + fs*(fs*(fs*(3.3637774185287e-18*fs - 4.09921063749909e-14) + 7.47139476619465e-11) - 1.12263071754777e-9)) + fs*treble*(fs*(fs*(-3.08855926610362e-17*fs - 9.2202714364629e-16) + 1.79013949771437e-13) - 2.39323462261283e-12) + fs*(fs*(fs*(-3.3637774185287e-18*fs + 4.09226068415502e-14) - 7.3973537899982e-11) + 1.11142834271851e-9)) + fs*treble*(fs*(1.40389057550165e-15*fs - 1.80804089269152e-13) + 2.41716696883895e-12) + fs*(fs*(1.52898973569486e-16*fs - 1.4826096634268e-12) + 2.24286820047292e-11);
    
        a0 = bass*(bass*fs*(fs*(fs*(-6.02672969538652e-19*fs - 6.49932574103903e-15) - 1.47032744910494e-12) - 3.81165435253458e-11) + fs*(fs*(fs*(6.08122466362163e-19*fs + 6.53131301878959e-15) + 1.19327043205117e-12) + 7.38273127010344e-13) - 8.64438325516983e-10) + fs*(fs*(2.76419302891892e-17*fs + 2.94253695876191e-13) + 3.812941500894e-11) + 8.73082708772152e-10;
        a1 = bass*(bass*fs*(pow(fs,2)*(2.41069187815461e-18*fs + 1.29986514820781e-14) - 7.62330870506917e-11) + fs*(pow(fs,2)*(-2.43248986544865e-18*fs - 1.30626260375792e-14) + 1.47654625402069e-12) - 3.45775330206793e-9) + fs*(-5.52838605783785e-17*pow(fs,2) + 7.62588300178801e-11) + 3.49233083508861e-9;
        a2 = bass*(bass*pow(fs,2)*(-3.61603781723191e-18*pow(fs,2) + 2.94065489820987e-12) + pow(fs,2)*(3.64873479817298e-18*pow(fs,2) - 2.38654086410234e-12) - 5.1866299531019e-9) - 5.88507391752382e-13*pow(fs,2) + 5.23849625263291e-9;
        a3 = bass*(bass*fs*(pow(fs,2)*(2.41069187815461e-18*fs - 1.29986514820781e-14) + 7.62330870506917e-11) + fs*(pow(fs,2)*(-2.43248986544865e-18*fs + 1.30626260375792e-14) - 1.47654625402069e-12) - 3.45775330206793e-9) + fs*(5.52838605783785e-17*pow(fs,2) - 7.62588300178801e-11) + 3.49233083508861e-9;
        a4 = bass*(bass*fs*(fs*(fs*(-6.02672969538652e-19*fs + 6.49932574103903e-15) - 1.47032744910494e-12) + 3.81165435253458e-11) + fs*(fs*(fs*(6.08122466362163e-19*fs - 6.53131301878959e-15) + 1.19327043205117e-12) - 7.38273127010344e-13) - 8.64438325516983e-10) + fs*(fs*(-2.76419302891892e-17*fs + 2.94253695876191e-13) - 3.812941500894e-11) + 8.73082708772152e-10;
    };

s02_stage2clip =
    _<:
        ba.if(signbit(_), s02_stage2_neg_clip, s02_stage2_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s02_stage2_clip = ffunction(float s02_stage2clip(float), "generated/stage/vox_ac30_brilliant/s02_stage2_table.h", "");
        s02_stage2_neg_clip = ffunction(float s02_stage2_negclip(float), "generated/stage/vox_ac30_brilliant/s02_stage2_neg_table.h", "");
    };

p3 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) : 
    s03_stage3clip
    
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

s03_stage3clip =
    _<:
        ba.if(signbit(_), s03_stage3_neg_clip, s03_stage3_clip)
    :>_ 
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s03_stage3_clip = ffunction(float s03_stage3clip(float), "generated/stage/vox_ac30_brilliant/s03_stage3_table.h", "");
        s03_stage3_neg_clip = ffunction(float s03_stage3_negclip(float), "generated/stage/vox_ac30_brilliant/s03_stage3_neg_table.h", "");
    };

process =
    *(pregain) :
    *(0.13) :
    p1 : 
    *(0.075) :
    p2 : 
    *(0.205) :
    p3 : 
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


