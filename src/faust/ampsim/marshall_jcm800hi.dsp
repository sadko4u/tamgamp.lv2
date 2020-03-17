/*
 * Simulation of Marshall JCM-800 High-gain input
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
declare id "marshall_jcm800hi";
declare name "marshall_jcm800hi";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 = 
    fi.iir((b0/a0,b1/a0),(a1/a0)) :
    s01_stage1clip 
    with {
        fs = float(ma.SR);
    
        b0 = -0.00100706000116536*fs - 2.74253812953532;
        b1 = 0.00100706000116536*fs - 2.74253812953532;
        
        a0 = 1.82383685270143e-5*fs + 0.124558310703316;
        a1 = -1.82383685270143e-5*fs + 0.124558310703316;
    };

s01_stage1clip = 
    _<:
        ba.if(signbit(_), s01_stage1_neg_clip, s01_stage1_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/marshall_jcm800hi/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/marshall_jcm800hi/s01_stage1_neg_table.h", "");
    };

p2 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) :
    s02_stage2clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(fs*gain*(1.18724587211056e-8*fs + 2.68729260323803e-5) + fs*(-1.18724587211056e-8*fs - 3.28091553929331e-5) - 0.0134364630161901);
        b1 = gain*(-2.37449174422112e-8*pow(fs,2)*gain + 2.37449174422112e-8*pow(fs,2) - 0.0268729260323803);
        b2 = gain*(fs*gain*(1.18724587211056e-8*fs - 2.68729260323803e-5) + fs*(-1.18724587211056e-8*fs + 3.28091553929331e-5) - 0.0134364630161901);
    
        a0 = 2.38987184143621e-6*fs + gain*(fs*gain*(-1.52821736799322e-9*fs - 3.45907054774382e-6) + fs*(1.52821736799322e-9*fs + 1.83330739030423e-6)) + 0.00254241685259171;
        a1 = gain*(3.05643473598644e-9*pow(fs,2)*gain - 3.05643473598644e-9*pow(fs,2)) + 0.00508483370518342;
        a2 = -2.38987184143621e-6*fs + gain*(fs*gain*(-1.52821736799322e-9*fs + 3.45907054774382e-6) + fs*(1.52821736799322e-9*fs - 1.83330739030423e-6)) + 0.00254241685259171;
    };

s02_stage2clip = 
    _<:
        ba.if(signbit(_), s02_stage2_neg_clip, s02_stage2_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s02_stage2_clip = ffunction(float s02_stage2clip(float), "generated/stage/marshall_jcm800hi/s02_stage2_table.h", "");
        s02_stage2_neg_clip = ffunction(float s02_stage2_negclip(float), "generated/stage/marshall_jcm800hi/s02_stage2_neg_table.h", "");
    };

p3 =
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) :
    s03_stage3clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        bass   = ampctrl.bass : LogPot(3.0) : si.smooth(0.999);
        middle = ampctrl.middle : si.smooth(0.999);
        treble = ampctrl.treble : si.smooth(0.999) ;
    
        b0 = bass*(pow(fs,3)*treble*(-9.188187558692e-18*fs - 2.07971651396379e-14) + pow(fs,2)*middle*(fs*(-7.04427712833053e-18*fs - 4.61974934559815e-14) - 6.84766866959239e-11) + fs*(fs*(-8.22633872334683e-15*fs - 4.9873150795398e-11) - 7.07403788181033e-8)) + fs*(fs*(-1.8097945191363e-16*fs - 1.09720931749876e-12) - 1.55628833399827e-9) + middle*(pow(fs,2)*middle*(fs*(1.54974096823272e-19*fs + 1.01634485603159e-15) + 1.50648710731033e-12) + fs*(fs*(fs*(-1.54974096823272e-19*fs - 1.15555981904208e-15) - 2.49478214493775e-12) - 1.52373579652701e-9)) + treble*(pow(fs,3)*middle*(2.02140126291224e-19*fs + 4.57537633072034e-16) + fs*(fs*(fs*(-2.02140126291224e-19*fs - 8.75182522103488e-16) - 1.08914279871338e-12) - 3.25525374712589e-10));
        b1 = bass*(pow(fs,3)*middle*(2.81771085133221e-17*fs + 9.2394986911963e-14) + pow(fs,3)*treble*(3.6752750234768e-17*fs + 4.15943302792758e-14) + fs*(1.64526774466937e-14*pow(fs,2) - 1.41480757636207e-7)) + fs*(3.61958903827261e-16*pow(fs,2) - 3.11257666799654e-9) + middle*(pow(fs,3)*middle*(-6.19896387293087e-19*fs - 2.03268971206319e-15) + fs*(pow(fs,2)*(6.19896387293087e-19*fs + 2.31111963808416e-15) - 3.04747159305403e-9)) + treble*(pow(fs,3)*middle*(-8.08560505164896e-19*fs - 9.15075266144067e-16) + fs*(pow(fs,2)*(8.08560505164896e-19*fs + 1.75036504420698e-15) - 6.51050749425178e-10));
        b2 = bass*(-5.5129125352152e-17*pow(fs,4)*treble + pow(fs,2)*middle*(-4.22656627699832e-17*pow(fs,2) + 1.36953373391848e-10) + 9.97463015907961e-11*pow(fs,2)) + 2.19441863499751e-12*pow(fs,2) + middle*(pow(fs,2)*middle*(9.2984458093963e-19*pow(fs,2) - 3.01297421462065e-12) + pow(fs,2)*(-9.2984458093963e-19*pow(fs,2) + 4.98956428987549e-12)) + treble*(1.21284075774734e-18*pow(fs,4)*middle + pow(fs,2)*(-1.21284075774734e-18*pow(fs,2) + 2.17828559742676e-12));
        b3 = bass*(pow(fs,3)*middle*(2.81771085133221e-17*fs - 9.2394986911963e-14) + pow(fs,3)*treble*(3.6752750234768e-17*fs - 4.15943302792758e-14) + fs*(-1.64526774466937e-14*pow(fs,2) + 1.41480757636207e-7)) + fs*(-3.61958903827261e-16*pow(fs,2) + 3.11257666799654e-9) + middle*(pow(fs,3)*middle*(-6.19896387293087e-19*fs + 2.03268971206319e-15) + fs*(pow(fs,2)*(6.19896387293087e-19*fs - 2.31111963808416e-15) + 3.04747159305403e-9)) + treble*(pow(fs,3)*middle*(-8.08560505164896e-19*fs + 9.15075266144067e-16) + fs*(pow(fs,2)*(8.08560505164896e-19*fs - 1.75036504420698e-15) + 6.51050749425178e-10));
        b4 = bass*(pow(fs,3)*treble*(-9.188187558692e-18*fs + 2.07971651396379e-14) + pow(fs,2)*middle*(fs*(-7.04427712833053e-18*fs + 4.61974934559815e-14) - 6.84766866959239e-11) + fs*(fs*(8.22633872334683e-15*fs - 4.9873150795398e-11) + 7.07403788181033e-8)) + fs*(fs*(1.8097945191363e-16*fs - 1.09720931749876e-12) + 1.55628833399827e-9) + middle*(pow(fs,2)*middle*(fs*(1.54974096823272e-19*fs - 1.01634485603159e-15) + 1.50648710731033e-12) + fs*(fs*(fs*(-1.54974096823272e-19*fs + 1.15555981904208e-15) - 2.49478214493775e-12) + 1.52373579652701e-9)) + treble*(pow(fs,3)*middle*(2.02140126291224e-19*fs - 4.57537633072034e-16) + fs*(fs*(fs*(-2.02140126291224e-19*fs + 8.75182522103488e-16) - 1.08914279871338e-12) + 3.25525374712589e-10));
    
        a0 = bass*(pow(fs,2)*middle*(fs*(1.66033922737963e-19*fs + 1.46468936918562e-15) + 3.22799705380621e-12) + fs*(fs*(fs*(2.19386941982751e-19*fs + 2.24638509167905e-15) + 6.40994887020324e-12) + 3.33470770021303e-9)) + fs*(fs*(fs*(4.82651272362052e-21*fs + 5.93926057434279e-17) + 2.37697888066948e-13) + 3.23054405974956e-10) + middle*(pow(fs,2)*middle*(fs*(-3.65274630023519e-21*fs - 3.22231661220837e-17) - 7.10159351837366e-14) + fs*(fs*(fs*(-1.17376642338534e-21*fs - 9.65030940676621e-18) - 3.76512801644073e-15) + 7.1829039915581e-11)) + 7.42035536317985e-8;
        a1 = bass*(pow(fs,3)*middle*(-6.64135690951852e-19*fs - 2.92937873837125e-15) + fs*(pow(fs,2)*(-8.77547767931004e-19*fs - 4.49277018335811e-15) + 6.66941540042605e-9)) + fs*(pow(fs,2)*(-1.93060508944821e-20*fs - 1.18785211486856e-16) + 6.46108811949911e-10) + middle*(pow(fs,3)*middle*(1.46109852009407e-20*fs + 6.44463322441675e-17) + fs*(pow(fs,2)*(4.69506569354134e-21*fs + 1.93006188135324e-17) + 1.43658079831162e-10)) + 2.96814214527194e-7;
        a2 = bass*(pow(fs,2)*middle*(9.96203536427778e-19*pow(fs,2) - 6.45599410761242e-12) + pow(fs,2)*(1.31632165189651e-18*pow(fs,2) - 1.28198977404065e-11)) + pow(fs,2)*(2.89590763417231e-20*pow(fs,2) - 4.75395776133895e-13) + middle*(pow(fs,2)*middle*(-2.19164778014111e-20*pow(fs,2) + 1.42031870367473e-13) + pow(fs,2)*(-7.04259854031202e-21*pow(fs,2) + 7.53025603288146e-15)) + 4.45221321790791e-7;
        a3 = bass*(pow(fs,3)*middle*(-6.64135690951852e-19*fs + 2.92937873837125e-15) + fs*(pow(fs,2)*(-8.77547767931004e-19*fs + 4.49277018335811e-15) - 6.66941540042605e-9)) + fs*(pow(fs,2)*(-1.93060508944821e-20*fs + 1.18785211486856e-16) - 6.46108811949911e-10) + middle*(pow(fs,3)*middle*(1.46109852009407e-20*fs - 6.44463322441675e-17) + fs*(pow(fs,2)*(4.69506569354134e-21*fs - 1.93006188135324e-17) - 1.43658079831162e-10)) + 2.96814214527194e-7;
        a4 = bass*(pow(fs,2)*middle*(fs*(1.66033922737963e-19*fs - 1.46468936918562e-15) + 3.22799705380621e-12) + fs*(fs*(fs*(2.19386941982751e-19*fs - 2.24638509167905e-15) + 6.40994887020324e-12) - 3.33470770021303e-9)) + fs*(fs*(fs*(4.82651272362052e-21*fs - 5.93926057434279e-17) + 2.37697888066948e-13) - 3.23054405974956e-10) + middle*(pow(fs,2)*middle*(fs*(-3.65274630023519e-21*fs + 3.22231661220837e-17) - 7.10159351837366e-14) + fs*(fs*(fs*(-1.17376642338534e-21*fs + 9.65030940676621e-18) - 3.76512801644073e-15) - 7.1829039915581e-11)) + 7.42035536317985e-8;
    };

s03_stage3clip =
    _<:
        ba.if(signbit(_), s03_stage3_neg_clip, s03_stage3_clip)
    :>_
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s03_stage3_clip = ffunction(float s03_stage3clip(float), "generated/stage/marshall_jcm800hi/s03_stage3_table.h", "");
        s03_stage3_neg_clip = ffunction(float s03_stage3_negclip(float), "generated/stage/marshall_jcm800hi/s03_stage3_neg_table.h", "");
    };

p4 = fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) :
    s05_stage4clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        master = ampctrl.master : LogPot(3.0) : si.smooth(0.999);
        presence = ampctrl.presence : si.smooth(0.999);
    
        b0 = master*(pow(fs,2)*presence*(fs*(9.12394327531584e-21*fs + 1.74558527699721e-15) + 8.64128766812471e-15) + fs*(fs*(2.07362347166269e-18*fs + 3.96723926590274e-13) + 1.96392901548289e-12));
        b1 = master*(pow(fs,3)*presence*(-3.64957731012633e-20*fs - 3.49117055399442e-15) + fs*(-4.14724694332538e-18*pow(fs,2) + 3.92785803096578e-12));
        b2 = master*(pow(fs,2)*presence*(5.4743659651895e-20*pow(fs,2) - 1.72825753362494e-14) - 7.93447853180549e-13*pow(fs,2));
        b3 = master*(pow(fs,3)*presence*(-3.64957731012633e-20*fs + 3.49117055399442e-15) + fs*(4.14724694332538e-18*pow(fs,2) - 3.92785803096578e-12));
        b4 = master*(pow(fs,2)*presence*(fs*(9.12394327531584e-21*fs - 1.74558527699721e-15) + 8.64128766812471e-15) + fs*(fs*(-2.07362347166269e-18*fs + 3.96723926590274e-13) - 1.96392901548289e-12));
    
        a0 = fs*presence*(fs*(fs*(5.1560102834067e-20*fs + 9.48192763255562e-15) + 1.23816215364688e-13) + 1.03383405136796e-13) + fs*(fs*(fs*(9.02577972632804e-21*fs + 1.65716792398355e-15) + 2.17938668748945e-12) + 2.81613125818046e-11) + master*(pow(fs,2)*presence*(fs*(2.32157187007022e-20*fs + 4.05857493481995e-15) + 4.54886982601903e-15) + fs*(fs*(fs*(4.91959463392667e-21*fs + 8.65022072411122e-16) + 9.23338994229777e-13) + 1.03383405136796e-12) + master*(pow(fs,2)*presence*(fs*(-2.32157187007022e-20*fs - 4.05857493481995e-15) - 4.54886982601903e-15) + fs*(fs*(fs*(-4.91959463392667e-21*fs - 8.65022072411122e-16) - 9.23338994229777e-13) - 1.03383405136796e-12))) + 2.34962284401809e-11;
        a1 = fs*presence*(pow(fs,2)*(-2.06240411336268e-19*fs - 1.89638552651112e-14) + 2.06766810273592e-13) + fs*(pow(fs,2)*(-3.61031189053122e-20*fs - 3.3143358479671e-15) + 5.63226251636091e-11) + master*(pow(fs,3)*presence*(-9.28628748028089e-20*fs - 8.11714986963989e-15) + fs*(pow(fs,2)*(-1.96783785357067e-20*fs - 1.73004414482224e-15) + 2.06766810273592e-12) + master*(pow(fs,3)*presence*(9.28628748028089e-20*fs + 8.11714986963989e-15) + fs*(pow(fs,2)*(1.96783785357067e-20*fs + 1.73004414482224e-15) - 2.06766810273592e-12))) + 9.39849137607238e-11;
        a2 = pow(fs,2)*presence*(3.09360617004402e-19*pow(fs,2) - 2.47632430729377e-13) + pow(fs,2)*(5.41546783579682e-20*pow(fs,2) - 4.3587733749789e-12) + master*(pow(fs,2)*presence*(1.39294312204213e-19*pow(fs,2) - 9.09773965203806e-15) + pow(fs,2)*(2.951756780356e-20*pow(fs,2) - 1.84667798845955e-12) + master*(pow(fs,2)*presence*(-1.39294312204213e-19*pow(fs,2) + 9.09773965203806e-15) + pow(fs,2)*(-2.951756780356e-20*pow(fs,2) + 1.84667798845955e-12))) + 1.40977370641086e-10;
        a3 = fs*presence*(pow(fs,2)*(-2.06240411336268e-19*fs + 1.89638552651112e-14) - 2.06766810273592e-13) + fs*(pow(fs,2)*(-3.61031189053122e-20*fs + 3.3143358479671e-15) - 5.63226251636091e-11) + master*(pow(fs,3)*presence*(-9.28628748028089e-20*fs + 8.11714986963989e-15) + fs*(pow(fs,2)*(-1.96783785357067e-20*fs + 1.73004414482224e-15) - 2.06766810273592e-12) + master*(pow(fs,3)*presence*(9.28628748028089e-20*fs - 8.11714986963989e-15) + fs*(pow(fs,2)*(1.96783785357067e-20*fs - 1.73004414482224e-15) + 2.06766810273592e-12))) + 9.39849137607238e-11;
        a4 = fs*presence*(fs*(fs*(5.1560102834067e-20*fs - 9.48192763255562e-15) + 1.23816215364688e-13) - 1.03383405136796e-13) + fs*(fs*(fs*(9.02577972632804e-21*fs - 1.65716792398355e-15) + 2.17938668748945e-12) - 2.81613125818046e-11) + master*(pow(fs,2)*presence*(fs*(2.32157187007022e-20*fs - 4.05857493481995e-15) + 4.54886982601903e-15) + fs*(fs*(fs*(4.91959463392667e-21*fs - 8.65022072411122e-16) + 9.23338994229777e-13) - 1.03383405136796e-12) + master*(pow(fs,2)*presence*(fs*(-2.32157187007022e-20*fs + 4.05857493481995e-15) - 4.54886982601903e-15) + fs*(fs*(fs*(-4.91959463392667e-21*fs + 8.65022072411122e-16) - 9.23338994229777e-13) + 1.03383405136796e-12))) + 2.34962284401809e-11;
    };

s05_stage4clip =
    _<:
        ba.if(signbit(_), s05_stage4_neg_clip, s05_stage4_clip)
    :>_
    
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s05_stage4_clip = ffunction(float s05_stage4clip(float), "generated/stage/marshall_jcm800hi/s05_stage4_table.h", "");
        s05_stage4_neg_clip = ffunction(float s05_stage4_negclip(float), "generated/stage/marshall_jcm800hi/s05_stage4_neg_table.h", "");
    };

process = 
    *(pregain) :
    *(0.5) :
    p1 : 
    *(28.0) :
    p2 :
    *(13.0) :
    p3 :
    *(70.0) :
    p4 :
    *(100.0) :
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

