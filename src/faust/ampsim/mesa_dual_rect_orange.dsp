/*
 * This is simulation of Mesa Dual Rectifier preamplifier (orange channel, less gain)
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

declare id "mesa_dual_rect_orange";
declare name "mesa_dual_rect_orange";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0,b5/a0),(a1/a0,a2/a0,a3/a0,a4/a0,a5/a0)) :
    s01_stage1clip
    
    with {
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
        fs = float(ma.SR);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(pow(fs,2)*gain*(fs*(4.75388127927614e-17*fs + 3.51837488502921e-14) + 6.1051452984792e-12) + fs*(fs*(fs*(-4.75388127927614e-17*fs - 5.89531552466728e-14) - 2.36970197236252e-11) - 3.0525726492396e-9));
        b1 = gain*(pow(fs,2)*gain*(fs*(-1.42616438378284e-16*fs - 3.51837488502921e-14) + 6.1051452984792e-12) + fs*(fs*(fs*(1.42616438378284e-16*fs + 5.89531552466728e-14) - 2.36970197236252e-11) - 9.1577179477188e-9));
        b2 = gain*(pow(fs,2)*gain*(fs*(9.50776255855229e-17*fs - 7.03674977005842e-14) - 1.22102905969584e-11) + fs*(fs*(fs*(-9.50776255855229e-17*fs + 1.17906310493346e-13) + 4.73940394472505e-11) - 6.1051452984792e-9));
        b3 = gain*(pow(fs,2)*gain*(fs*(9.50776255855229e-17*fs + 7.03674977005842e-14) - 1.22102905969584e-11) + fs*(fs*(fs*(-9.50776255855229e-17*fs - 1.17906310493346e-13) + 4.73940394472505e-11) + 6.1051452984792e-9));
        b4 = gain*(pow(fs,2)*gain*(fs*(-1.42616438378284e-16*fs + 3.51837488502921e-14) + 6.1051452984792e-12) + fs*(fs*(fs*(1.42616438378284e-16*fs - 5.89531552466728e-14) - 2.36970197236252e-11) + 9.1577179477188e-9));
        b5 = gain*(pow(fs,2)*gain*(fs*(4.75388127927614e-17*fs - 3.51837488502921e-14) + 6.1051452984792e-12) + fs*(fs*(fs*(-4.75388127927614e-17*fs + 5.89531552466728e-14) - 2.36970197236252e-11) + 3.0525726492396e-9));
    
        a0 = fs*(fs*(fs*(2.77018846582032e-20*fs + 5.54084203078628e-16) + 5.01340790630281e-13) + 1.1960884329196e-10) + gain*(pow(fs,2)*gain*(fs*(fs*(-1.99011961617702e-36*fs - 6.47844436758614e-19) - 5.88702348424581e-16) - 1.33698658429561e-13) + fs*(fs*(fs*(fs*(1.99011961617702e-36*fs + 6.20142552100412e-19) + 3.72391306054362e-16) + 3.48645631966802e-14) - 3.34246646073902e-12)) + 1.67123323036951e-9;
        a1 = fs*(fs*(fs*(-8.31056539746097e-20*fs - 5.54084203078628e-16) + 5.01340790630281e-13) + 3.5882652987588e-10) + gain*(pow(fs,2)*gain*(fs*(fs*(9.95059808088511e-36*fs + 1.94353331027584e-18) + 5.88702348424581e-16) - 1.33698658429561e-13) + fs*(fs*(fs*(fs*(-9.95059808088511e-36*fs - 1.86042765630124e-18) - 3.72391306054362e-16) + 3.48645631966802e-14) - 1.00273993822171e-11)) + 8.35616615184755e-9;
        a2 = fs*(fs*(fs*(5.54037693164065e-20*fs - 1.10816840615726e-15) - 1.00268158126056e-12) + 2.3921768658392e-10) + gain*(pow(fs,2)*gain*(fs*(fs*(-1.99011961617702e-35*fs - 1.29568887351723e-18) + 1.17740469684916e-15) + 2.67397316859122e-13) + fs*(fs*(fs*(fs*(1.99011961617702e-35*fs + 1.24028510420082e-18) - 7.44782612108724e-16) - 6.97291263933603e-14) - 6.68493292147804e-12)) + 1.67123323036951e-8;
        a3 = fs*(fs*(fs*(5.54037693164065e-20*fs + 1.10816840615726e-15) - 1.00268158126056e-12) - 2.3921768658392e-10) + gain*(pow(fs,2)*gain*(fs*(fs*(1.99011961617702e-35*fs - 1.29568887351723e-18) - 1.17740469684916e-15) + 2.67397316859122e-13) + fs*(fs*(fs*(fs*(-1.99011961617702e-35*fs + 1.24028510420082e-18) + 7.44782612108724e-16) - 6.97291263933603e-14) + 6.68493292147804e-12)) + 1.67123323036951e-8;
        a4 = fs*(fs*(fs*(-8.31056539746097e-20*fs + 5.54084203078628e-16) + 5.01340790630281e-13) - 3.5882652987588e-10) + gain*(pow(fs,2)*gain*(fs*(fs*(-9.95059808088511e-36*fs + 1.94353331027584e-18) - 5.88702348424581e-16) - 1.33698658429561e-13) + fs*(fs*(fs*(fs*(9.95059808088511e-36*fs - 1.86042765630124e-18) + 3.72391306054362e-16) + 3.48645631966802e-14) + 1.00273993822171e-11)) + 8.35616615184755e-9;
        a5 = fs*(fs*(fs*(2.77018846582032e-20*fs - 5.54084203078628e-16) + 5.01340790630281e-13) - 1.1960884329196e-10) + gain*(pow(fs,2)*gain*(fs*(fs*(1.99011961617702e-36*fs - 6.47844436758614e-19) + 5.88702348424581e-16) - 1.33698658429561e-13) + fs*(fs*(fs*(fs*(-1.99011961617702e-36*fs + 6.20142552100412e-19) - 3.72391306054362e-16) + 3.48645631966802e-14) + 3.34246646073902e-12)) + 1.67123323036951e-9;
    };

s01_stage1clip = 
    _<:
        ba.if(signbit(_), s01_stage1_neg_clip, s01_stage1_clip)
    :>_ 
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s01_stage1_clip = ffunction(float s01_stage1clip(float), "generated/stage/mesa_dual_rect_orange/s01_stage1_table.h", "");
        s01_stage1_neg_clip = ffunction(float s01_stage1_negclip(float), "generated/stage/mesa_dual_rect_orange/s01_stage1_neg_table.h", "");
    };

p2 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) :
    s02_stage2clip
    
    with {
        fs = float(ma.SR);
    
        b0 = -0.000655304158661071*fs - 0.18202893296141;
        b1 = -0.364057865922819;
        b2 = 0.000655304158661071*fs - 0.18202893296141;
    
        a0 = fs*(2.03405658623965e-10*fs + 1.09382323078101e-5) + 0.0063182117555006;
        a1 = -4.0681131724793e-10*pow(fs,2) + 0.0126364235110012;
        a2 = fs*(2.03405658623965e-10*fs - 1.09382323078101e-5) + 0.0063182117555006;
    };

s02_stage2clip = 
    _<:
        ba.if(signbit(_), s02_stage2_neg_clip, s02_stage2_clip)
    :>_ 
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s02_stage2_clip = ffunction(float s02_stage2clip(float), "generated/stage/mesa_dual_rect_orange/s02_stage2_table.h", "");
        s02_stage2_neg_clip = ffunction(float s02_stage2_negclip(float), "generated/stage/mesa_dual_rect_orange/s02_stage2_neg_table.h", "");
    };


p3 = 
    fi.iir((b0/a0,b1/a0),(a1/a0)) :
    s03_stage3clip
    
    with {
        fs = float(ma.SR);
    
        b0 = -0.146261721859089;
        b1 = -0.146261721859089;
    
        a0 = 1.88103770813187e-5*fs + 0.0971019000967005;
        a1 = -1.88103770813187e-5*fs + 0.0971019000967005;
    };

s03_stage3clip = 
    _<:
        ba.if(signbit(_), s03_stage3_neg_clip, s03_stage3_clip)
    :>_ 
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s03_stage3_clip = ffunction(float s03_stage3clip(float), "generated/stage/mesa_dual_rect_orange/s03_stage3_table.h", "");
        s03_stage3_neg_clip = ffunction(float s03_stage3_negclip(float), "generated/stage/mesa_dual_rect_orange/s03_stage3_neg_table.h", "");
    };

p4 = 
    fi.iir((b0/a0,b1/a0),(a1/a0)) : 
    s04_stage4clip
    
    with {
        fs = float(ma.SR);
    
        b0 = -0.00149525527902205*fs - 0.415348688617234;
        b1 = 0.00149525527902205*fs - 0.415348688617234;
    
        a0 = 2.06413022257424e-5*fs + 0.00921749316436716;
        a1 = -2.06413022257424e-5*fs + 0.00921749316436716;
    };

s04_stage4clip = 
    _<:
        ba.if(signbit(_), s04_stage4_neg_clip, s04_stage4_clip)
    :>_ 
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s04_stage4_clip = ffunction(float s04_stage4clip(float), "generated/stage/mesa_dual_rect_orange/s04_stage4_table.h", "");
        s04_stage4_neg_clip = ffunction(float s04_stage4_negclip(float), "generated/stage/mesa_dual_rect_orange/s04_stage4_neg_table.h", "");
    };

p5 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0),(a1/a0,a2/a0,a3/a0,a4/a0)) 
    
    with {
        fs = float(ma.SR);
    
        bass   = ampctrl.bass : si.smooth(0.999);
        middle = ampctrl.middle : si.smooth(0.999);
        treble = ampctrl.treble : si.smooth(0.999);
        master = ampctrl.master : si.smooth(0.999);
        
        b0 = bass*(pow(fs,2)*master*middle*(fs*(4.76406912084697e-20*fs + 4.1254512694203e-16) + 8.56336077593319e-13) + fs*master*(fs*(5.51797904906181e-17*fs + 4.51811269036553e-13) + 8.56336077593319e-10)) + fs*master*(fs*(1.37949476226545e-18*fs + 1.12952817259138e-14) + 2.1408401939833e-11) + middle*(pow(fs,2)*master*middle*(fs*(-1.19101728021174e-21*fs - 1.03136281735508e-17) - 2.1408401939833e-14) + fs*master*(fs*(fs*(1.19101728021174e-21*fs + 1.13161679717088e-17) + 3.06401225812049e-14) + 2.0886245794959e-11)) + treble*(bass*pow(fs,3)*master*(7.53909928214839e-20*fs + 3.92661420945228e-16) + pow(fs,3)*master*middle*(-1.8847748205371e-21*fs - 9.81653552363071e-18) + fs*master*(fs*(fs*(1.8847748205371e-21*fs + 1.35860851647049e-17) + 2.06356108454195e-14) + 5.22156144873975e-12));
        b1 = bass*(pow(fs,3)*master*middle*(-1.90562764833879e-19*fs - 8.2509025388406e-16) + fs*master*(-1.10359580981236e-16*pow(fs,2) + 1.71267215518664e-9)) + fs*master*(-2.7589895245309e-18*pow(fs,2) + 4.2816803879666e-11) + middle*(pow(fs,3)*master*middle*(4.76406912084697e-21*fs + 2.06272563471015e-17) + fs*master*(pow(fs,2)*(-4.76406912084697e-21*fs - 2.26323359434176e-17) + 4.1772491589918e-11)) + treble*(bass*pow(fs,3)*master*(-3.01563971285935e-19*fs - 7.85322841890457e-16) + pow(fs,3)*master*middle*(7.53909928214839e-21*fs + 1.96330710472614e-17) + fs*master*(pow(fs,2)*(-7.53909928214839e-21*fs - 2.71721703294098e-17) + 1.04431228974795e-11));
        b2 = bass*(pow(fs,2)*master*middle*(2.85844147250818e-19*pow(fs,2) - 1.71267215518664e-12) - 9.03622538073106e-13*pow(fs,2)*master) - 2.25905634518277e-14*pow(fs,2)*master + middle*(pow(fs,2)*master*middle*(-7.14610368127045e-21*pow(fs,2) + 4.2816803879666e-14) + pow(fs,2)*master*(7.14610368127045e-21*pow(fs,2) - 6.12802451624097e-14)) + treble*(4.52345956928903e-19*bass*pow(fs,4)*master - 1.13086489232226e-20*pow(fs,4)*master*middle + pow(fs,2)*master*(1.13086489232226e-20*pow(fs,2) - 4.12712216908389e-14));
        b3 = bass*(pow(fs,3)*master*middle*(-1.90562764833879e-19*fs + 8.2509025388406e-16) + fs*master*(1.10359580981236e-16*pow(fs,2) - 1.71267215518664e-9)) + fs*master*(2.7589895245309e-18*pow(fs,2) - 4.2816803879666e-11) + middle*(pow(fs,3)*master*middle*(4.76406912084697e-21*fs - 2.06272563471015e-17) + fs*master*(pow(fs,2)*(-4.76406912084697e-21*fs + 2.26323359434176e-17) - 4.1772491589918e-11)) + treble*(bass*pow(fs,3)*master*(-3.01563971285935e-19*fs + 7.85322841890457e-16) + pow(fs,3)*master*middle*(7.53909928214839e-21*fs - 1.96330710472614e-17) + fs*master*(pow(fs,2)*(-7.53909928214839e-21*fs + 2.71721703294098e-17) - 1.04431228974795e-11));
        b4 = bass*(pow(fs,2)*master*middle*(fs*(4.76406912084697e-20*fs - 4.1254512694203e-16) + 8.56336077593319e-13) + fs*master*(fs*(-5.51797904906181e-17*fs + 4.51811269036553e-13) - 8.56336077593319e-10)) + fs*master*(fs*(-1.37949476226545e-18*fs + 1.12952817259138e-14) - 2.1408401939833e-11) + middle*(pow(fs,2)*master*middle*(fs*(-1.19101728021174e-21*fs + 1.03136281735508e-17) - 2.1408401939833e-14) + fs*master*(fs*(fs*(1.19101728021174e-21*fs - 1.13161679717088e-17) + 3.06401225812049e-14) - 2.0886245794959e-11)) + treble*(bass*pow(fs,3)*master*(7.53909928214839e-20*fs - 3.92661420945228e-16) + pow(fs,3)*master*middle*(-1.8847748205371e-21*fs + 9.81653552363071e-18) + fs*master*(fs*(fs*(1.8847748205371e-21*fs - 1.35860851647049e-17) + 2.06356108454195e-14) - 5.22156144873975e-12));
    
        a0 = bass*(fs*middle*(fs*(fs*(1.08424679170791e-19*fs + 6.97829522805543e-16) + 1.03015141509897e-12) + 2.0886245794959e-11) + fs*(fs*(fs*(7.53909928214839e-20*fs + 8.70973158646425e-16) + 2.5606938360539e-12) + 1.06941755719349e-9) + 2.0886245794959e-8) + fs*(fs*(fs*(1.8847748205371e-21*fs + 2.55438786072348e-17) + 9.97311553110636e-14) + 1.14499443760255e-10) + middle*(fs*middle*(fs*(fs*(-2.71061697926978e-21*fs - 1.74457380701386e-17) - 2.57537853774742e-14) - 5.22156144873975e-13) + fs*(fs*(fs*(8.2584215873268e-22*fs + 1.09264306251751e-18) - 4.28063607567676e-15) + 2.1408401939833e-11)) + treble*(bass*(pow(fs,2)*middle*(fs*(2.62535096943644e-19*fs + 1.30334351009703e-15) + 2.0364089650085e-13) + fs*(fs*(fs*(6.07839879623214e-19*fs + 2.73127598271048e-15) + 1.68618839551863e-12) + 2.0364089650085e-10)) + fs*(fs*(fs*(1.51959969905803e-20*fs + 9.86738935489228e-17) + 1.76713930697073e-13) + 5.83613923125642e-11) + middle*(pow(fs,2)*middle*(fs*(-6.5633774235911e-21*fs - 3.25835877524258e-17) - 5.09102241252126e-15) + fs*(fs*(fs*(-8.63261956698924e-21*fs - 2.25715569681541e-17) + 2.8911785741672e-14) + 5.22156144873975e-12)) + treble*(bass*(pow(fs,3)*middle*(-3.23319084905965e-19*fs - 5.22156144873975e-17) + pow(fs,2)*(fs*(-6.07839879623214e-19*fs - 4.21484440142273e-16) - 5.22156144873975e-14)) + fs*(fs*(fs*(-1.51959969905803e-20*fs - 4.09291049847175e-17) - 1.42966352466494e-14) - 1.30539036218494e-12) + middle*(pow(fs,3)*middle*(8.08297712264914e-21*fs + 1.30539036218494e-18) + pow(fs,2)*(fs*(7.1130198679312e-21*fs - 6.93423360392639e-18) - 1.30539036218494e-15))) + 5.22156144873975e-9) + 2.1408401939833e-8;
        a1 = bass*(fs*middle*(pow(fs,2)*(-4.33698716683164e-19*fs - 1.39565904561109e-15) + 4.1772491589918e-11) + fs*(pow(fs,2)*(-3.01563971285935e-19*fs - 1.74194631729285e-15) + 2.13883511438698e-9) + 8.3544983179836e-8) + fs*(pow(fs,2)*(-7.53909928214839e-21*fs - 5.10877572144696e-17) + 2.2899888752051e-10) + middle*(fs*middle*(pow(fs,2)*(1.08424679170791e-20*fs + 3.48914761402771e-17) - 1.04431228974795e-12) + fs*(pow(fs,2)*(-3.30336863493072e-21*fs - 2.18528612503502e-18) + 4.2816803879666e-11)) + treble*(bass*(pow(fs,3)*middle*(-1.05014038777458e-18*fs - 2.60668702019406e-15) + fs*(pow(fs,2)*(-2.43135951849285e-18*fs - 5.46255196542097e-15) + 4.07281793001701e-10)) + fs*(pow(fs,2)*(-6.07839879623214e-20*fs - 1.97347787097846e-16) + 1.16722784625128e-10) + middle*(pow(fs,3)*middle*(2.62535096943644e-20*fs + 6.51671755048516e-17) + fs*(pow(fs,2)*(3.4530478267957e-20*fs + 4.51431139363082e-17) + 1.04431228974795e-11)) + treble*(bass*(pow(fs,3)*middle*(1.29327633962386e-18*fs + 1.04431228974795e-16) + pow(fs,3)*(2.43135951849285e-18*fs + 8.42968880284545e-16)) + fs*(pow(fs,2)*(6.07839879623214e-20*fs + 8.1858209969435e-17) - 2.61078072436988e-12) + middle*(pow(fs,3)*middle*(-3.23319084905965e-20*fs - 2.61078072436988e-18) + pow(fs,3)*(-2.84520794717248e-20*fs + 1.38684672078528e-17))) + 2.0886245794959e-8) + 8.56336077593319e-8;
        a2 = bass*(pow(fs,2)*middle*(6.50548075024746e-19*pow(fs,2) - 2.06030283019794e-12) + pow(fs,2)*(4.52345956928903e-19*pow(fs,2) - 5.12138767210779e-12) + 1.25317474769754e-7) + pow(fs,2)*(1.13086489232226e-20*pow(fs,2) - 1.99462310622127e-13) + middle*(pow(fs,2)*middle*(-1.62637018756187e-20*pow(fs,2) + 5.15075707549484e-14) + pow(fs,2)*(4.95505295239608e-21*pow(fs,2) + 8.56127215135352e-15)) + treble*(bass*(pow(fs,2)*middle*(1.57521058166186e-18*pow(fs,2) - 4.07281793001701e-13) + pow(fs,2)*(3.64703927773928e-18*pow(fs,2) - 3.37237679103726e-12)) + pow(fs,2)*(9.1175981943482e-20*pow(fs,2) - 3.53427861394146e-13) + middle*(pow(fs,2)*middle*(-3.93802645415466e-20*pow(fs,2) + 1.01820448250425e-14) + pow(fs,2)*(-5.17957174019354e-20*pow(fs,2) - 5.78235714833441e-14)) + treble*(bass*(-1.93991450943579e-18*pow(fs,4)*middle + pow(fs,2)*(-3.64703927773928e-18*pow(fs,2) + 1.04431228974795e-13)) + pow(fs,2)*(-9.1175981943482e-20*pow(fs,2) + 2.85932704932989e-14) + middle*(4.84978627358948e-20*pow(fs,4)*middle + pow(fs,2)*(4.26781192075872e-20*pow(fs,2) + 2.61078072436988e-15))) + 3.13293686924385e-8) + 1.28450411638998e-7;
        a3 = bass*(fs*middle*(pow(fs,2)*(-4.33698716683164e-19*fs + 1.39565904561109e-15) - 4.1772491589918e-11) + fs*(pow(fs,2)*(-3.01563971285935e-19*fs + 1.74194631729285e-15) - 2.13883511438698e-9) + 8.3544983179836e-8) + fs*(pow(fs,2)*(-7.53909928214839e-21*fs + 5.10877572144696e-17) - 2.2899888752051e-10) + middle*(fs*middle*(pow(fs,2)*(1.08424679170791e-20*fs - 3.48914761402771e-17) + 1.04431228974795e-12) + fs*(pow(fs,2)*(-3.30336863493072e-21*fs + 2.18528612503502e-18) - 4.2816803879666e-11)) + treble*(bass*(pow(fs,3)*middle*(-1.05014038777458e-18*fs + 2.60668702019406e-15) + fs*(pow(fs,2)*(-2.43135951849285e-18*fs + 5.46255196542097e-15) - 4.07281793001701e-10)) + fs*(pow(fs,2)*(-6.07839879623214e-20*fs + 1.97347787097846e-16) - 1.16722784625128e-10) + middle*(pow(fs,3)*middle*(2.62535096943644e-20*fs - 6.51671755048516e-17) + fs*(pow(fs,2)*(3.4530478267957e-20*fs - 4.51431139363082e-17) - 1.04431228974795e-11)) + treble*(bass*(pow(fs,3)*middle*(1.29327633962386e-18*fs - 1.04431228974795e-16) + pow(fs,3)*(2.43135951849285e-18*fs - 8.42968880284545e-16)) + fs*(pow(fs,2)*(6.07839879623214e-20*fs - 8.1858209969435e-17) + 2.61078072436988e-12) + middle*(pow(fs,3)*middle*(-3.23319084905965e-20*fs + 2.61078072436988e-18) + pow(fs,3)*(-2.84520794717248e-20*fs - 1.38684672078528e-17))) + 2.0886245794959e-8) + 8.56336077593319e-8;
        a4 = bass*(fs*middle*(fs*(fs*(1.08424679170791e-19*fs - 6.97829522805543e-16) + 1.03015141509897e-12) - 2.0886245794959e-11) + fs*(fs*(fs*(7.53909928214839e-20*fs - 8.70973158646425e-16) + 2.5606938360539e-12) - 1.06941755719349e-9) + 2.0886245794959e-8) + fs*(fs*(fs*(1.8847748205371e-21*fs - 2.55438786072348e-17) + 9.97311553110636e-14) - 1.14499443760255e-10) + middle*(fs*middle*(fs*(fs*(-2.71061697926978e-21*fs + 1.74457380701386e-17) - 2.57537853774742e-14) + 5.22156144873975e-13) + fs*(fs*(fs*(8.2584215873268e-22*fs - 1.09264306251751e-18) - 4.28063607567676e-15) - 2.1408401939833e-11)) + treble*(bass*(pow(fs,2)*middle*(fs*(2.62535096943644e-19*fs - 1.30334351009703e-15) + 2.0364089650085e-13) + fs*(fs*(fs*(6.07839879623214e-19*fs - 2.73127598271048e-15) + 1.68618839551863e-12) - 2.0364089650085e-10)) + fs*(fs*(fs*(1.51959969905803e-20*fs - 9.86738935489228e-17) + 1.76713930697073e-13) - 5.83613923125642e-11) + middle*(pow(fs,2)*middle*(fs*(-6.5633774235911e-21*fs + 3.25835877524258e-17) - 5.09102241252126e-15) + fs*(fs*(fs*(-8.63261956698924e-21*fs + 2.25715569681541e-17) + 2.8911785741672e-14) - 5.22156144873975e-12)) + treble*(bass*(pow(fs,3)*middle*(-3.23319084905965e-19*fs + 5.22156144873975e-17) + pow(fs,2)*(fs*(-6.07839879623214e-19*fs + 4.21484440142273e-16) - 5.22156144873975e-14)) + fs*(fs*(fs*(-1.51959969905803e-20*fs + 4.09291049847175e-17) - 1.42966352466494e-14) + 1.30539036218494e-12) + middle*(pow(fs,3)*middle*(8.08297712264914e-21*fs - 1.30539036218494e-18) + pow(fs,2)*(fs*(7.1130198679312e-21*fs + 6.93423360392639e-18) - 1.30539036218494e-15))) + 5.22156144873975e-9) + 2.1408401939833e-8;
    };

p6 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    s06_stage5clip 
    
    with {
        fs = float(ma.SR);
    
        b0 = 2.82461475968336e-10*pow(fs,2);
        b1 = -5.64922951936672e-10*pow(fs,2);
        b2 = 2.82461475968336e-10*pow(fs,2);
    
        a0 = fs*(4.33570405894608e-10*fs + 2.19519582346283e-8) + 9.08235621017275e-8;
        a1 = -8.67140811789215e-10*pow(fs,2) + 1.81647124203455e-7;
        a2 = fs*(4.33570405894608e-10*fs - 2.19519582346283e-8) + 9.08235621017275e-8;
    };

s06_stage5clip = 
    _<:
        ba.if(signbit(_), s06_stage5_neg_clip, s06_stage5_clip)
    :>_ 
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s06_stage5_clip = ffunction(float s06_stage5clip(float), "generated/stage/mesa_dual_rect_orange/s06_stage5_table.h", "");
        s06_stage5_neg_clip = ffunction(float s06_stage5_negclip(float), "generated/stage/mesa_dual_rect_orange/s06_stage5_neg_table.h", "");
    };

p7 = 
    fi.iir((b0/a0,b1/a0),(a1/a0)) : 
    s07_stage6clip 
    
    with {
        fs = float(ma.SR);
    
        b0 = -0.00119749787393626*fs - 0.123708458051269;
        b1 = 0.00119749787393626*fs - 0.123708458051269;
    
        a0 = 2.07375662139675e-5*fs + 0.00459682172955979;
        a1 = -2.07375662139675e-5*fs + 0.00459682172955979;
    };

s07_stage6clip = 
    _<:
        ba.if(signbit(_), s07_stage6_neg_clip, s07_stage6_clip)
    :>_ 
     
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        s07_stage6_clip = ffunction(float s07_stage6clip(float), "generated/stage/mesa_dual_rect_orange/s07_stage6_table.h", "");
        s07_stage6_neg_clip = ffunction(float s07_stage6_negclip(float), "generated/stage/mesa_dual_rect_orange/s07_stage6_neg_table.h", "");
    };


process =  
    *(pregain) :
    *(0.4) :
    p1 : 
    *(1.4) :
    p2 : 
    *(2.0) :
    p3 : 
    *(2.0) :
    p4 : 
    p5 : 
    *(1.2) :
    p6 : 
    *(1.2) :
    p7 :
    *(0.03) :
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

