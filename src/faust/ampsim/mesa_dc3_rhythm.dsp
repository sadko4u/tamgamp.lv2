/*
 * This is simulation of Mesa/Boogie DC3 preamplifier (rhythm channel)
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

declare id "mesa_dc3_rhythm";
declare name "mesa_dc3_rhythm";
declare samplerate "96000";

import("stdfaust.lib");
import("amp_sim.lib");

p1 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) :
    c01_stage1clip 
    
    with {
        fs = float(ma.SR);
    
        b0 = fs*(-6.65791056489004e-9*fs - 1.30019802277314e-5) - 0.00124540040495512;
        b1 = 1.33158211297801e-8*pow(fs,2) - 0.00249080080991024;
        b2 = fs*(-6.65791056489004e-9*fs + 1.30019802277314e-5) - 0.00124540040495512;
        a0 = fs*(4.21532937697353e-10*fs + 5.9768182392539e-7) + 9.93839968788513e-5;
        a1 = -8.43065875394707e-10*pow(fs,2) + 0.000198767993757703;
        a2 = fs*(4.21532937697353e-10*fs - 5.9768182392539e-7) + 9.93839968788513e-5;
    };

c01_stage1clip = 
    _<: 
        ba.if(signbit(_), c01_stage1_neg_clip, c01_stage1_clip) 
    :>_
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        c01_stage1_clip = ffunction(float c01_stage1clip(float), "generated/stage/mesa_dc3_rhythm/c01_stage1_table.h", "");
        c01_stage1_neg_clip = ffunction(float c01_stage1_negclip(float), "generated/stage/mesa_dc3_rhythm/c01_stage1_neg_table.h", "");
    };

p2 =
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0))
    
    with {
        fs = float(ma.SR);
    
        bass   = ampctrl.bass : si.smooth(0.999);
        middle = ampctrl.middle : si.smooth(0.999);
        treble = ampctrl.treble : si.smooth(0.999);
    
        b0 = bass*(1.36964577800476e-14*pow(fs,3)*treble + fs*(1.82813713064181e-12*fs + 7.79046747489232e-9)) + fs*treble*(8.56757146241275e-13*fs + 1.94275996880108e-11) + middle*(bass*pow(fs,2)*(3.65238874134603e-15*fs + 1.8307598565997e-11) + fs*(2.28468572331007e-13*fs + 1.14428562162383e-9));
        b1 = bass*(-4.10893733401428e-14*pow(fs,3)*treble + fs*(-1.82813713064181e-12*fs + 7.79046747489232e-9)) + fs*treble*(-8.56757146241275e-13*fs + 1.94275996880108e-11) + middle*(bass*pow(fs,2)*(-1.09571662240381e-14*fs - 1.8307598565997e-11) + fs*(-2.28468572331007e-13*fs + 1.14428562162383e-9));
        b2 = bass*(4.10893733401428e-14*pow(fs,3)*treble + fs*(-1.82813713064181e-12*fs - 7.79046747489232e-9)) + fs*treble*(-8.56757146241275e-13*fs - 1.94275996880108e-11) + middle*(bass*pow(fs,2)*(1.09571662240381e-14*fs - 1.8307598565997e-11) + fs*(-2.28468572331007e-13*fs - 1.14428562162383e-9));
        b3 = bass*(-1.36964577800476e-14*pow(fs,3)*treble + fs*(1.82813713064181e-12*fs - 7.79046747489232e-9)) + fs*treble*(8.56757146241275e-13*fs - 1.94275996880108e-11) + middle*(bass*pow(fs,2)*(-3.65238874134603e-15*fs + 1.8307598565997e-11) + fs*(2.28468572331007e-13*fs - 1.14428562162383e-9));
        a0 = bass*fs*(fs*(1.36964577800476e-14*fs + 1.11399799371023e-10) + 7.79046747489232e-9) + fs*(8.56757146241275e-13*fs + 6.87348476961821e-9) + middle*(bass*pow(fs,2)*(3.65238874134603e-15*fs + 1.8307598565997e-11) + fs*(2.28468572331007e-13*fs + 1.14428562162383e-9)) + 1.55420797504086e-7;
        a1 = bass*fs*(fs*(-4.10893733401428e-14*fs - 1.11399799371023e-10) + 7.79046747489232e-9) + fs*(-8.56757146241275e-13*fs + 6.87348476961821e-9) + middle*(bass*pow(fs,2)*(-1.09571662240381e-14*fs - 1.8307598565997e-11) + fs*(-2.28468572331007e-13*fs + 1.14428562162383e-9)) + 4.66262392512259e-7;
        a2 = bass*fs*(fs*(4.10893733401428e-14*fs - 1.11399799371023e-10) - 7.79046747489232e-9) + fs*(-8.56757146241275e-13*fs - 6.87348476961821e-9) + middle*(bass*pow(fs,2)*(1.09571662240381e-14*fs - 1.8307598565997e-11) + fs*(-2.28468572331007e-13*fs - 1.14428562162383e-9)) + 4.66262392512259e-7;
        a3 = bass*fs*(fs*(-1.36964577800476e-14*fs + 1.11399799371023e-10) - 7.79046747489232e-9) + fs*(8.56757146241275e-13*fs - 6.87348476961821e-9) + middle*(bass*pow(fs,2)*(-3.65238874134603e-15*fs + 1.8307598565997e-11) + fs*(2.28468572331007e-13*fs - 1.14428562162383e-9)) + 1.55420797504086e-7;
    };

p3 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) :
    c03_stage2clip
    
    with {
        fs = float(ma.SR);
        LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    
        gain = ampctrl.gain : LogPot(3.0) : si.smooth(0.999);
    
        b0 = gain*(gain*fs*(fs*(5.65465860286515e-13*fs + 5.72373344015806e-10) + 1.21527156734691e-7) + fs*(fs*(-5.65465860286515e-13*fs - 2.92848109520962e-9) - 2.50641609013388e-6) - 0.000506363153061214);
        b1 = gain*(gain*fs*(fs*(-1.69639758085955e-12*fs - 5.72373344015806e-10) + 1.21527156734691e-7) + fs*(fs*(1.69639758085955e-12*fs + 2.92848109520962e-9) - 2.50641609013388e-6) - 0.00151908945918364);
        b2 = gain*(gain*fs*(fs*(1.69639758085955e-12*fs - 5.72373344015806e-10) - 1.21527156734691e-7) + fs*(fs*(-1.69639758085955e-12*fs + 2.92848109520962e-9) + 2.50641609013388e-6) - 0.00151908945918364);
        b3 = gain*(gain*fs*(fs*(-5.65465860286515e-13*fs + 5.72373344015806e-10) - 1.21527156734691e-7) + fs*(fs*(5.65465860286515e-13*fs - 2.92848109520962e-9) + 2.50641609013388e-6) - 0.000506363153061214);
    
        a0 = gain*(gain*fs*(fs*(-2.92202561207851e-14*fs - 1.68076623635913e-10) - 9.76391727987263e-8) + fs*(fs*(2.92202561207851e-14*fs + 1.68076623635913e-10) + 9.76391727987263e-8)) + fs*(3.94868325956556e-11*fs + 6.54318313030122e-8) + 1.61632817279244e-5;
        a1 = gain*(gain*fs*(fs*(8.76607683623553e-14*fs + 1.68076623635913e-10) - 9.76391727987263e-8) + fs*(fs*(-8.76607683623553e-14*fs - 1.68076623635913e-10) + 9.76391727987263e-8)) + fs*(-3.94868325956556e-11*fs + 6.54318313030122e-8) + 4.84898451837732e-5;
        a2 = gain*(gain*fs*(fs*(-8.76607683623553e-14*fs + 1.68076623635913e-10) + 9.76391727987263e-8) + fs*(fs*(8.76607683623553e-14*fs - 1.68076623635913e-10) - 9.76391727987263e-8)) + fs*(-3.94868325956556e-11*fs - 6.54318313030122e-8) + 4.84898451837732e-5;
        a3 = gain*(gain*fs*(fs*(2.92202561207851e-14*fs - 1.68076623635913e-10) + 9.76391727987263e-8) + fs*(fs*(-2.92202561207851e-14*fs + 1.68076623635913e-10) - 9.76391727987263e-8)) + fs*(3.94868325956556e-11*fs - 6.54318313030122e-8) + 1.61632817279244e-5;
    };

c03_stage2clip = 
    _<: 
        ba.if(signbit(_), c03_stage2_neg_clip, c03_stage2_clip) 
    :>_
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        c03_stage2_clip = ffunction(float c03_stage2clip(float), "generated/stage/mesa_dc3_rhythm/c03_stage2_table.h", "");
        c03_stage2_neg_clip = ffunction(float c03_stage2_negclip(float), "generated/stage/mesa_dc3_rhythm/c03_stage2_neg_table.h", "");
    };

p4 = 
    fi.iir((b0/a0,b1/a0,b2/a0,b3/a0),(a1/a0,a2/a0,a3/a0)) : 
    c04_stage3clip
    
    with {
        fs = float(ma.SR);
    
        master = ampctrl.master : si.smooth(0.999);
    
        b0 = fs*master*(-2.85655611199869e-10*fs - 6.34790247110823e-9);
        b1 = fs*master*(2.85655611199869e-10*fs - 6.34790247110823e-9);
        b2 = fs*master*(2.85655611199869e-10*fs + 6.34790247110823e-9);
        b3 = fs*master*(-2.85655611199869e-10*fs + 6.34790247110823e-9);
    
        a0 = fs*(fs*(3.64313785972838e-15*fs + 2.5884168432943e-10) + 1.51395602310821e-8) + 1.58230819183179e-7;
        a1 = fs*(fs*(-1.09294135791852e-14*fs - 2.5884168432943e-10) + 1.51395602310821e-8) + 4.74692457549537e-7;
        a2 = fs*(fs*(1.09294135791852e-14*fs - 2.5884168432943e-10) - 1.51395602310821e-8) + 4.74692457549537e-7;
        a3 = fs*(fs*(-3.64313785972838e-15*fs + 2.5884168432943e-10) - 1.51395602310821e-8) + 1.58230819183179e-7;
    };

c04_stage3clip = 
    _<: 
        ba.if(signbit(_), c04_stage3_neg_clip, c04_stage3_clip) 
    :>_
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        c04_stage3_clip = ffunction(float c04_stage3clip(float), "generated/stage/mesa_dc3_rhythm/c04_stage3_table.h", "");
        c04_stage3_neg_clip = ffunction(float c04_stage3_negclip(float), "generated/stage/mesa_dc3_rhythm/c04_stage3_neg_table.h", "");
    };

p5 = 
    fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) : 
    c05_stage4clip
    
    with {
        fs = float(ma.SR);
    
        b0 = (fs*(4.43030830836957e-10*fs + 1.4767694361232e-7) + fs*(-1.41769865867826e-9*fs - 4.72566219559423e-7));
        b1 = (-8.86061661673914e-10*pow(fs,2) + 2.83539731735652e-9*pow(fs,2));
        b2 = (fs*(4.43030830836957e-10*fs - 1.4767694361232e-7) + fs*(-1.41769865867826e-9*fs + 4.72566219559423e-7));
    
        a0 = fs*(4.60626343739698e-10*fs + 3.15389151463859e-7) + (fs*(-3.19269256529294e-11*fs - 4.23302139386303e-8) + (fs*(-6.63815151204305e-11*fs - 3.33208271963413e-8) + 1.63701979461576e-20) - 3.54476885067473e-6) + 1.1343260322159e-5;
        a1 = -9.21252687479396e-10*pow(fs,2) + (6.38538513058588e-11*pow(fs,2) + (1.32763030240861e-10*pow(fs,2) + 3.27403958923153e-20) - 7.08953770134946e-6) + 2.26865206443179e-5;
        a2 = fs*(4.60626343739698e-10*fs - 3.15389151463859e-7) + (fs*(-3.19269256529294e-11*fs + 4.23302139386303e-8) + (fs*(-6.63815151204305e-11*fs + 3.33208271963413e-8) + 1.63701979461576e-20) - 3.54476885067473e-6) + 1.1343260322159e-5;
    };

c05_stage4clip = 
    _<: 
        ba.if(signbit(_), c05_stage4_neg_clip, c05_stage4_clip) 
    :>_
    with {
        signbit = ffunction(int signbit(float), "math.h", "");
        c05_stage4_clip = ffunction(float c05_stage4clip(float), "generated/stage/mesa_dc3_rhythm/c05_stage4_table.h", "");
        c05_stage4_neg_clip = ffunction(float c05_stage4_negclip(float), "generated/stage/mesa_dc3_rhythm/c05_stage4_neg_table.h", "");
    };

process =
    *(pregain) :
//    *(0.05) :
    *(0.05) :
    p1 :
    p2 :
//    *(7.5) :
    *(7.65) :
    p3 :
//    *(8.4) :
    *(8.1) :
    p4 :
//    *(8.4) :
    *(5.27) :
    p5 : 
//    *(0.5) :
    *(1.86) :
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

