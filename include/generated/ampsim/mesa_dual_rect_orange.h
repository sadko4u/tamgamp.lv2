namespace ampsim_mesa_dual_rect_orange {

#include <generated/stage/mesa_dual_rect_orange/s01_stage1_neg_table.h>
#include <generated/stage/mesa_dual_rect_orange/s01_stage1_table.h>
#include <generated/stage/mesa_dual_rect_orange/s02_stage2_neg_table.h>
#include <generated/stage/mesa_dual_rect_orange/s02_stage2_table.h>
#include <generated/stage/mesa_dual_rect_orange/s03_stage3_neg_table.h>
#include <generated/stage/mesa_dual_rect_orange/s03_stage3_table.h>
#include <generated/stage/mesa_dual_rect_orange/s04_stage4_neg_table.h>
#include <generated/stage/mesa_dual_rect_orange/s04_stage4_table.h>
#include <generated/stage/mesa_dual_rect_orange/s06_stage5_neg_table.h>
#include <generated/stage/mesa_dual_rect_orange/s06_stage5_table.h>
#include <generated/stage/mesa_dual_rect_orange/s07_stage6_neg_table.h>
#include <generated/stage/mesa_dual_rect_orange/s07_stage6_table.h>
/* ------------------------------------------------------------
name: "mesa_dual_rect_orange"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */



/* link with : "" */

static double module_faustpower2_f(double value) {
	return (value * value);
	
}
static double module_faustpower4_f(double value) {
	return (((value * value) * value) * value);
	
}


class module : public dsp {
	
 private:
	
	FAUSTFLOAT fVslider0;
	double fRec0[2];
	int fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	FAUSTFLOAT fVslider1;
	double fRec3[2];
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	FAUSTFLOAT fVslider2;
	double fRec8[2];
	FAUSTFLOAT fVslider3;
	double fRec10[2];
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fRec9[6];
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fRec7[3];
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fRec6[2];
	double fConst68;
	double fRec5[2];
	double fConst69;
	FAUSTFLOAT fVslider4;
	double fRec11[2];
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	FAUSTFLOAT fVslider5;
	double fRec12[2];
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	FAUSTFLOAT fVslider6;
	double fRec13[2];
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fConst114;
	double fConst115;
	double fConst116;
	double fConst117;
	double fConst118;
	double fConst119;
	double fConst120;
	double fConst121;
	double fConst122;
	double fConst123;
	double fConst124;
	double fConst125;
	double fConst126;
	double fConst127;
	double fConst128;
	double fConst129;
	double fConst130;
	double fConst131;
	double fConst132;
	double fConst133;
	double fConst134;
	double fConst135;
	double fConst136;
	double fConst137;
	double fConst138;
	double fConst139;
	double fConst140;
	double fConst141;
	double fConst142;
	double fConst143;
	double fConst144;
	double fConst145;
	double fConst146;
	double fConst147;
	double fConst148;
	double fConst149;
	double fConst150;
	double fConst151;
	double fConst152;
	double fConst153;
	double fConst154;
	double fConst155;
	double fConst156;
	double fConst157;
	double fConst158;
	double fConst159;
	double fConst160;
	double fConst161;
	double fConst162;
	double fConst163;
	double fConst164;
	double fConst165;
	double fConst166;
	double fConst167;
	double fConst168;
	double fConst169;
	double fConst170;
	double fConst171;
	double fConst172;
	double fConst173;
	double fRec4[5];
	double fConst174;
	double fConst175;
	double fConst176;
	double fConst177;
	double fConst178;
	double fConst179;
	double fConst180;
	double fConst181;
	double fConst182;
	double fConst183;
	double fConst184;
	double fConst185;
	double fConst186;
	double fConst187;
	double fConst188;
	double fConst189;
	double fConst190;
	double fConst191;
	double fConst192;
	double fConst193;
	double fConst194;
	double fConst195;
	double fConst196;
	double fConst197;
	double fConst198;
	double fConst199;
	double fConst200;
	double fConst201;
	double fConst202;
	double fConst203;
	double fConst204;
	double fConst205;
	double fConst206;
	double fConst207;
	double fConst208;
	double fConst209;
	double fConst210;
	double fConst211;
	double fConst212;
	double fConst213;
	double fConst214;
	double fConst215;
	double fConst216;
	double fConst217;
	double fConst218;
	double fConst219;
	double fConst220;
	double fRec2[3];
	double fConst221;
	double fConst222;
	double fRec1[2];
	double fConst223;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "mesa_dual_rect_orange");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "mesa_dual_rect_orange");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "mesa_dual_rect_orange");
		m->declare("samplerate", "96000");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "0.0");
	}

	virtual int getNumInputs() {
		return 1;
		
	}
	virtual int getNumOutputs() {
		return 1;
		
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	static void classInit(int samplingFreq) {
		
	}
	
	virtual void instanceConstants(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
		fConst1 = (2.0737566213967498e-05 * fConst0);
		fConst2 = (fConst1 + 0.0045968217295597903);
		fConst3 = (1.0 / fConst2);
		fConst4 = (0.00119749787393626 * fConst0);
		fConst5 = (-0.123708458051269 - fConst4);
		fConst6 = (4.3357040589460801e-10 * fConst0);
		fConst7 = (1.0 / (((fConst6 + 2.1951958234628299e-08) * fConst0) + 9.0823562101727498e-08));
		fConst8 = module_faustpower2_f(fConst0);
		fConst9 = (0.0 - (5.6492295193667203e-10 * fConst8));
		fConst10 = (1.2 * fConst0);
		fConst11 = (2.0641302225742399e-05 * fConst0);
		fConst12 = (fConst11 + 0.0092174931643671607);
		fConst13 = (1.0 / fConst12);
		fConst14 = (0.0014952552790220501 * fConst0);
		fConst15 = (-0.41534868861723401 - fConst14);
		fConst16 = (1.8810377081318699e-05 * fConst0);
		fConst17 = (fConst16 + 0.0971019000967005);
		fConst18 = (0.0 - (0.14626172185908901 / fConst17));
		fConst19 = (2.0340565862396499e-10 * fConst0);
		fConst20 = (((fConst19 + 1.09382323078101e-05) * fConst0) + 0.0063182117555006002);
		fConst21 = (0.0 - (0.36405786592281902 / fConst20));
		fConst22 = (8.3105653974609703e-20 * fConst0);
		fConst23 = (((((-5.5408420307862795e-16 - fConst22) * fConst0) + 5.0134079063028096e-13) * fConst0) + 3.5882652987587999e-10);
		fConst24 = (9.9505980808851097e-36 * fConst0);
		fConst25 = (((((((-1.8604276563012399e-18 - fConst24) * fConst0) + -3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + -1.0027399382217099e-11);
		fConst26 = ((((((fConst24 + 1.9435333102758399e-18) * fConst0) + 5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst27 = (5.5403769316406501e-20 * fConst0);
		fConst28 = (((((fConst27 + -1.10816840615726e-15) * fConst0) + -1.0026815812605599e-12) * fConst0) + 2.3921768658391998e-10);
		fConst29 = (1.9901196161770201e-35 * fConst0);
		fConst30 = (((((((fConst29 + 1.24028510420082e-18) * fConst0) + -7.4478261210872397e-16) * fConst0) + -6.9729126393360305e-14) * fConst0) + -6.6849329214780402e-12);
		fConst31 = ((((((-1.29568887351723e-18 - fConst29) * fConst0) + 1.1774046968491601e-15) * fConst0) + 2.6739731685912199e-13) * fConst0);
		fConst32 = (((((fConst27 + 1.10816840615726e-15) * fConst0) + -1.0026815812605599e-12) * fConst0) + -2.3921768658391998e-10);
		fConst33 = (((((((1.24028510420082e-18 - fConst29) * fConst0) + 7.4478261210872397e-16) * fConst0) + -6.9729126393360305e-14) * fConst0) + 6.6849329214780402e-12);
		fConst34 = ((((((fConst29 + -1.29568887351723e-18) * fConst0) + -1.1774046968491601e-15) * fConst0) + 2.6739731685912199e-13) * fConst0);
		fConst35 = (((((5.5408420307862795e-16 - fConst22) * fConst0) + 5.0134079063028096e-13) * fConst0) + -3.5882652987587999e-10);
		fConst36 = (((((((fConst24 + -1.8604276563012399e-18) * fConst0) + 3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + 1.0027399382217099e-11);
		fConst37 = ((((((1.9435333102758399e-18 - fConst24) * fConst0) + -5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst38 = (2.7701884658203202e-20 * fConst0);
		fConst39 = (((((fConst38 + -5.5408420307862795e-16) * fConst0) + 5.0134079063028096e-13) * fConst0) + -1.1960884329195999e-10);
		fConst40 = (1.9901196161770201e-36 * fConst0);
		fConst41 = (((((((6.2014255210041202e-19 - fConst40) * fConst0) + -3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + 3.3424664607390201e-12);
		fConst42 = ((((((fConst40 + -6.4784443675861404e-19) * fConst0) + 5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst43 = (((((fConst38 + 5.5408420307862795e-16) * fConst0) + 5.0134079063028096e-13) * fConst0) + 1.1960884329195999e-10);
		fConst44 = (((((((fConst40 + 6.2014255210041202e-19) * fConst0) + 3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + -3.3424664607390201e-12);
		fConst45 = ((((((-6.4784443675861404e-19 - fConst40) * fConst0) + -5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst46 = (4.7538812792761402e-17 * fConst0);
		fConst47 = (((((-5.8953155246672801e-14 - fConst46) * fConst0) + -2.3697019723625201e-11) * fConst0) + -3.0525726492396001e-09);
		fConst48 = ((((fConst46 + 3.5183748850292099e-14) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst49 = (1.42616438378284e-16 * fConst0);
		fConst50 = (((((fConst49 + 5.8953155246672801e-14) * fConst0) + -2.3697019723625201e-11) * fConst0) + -9.1577179477187999e-09);
		fConst51 = ((((-3.5183748850292099e-14 - fConst49) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst52 = (9.5077625585522903e-17 * fConst0);
		fConst53 = (((((1.1790631049334601e-13 - fConst52) * fConst0) + 4.7394039447250498e-11) * fConst0) + -6.1051452984792002e-09);
		fConst54 = ((((fConst52 + -7.0367497700584199e-14) * fConst0) + -1.2210290596958401e-11) * fConst0);
		fConst55 = (((((-1.1790631049334601e-13 - fConst52) * fConst0) + 4.7394039447250498e-11) * fConst0) + 6.1051452984792002e-09);
		fConst56 = ((((fConst52 + 7.0367497700584199e-14) * fConst0) + -1.2210290596958401e-11) * fConst0);
		fConst57 = (((((fConst49 + -5.8953155246672801e-14) * fConst0) + -2.3697019723625201e-11) * fConst0) + 9.1577179477187999e-09);
		fConst58 = ((((3.5183748850292099e-14 - fConst49) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst59 = (((((5.8953155246672801e-14 - fConst46) * fConst0) + -2.3697019723625201e-11) * fConst0) + 3.0525726492396001e-09);
		fConst60 = ((((fConst46 + -3.5183748850292099e-14) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst61 = (1.0 / fConst20);
		fConst62 = (0.0126364235110012 - (4.0681131724792999e-10 * fConst8));
		fConst63 = (((fConst19 + -1.09382323078101e-05) * fConst0) + 0.0063182117555006002);
		fConst64 = (0.00065530415866107104 * fConst0);
		fConst65 = (-0.18202893296141001 - fConst64);
		fConst66 = (fConst64 + -0.18202893296141001);
		fConst67 = ((0.0971019000967005 - fConst16) / fConst17);
		fConst68 = ((0.0092174931643671607 - fConst11) / fConst12);
		fConst69 = (fConst14 + -0.41534868861723401);
		fConst70 = (3.01563971285935e-19 * fConst0);
		fConst71 = (((-1.74194631729285e-15 - fConst70) * fConst8) + 2.13883511438698e-09);
		fConst72 = (4.3369871668316397e-19 * fConst0);
		fConst73 = (((-1.39565904561109e-15 - fConst72) * fConst8) + 4.1772491589917998e-11);
		fConst74 = (7.5390992821483897e-21 * fConst0);
		fConst75 = (((-5.10877572144696e-17 - fConst74) * fConst8) + 2.2899888752051001e-10);
		fConst76 = (3.3033686349307201e-21 * fConst0);
		fConst77 = (((-2.1852861250350198e-18 - fConst76) * fConst8) + 4.2816803879666001e-11);
		fConst78 = (1.08424679170791e-20 * fConst0);
		fConst79 = (((fConst78 + 3.48914761402771e-17) * fConst8) + -1.0443122897479501e-12);
		fConst80 = (6.0783987962321401e-20 * fConst0);
		fConst81 = (((-1.97347787097846e-16 - fConst80) * fConst8) + 1.1672278462512801e-10);
		fConst82 = (2.43135951849285e-18 * fConst0);
		fConst83 = (((-5.4625519654209701e-15 - fConst82) * fConst8) + 4.07281793001701e-10);
		fConst84 = (1.0501403877745799e-18 * fConst0);
		fConst85 = ((-2.6066870201940601e-15 - fConst84) * fConst8);
		fConst86 = (3.4530478267957003e-20 * fConst0);
		fConst87 = (((fConst86 + 4.51431139363082e-17) * fConst8) + 1.04431228974795e-11);
		fConst88 = (2.6253509694364401e-20 * fConst0);
		fConst89 = ((fConst88 + 6.5167175504851601e-17) * fConst8);
		fConst90 = (((fConst80 + 8.1858209969434995e-17) * fConst8) + -2.6107807243698801e-12);
		fConst91 = (fConst82 + 8.4296888028454496e-16);
		fConst92 = (1.29327633962386e-18 * fConst0);
		fConst93 = (fConst92 + 1.04431228974795e-16);
		fConst94 = (2.84520794717248e-20 * fConst0);
		fConst95 = (1.38684672078528e-17 - fConst94);
		fConst96 = (3.2331908490596498e-20 * fConst0);
		fConst97 = (-2.6107807243698801e-18 - fConst96);
		fConst98 = ((4.52345956928903e-19 * fConst8) + -5.1213876721077902e-12);
		fConst99 = ((6.50548075024746e-19 * fConst8) + -2.06030283019794e-12);
		fConst100 = (1.13086489232226e-20 * fConst8);
		fConst101 = (fConst100 + -1.99462310622127e-13);
		fConst102 = ((4.9550529523960803e-21 * fConst8) + 8.5612721513535196e-15);
		fConst103 = (5.1507570754948401e-14 - (1.6263701875618699e-20 * fConst8));
		fConst104 = (9.1175981943481999e-20 * fConst8);
		fConst105 = (fConst104 + -3.5342786139414602e-13);
		fConst106 = (3.6470392777392803e-18 * fConst8);
		fConst107 = (fConst106 + -3.3723767910372602e-12);
		fConst108 = ((1.57521058166186e-18 * fConst8) + -4.0728179300170102e-13);
		fConst109 = (-5.7823571483344096e-14 - (5.1795717401935399e-20 * fConst8));
		fConst110 = (1.01820448250425e-14 - (3.93802645415466e-20 * fConst8));
		fConst111 = ((1.04431228974795e-13 - fConst106) * fConst8);
		fConst112 = (0.0 - (1.9399145094357901e-18 * module_faustpower4_f(fConst0)));
		fConst113 = (2.85932704932989e-14 - fConst104);
		fConst114 = ((4.26781192075872e-20 * fConst8) + 2.6107807243698801e-15);
		fConst115 = (4.8497862735894799e-20 * fConst8);
		fConst116 = (((1.74194631729285e-15 - fConst70) * fConst8) + -2.13883511438698e-09);
		fConst117 = (((1.39565904561109e-15 - fConst72) * fConst8) + -4.1772491589917998e-11);
		fConst118 = (((5.10877572144696e-17 - fConst74) * fConst8) + -2.2899888752051001e-10);
		fConst119 = (((2.1852861250350198e-18 - fConst76) * fConst8) + -4.2816803879666001e-11);
		fConst120 = (((fConst78 + -3.48914761402771e-17) * fConst8) + 1.0443122897479501e-12);
		fConst121 = (((1.97347787097846e-16 - fConst80) * fConst8) + -1.1672278462512801e-10);
		fConst122 = (((5.4625519654209701e-15 - fConst82) * fConst8) + -4.07281793001701e-10);
		fConst123 = ((2.6066870201940601e-15 - fConst84) * fConst8);
		fConst124 = (((fConst86 + -4.51431139363082e-17) * fConst8) + -1.04431228974795e-11);
		fConst125 = ((fConst88 + -6.5167175504851601e-17) * fConst8);
		fConst126 = (((fConst80 + -8.1858209969434995e-17) * fConst8) + 2.6107807243698801e-12);
		fConst127 = (fConst82 + -8.4296888028454496e-16);
		fConst128 = (fConst92 + -1.04431228974795e-16);
		fConst129 = (-1.38684672078528e-17 - fConst94);
		fConst130 = (2.6107807243698801e-18 - fConst96);
		fConst131 = (7.5390992821483906e-20 * fConst0);
		fConst132 = (((((fConst131 + -8.7097315864642498e-16) * fConst0) + 2.5606938360538999e-12) * fConst0) + -1.06941755719349e-09);
		fConst133 = (1.0842467917079099e-19 * fConst0);
		fConst134 = (((((fConst133 + -6.9782952280554301e-16) * fConst0) + 1.03015141509897e-12) * fConst0) + -2.0886245794958999e-11);
		fConst135 = (1.8847748205371001e-21 * fConst0);
		fConst136 = (((((fConst135 + -2.55438786072348e-17) * fConst0) + 9.9731155311063602e-14) * fConst0) + -1.1449944376025501e-10);
		fConst137 = (8.2584215873268002e-22 * fConst0);
		fConst138 = (((((fConst137 + -1.0926430625175099e-18) * fConst0) + -4.2806360756767598e-15) * fConst0) + -2.1408401939833001e-11);
		fConst139 = (2.71061697926978e-21 * fConst0);
		fConst140 = (((((1.7445738070138599e-17 - fConst139) * fConst0) + -2.5753785377474201e-14) * fConst0) + 5.2215614487397504e-13);
		fConst141 = (1.5195996990580299e-20 * fConst0);
		fConst142 = (((((fConst141 + -9.8673893548922805e-17) * fConst0) + 1.7671393069707301e-13) * fConst0) + -5.83613923125642e-11);
		fConst143 = (6.0783987962321403e-19 * fConst0);
		fConst144 = (((((fConst143 + -2.7312759827104799e-15) * fConst0) + 1.6861883955186301e-12) * fConst0) + -2.0364089650085001e-10);
		fConst145 = (2.6253509694364402e-19 * fConst0);
		fConst146 = ((((fConst145 + -1.30334351009703e-15) * fConst0) + 2.0364089650085e-13) * fConst0);
		fConst147 = (8.6326195669892402e-21 * fConst0);
		fConst148 = (((((2.25715569681541e-17 - fConst147) * fConst0) + 2.8911785741671997e-14) * fConst0) + -5.2215614487397498e-12);
		fConst149 = (6.5633774235911002e-21 * fConst0);
		fConst150 = ((((3.25835877524258e-17 - fConst149) * fConst0) + -5.0910224125212602e-15) * fConst0);
		fConst151 = (((((4.0929104984717497e-17 - fConst141) * fConst0) + -1.42966352466494e-14) * fConst0) + 1.3053903621849401e-12);
		fConst152 = (((4.2148444014227302e-16 - fConst143) * fConst0) + -5.22156144873975e-14);
		fConst153 = (3.23319084905965e-19 * fConst0);
		fConst154 = ((5.2215614487397501e-17 - fConst153) * fConst0);
		fConst155 = (7.1130198679312e-21 * fConst0);
		fConst156 = (((fConst155 + 6.9342336039263902e-18) * fConst0) + -1.30539036218494e-15);
		fConst157 = (8.0829771226491396e-21 * fConst0);
		fConst158 = ((fConst157 + -1.30539036218494e-18) * fConst0);
		fConst159 = (((((fConst131 + 8.7097315864642498e-16) * fConst0) + 2.5606938360538999e-12) * fConst0) + 1.06941755719349e-09);
		fConst160 = (((((fConst133 + 6.9782952280554301e-16) * fConst0) + 1.03015141509897e-12) * fConst0) + 2.0886245794958999e-11);
		fConst161 = (((((fConst135 + 2.55438786072348e-17) * fConst0) + 9.9731155311063602e-14) * fConst0) + 1.1449944376025501e-10);
		fConst162 = (((((fConst137 + 1.0926430625175099e-18) * fConst0) + -4.2806360756767598e-15) * fConst0) + 2.1408401939833001e-11);
		fConst163 = (((((-1.7445738070138599e-17 - fConst139) * fConst0) + -2.5753785377474201e-14) * fConst0) + -5.2215614487397504e-13);
		fConst164 = (((((fConst141 + 9.8673893548922805e-17) * fConst0) + 1.7671393069707301e-13) * fConst0) + 5.83613923125642e-11);
		fConst165 = (((((fConst143 + 2.7312759827104799e-15) * fConst0) + 1.6861883955186301e-12) * fConst0) + 2.0364089650085001e-10);
		fConst166 = ((((fConst145 + 1.30334351009703e-15) * fConst0) + 2.0364089650085e-13) * fConst0);
		fConst167 = (((((-2.25715569681541e-17 - fConst147) * fConst0) + 2.8911785741671997e-14) * fConst0) + 5.2215614487397498e-12);
		fConst168 = ((((-3.25835877524258e-17 - fConst149) * fConst0) + -5.0910224125212602e-15) * fConst0);
		fConst169 = (((((-4.0929104984717497e-17 - fConst141) * fConst0) + -1.42966352466494e-14) * fConst0) + -1.3053903621849401e-12);
		fConst170 = (((-4.2148444014227302e-16 - fConst143) * fConst0) + -5.22156144873975e-14);
		fConst171 = ((-5.2215614487397501e-17 - fConst153) * fConst0);
		fConst172 = (((fConst155 + -6.9342336039263902e-18) * fConst0) + -1.30539036218494e-15);
		fConst173 = ((fConst157 + 1.30539036218494e-18) * fConst0);
		fConst174 = (1.37949476226545e-18 * fConst0);
		fConst175 = (((fConst174 + 1.12952817259138e-14) * fConst0) + 2.1408401939833001e-11);
		fConst176 = (5.5179790490618098e-17 * fConst0);
		fConst177 = (((fConst176 + 4.51811269036553e-13) * fConst0) + 8.5633607759331901e-10);
		fConst178 = (4.7640691208469699e-20 * fConst0);
		fConst179 = ((((fConst178 + 4.1254512694203001e-16) * fConst0) + 8.5633607759331898e-13) * fConst0);
		fConst180 = (1.19101728021174e-21 * fConst0);
		fConst181 = (((((fConst180 + 1.13161679717088e-17) * fConst0) + 3.0640122581204902e-14) * fConst0) + 2.0886245794958999e-11);
		fConst182 = ((((-1.03136281735508e-17 - fConst180) * fConst0) + -2.1408401939832999e-14) * fConst0);
		fConst183 = (((((fConst135 + 1.35860851647049e-17) * fConst0) + 2.0635610845419499e-14) * fConst0) + 5.2215614487397498e-12);
		fConst184 = (fConst131 + 3.9266142094522802e-16);
		fConst185 = (-9.8165355236307095e-18 - fConst135);
		fConst186 = (2.7589895245309e-18 * fConst8);
		fConst187 = (4.2816803879666001e-11 - fConst186);
		fConst188 = (1.10359580981236e-16 * fConst8);
		fConst189 = (1.7126721551866401e-09 - fConst188);
		fConst190 = (1.9056276483387899e-19 * fConst0);
		fConst191 = ((-8.2509025388406002e-16 - fConst190) * fConst8);
		fConst192 = (4.7640691208469699e-21 * fConst0);
		fConst193 = (((-2.2632335943417599e-17 - fConst192) * fConst8) + 4.1772491589917998e-11);
		fConst194 = ((fConst192 + 2.0627256347101499e-17) * fConst8);
		fConst195 = (((-2.7172170329409801e-17 - fConst74) * fConst8) + 1.04431228974795e-11);
		fConst196 = (-7.8532284189045703e-16 - fConst70);
		fConst197 = (fConst74 + 1.96330710472614e-17);
		fConst198 = ((2.85844147250818e-19 * fConst8) + -1.71267215518664e-12);
		fConst199 = (7.1461036812704504e-21 * fConst8);
		fConst200 = (fConst199 + -6.1280245162409704e-14);
		fConst201 = (4.2816803879665998e-14 - fConst199);
		fConst202 = (fConst100 + -4.1271221690838903e-14);
		fConst203 = (fConst186 + -4.2816803879666001e-11);
		fConst204 = (fConst188 + -1.7126721551866401e-09);
		fConst205 = ((8.2509025388406002e-16 - fConst190) * fConst8);
		fConst206 = (((2.2632335943417599e-17 - fConst192) * fConst8) + -4.1772491589917998e-11);
		fConst207 = ((fConst192 + -2.0627256347101499e-17) * fConst8);
		fConst208 = (((2.7172170329409801e-17 - fConst74) * fConst8) + -1.04431228974795e-11);
		fConst209 = (7.8532284189045703e-16 - fConst70);
		fConst210 = (fConst74 + -1.96330710472614e-17);
		fConst211 = (((1.12952817259138e-14 - fConst174) * fConst0) + -2.1408401939833001e-11);
		fConst212 = (((4.51811269036553e-13 - fConst176) * fConst0) + -8.5633607759331901e-10);
		fConst213 = ((((fConst178 + -4.1254512694203001e-16) * fConst0) + 8.5633607759331898e-13) * fConst0);
		fConst214 = (((((fConst180 + -1.13161679717088e-17) * fConst0) + 3.0640122581204902e-14) * fConst0) + -2.0886245794958999e-11);
		fConst215 = ((((1.03136281735508e-17 - fConst180) * fConst0) + -2.1408401939832999e-14) * fConst0);
		fConst216 = (((((fConst135 + -1.35860851647049e-17) * fConst0) + 2.0635610845419499e-14) * fConst0) + -5.2215614487397498e-12);
		fConst217 = (fConst131 + -3.9266142094522802e-16);
		fConst218 = (9.8165355236307095e-18 - fConst135);
		fConst219 = (1.81647124203455e-07 - (8.6714081178921499e-10 * fConst8));
		fConst220 = (((fConst6 + -2.1951958234628299e-08) * fConst0) + 9.0823562101727498e-08);
		fConst221 = (2.8246147596833602e-10 * fConst8);
		fConst222 = ((0.0045968217295597903 - fConst1) / fConst2);
		fConst223 = (fConst4 + -0.123708458051269);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		fVslider3 = FAUSTFLOAT(1.0);
		fVslider4 = FAUSTFLOAT(0.5);
		fVslider5 = FAUSTFLOAT(0.5);
		fVslider6 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec3[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec8[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec10[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 6); l4 = (l4 + 1)) {
			fRec9[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) {
			fRec7[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec6[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec5[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec11[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec12[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec13[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 5); l11 = (l11 + 1)) {
			fRec4[l11] = 0.0;
			
		}
		for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) {
			fRec2[l12] = 0.0;
			
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec1[l13] = 0.0;
			
		}
		
	}
	
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	
	virtual void instanceInit(int samplingFreq) {
		instanceConstants(samplingFreq);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual module* clone() {
		return new module();
	}
	
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("mesa_dual_rect_orange");
		ui_interface->addVerticalSlider(".amp.bass", &fVslider4, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.gain", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.master", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.middle", &fVslider5, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider3, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.treble", &fVslider6, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0010000000000000009 * double(fVslider0));
		double fSlow1 = (0.0010000000000000009 * double(fVslider1));
		double fSlow2 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider2))) + -1.0));
		double fSlow3 = (0.0010000000000000009 * double(fVslider3));
		double fSlow4 = (0.0010000000000000009 * double(fVslider4));
		double fSlow5 = (0.0010000000000000009 * double(fVslider5));
		double fSlow6 = (0.0010000000000000009 * double(fVslider6));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec3[0] = (fSlow1 + (0.999 * fRec3[1]));
			fRec8[0] = (fSlow2 + (0.999 * fRec8[1]));
			fRec10[0] = (fSlow3 + (0.999 * fRec10[1]));
			double fTemp0 = ((fConst0 * (fConst43 + (fRec8[0] * (fConst44 + (fConst45 * fRec8[0]))))) + 1.67123323036951e-09);
			fRec9[0] = ((0.40000000000000002 * (fRec10[0] * double(input0[i]))) - ((((((fRec9[1] * ((fConst0 * (fConst23 + (fRec8[0] * (fConst25 + (fConst26 * fRec8[0]))))) + 8.3561661518475506e-09)) + (fRec9[2] * ((fConst0 * (fConst28 + (fRec8[0] * (fConst30 + (fConst31 * fRec8[0]))))) + 1.6712332303695101e-08))) + (fRec9[3] * ((fConst0 * (fConst32 + (fRec8[0] * (fConst33 + (fConst34 * fRec8[0]))))) + 1.6712332303695101e-08))) + (fRec9[4] * ((fConst0 * (fConst35 + (fRec8[0] * (fConst36 + (fConst37 * fRec8[0]))))) + 8.3561661518475506e-09))) + (fRec9[5] * ((fConst0 * (fConst39 + (fRec8[0] * (fConst41 + (fConst42 * fRec8[0]))))) + 1.67123323036951e-09))) / fTemp0));
			double fTemp1 = (fConst0 * ((fRec8[0] * ((((((fRec9[0] * (fConst47 + (fConst48 * fRec8[0]))) + (fRec9[1] * (fConst50 + (fConst51 * fRec8[0])))) + (fRec9[2] * (fConst53 + (fConst54 * fRec8[0])))) + (fRec9[3] * (fConst55 + (fConst56 * fRec8[0])))) + (fRec9[4] * (fConst57 + (fConst58 * fRec8[0])))) + (fRec9[5] * (fConst59 + (fConst60 * fRec8[0]))))) / fTemp0));
			fRec7[0] = ((1.3999999999999999 * (int(signbit(double(fTemp1)))?double(s01_stage1_negclip(double(fTemp1))):double(s01_stage1clip(double(fTemp1))))) - (fConst61 * ((fConst62 * fRec7[1]) + (fConst63 * fRec7[2]))));
			double fTemp2 = ((fConst21 * fRec7[1]) + (fConst61 * ((fConst65 * fRec7[0]) + (fConst66 * fRec7[2]))));
			fRec6[0] = ((2.0 * (int(signbit(double(fTemp2)))?double(s02_stage2_negclip(double(fTemp2))):double(s02_stage2clip(double(fTemp2))))) - (fConst67 * fRec6[1]));
			double fTemp3 = (fConst18 * (fRec6[0] + fRec6[1]));
			fRec5[0] = ((2.0 * (int(signbit(double(fTemp3)))?double(s03_stage3_negclip(double(fTemp3))):double(s03_stage3clip(double(fTemp3))))) - (fConst68 * fRec5[1]));
			double fTemp4 = (fConst13 * ((fConst15 * fRec5[0]) + (fConst69 * fRec5[1])));
			fRec11[0] = (fSlow4 + (0.999 * fRec11[1]));
			fRec12[0] = (fSlow5 + (0.999 * fRec12[1]));
			fRec13[0] = (fSlow6 + (0.999 * fRec13[1]));
			double fTemp5 = ((((fRec11[0] * ((fConst0 * (fConst159 + (fConst160 * fRec12[0]))) + 2.0886245794959001e-08)) + (fConst0 * (fConst161 + (fRec12[0] * (fConst162 + (fConst163 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * (((fConst164 + (fRec11[0] * (fConst165 + (fConst166 * fRec12[0])))) + (fRec12[0] * (fConst167 + (fConst168 * fRec12[0])))) + (fRec13[0] * ((fConst169 + (fConst0 * (fRec11[0] * (fConst170 + (fConst171 * fRec12[0]))))) + (fConst0 * (fRec12[0] * (fConst172 + (fConst173 * fRec12[0])))))))) + 5.2215614487397502e-09))) + 2.1408401939833001e-08);
			fRec4[0] = ((int(signbit(double(fTemp4)))?double(s04_stage4_negclip(double(fTemp4))):double(s04_stage4clip(double(fTemp4)))) - (((((fRec4[1] * ((((fRec11[0] * ((fConst0 * (fConst71 + (fConst73 * fRec12[0]))) + 8.3544983179836003e-08)) + (fConst0 * (fConst75 + (fRec12[0] * (fConst77 + (fConst79 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * (((fConst81 + (fRec11[0] * (fConst83 + (fConst85 * fRec12[0])))) + (fRec12[0] * (fConst87 + (fConst89 * fRec12[0])))) + (fRec13[0] * ((fConst90 + (fConst8 * (fRec11[0] * (fConst91 + (fConst93 * fRec12[0]))))) + (fConst8 * (fRec12[0] * (fConst95 + (fConst97 * fRec12[0])))))))) + 2.0886245794959001e-08))) + 8.5633607759331899e-08)) + (fRec4[2] * ((((fRec11[0] * ((fConst8 * (fConst98 + (fConst99 * fRec12[0]))) + 1.2531747476975401e-07)) + (fConst8 * (fConst101 + (fRec12[0] * (fConst102 + (fConst103 * fRec12[0])))))) + (fRec13[0] * (((fConst8 * ((fConst105 + (fRec11[0] * (fConst107 + (fConst108 * fRec12[0])))) + (fRec12[0] * (fConst109 + (fConst110 * fRec12[0]))))) + (fRec13[0] * ((fRec11[0] * (fConst111 + (fConst112 * fRec12[0]))) + (fConst8 * (fConst113 + (fRec12[0] * (fConst114 + (fConst115 * fRec12[0])))))))) + 3.1329368692438503e-08))) + 1.28450411638998e-07))) + (fRec4[3] * ((((fRec11[0] * ((fConst0 * (fConst116 + (fConst117 * fRec12[0]))) + 8.3544983179836003e-08)) + (fConst0 * (fConst118 + (fRec12[0] * (fConst119 + (fConst120 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * (((fConst121 + (fRec11[0] * (fConst122 + (fConst123 * fRec12[0])))) + (fRec12[0] * (fConst124 + (fConst125 * fRec12[0])))) + (fRec13[0] * ((fConst126 + (fConst8 * (fRec11[0] * (fConst127 + (fConst128 * fRec12[0]))))) + (fConst8 * (fRec12[0] * (fConst129 + (fConst130 * fRec12[0])))))))) + 2.0886245794959001e-08))) + 8.5633607759331899e-08))) + (fRec4[4] * ((((fRec11[0] * ((fConst0 * (fConst132 + (fConst134 * fRec12[0]))) + 2.0886245794959001e-08)) + (fConst0 * (fConst136 + (fRec12[0] * (fConst138 + (fConst140 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * (((fConst142 + (fRec11[0] * (fConst144 + (fConst146 * fRec12[0])))) + (fRec12[0] * (fConst148 + (fConst150 * fRec12[0])))) + (fRec13[0] * ((fConst151 + (fConst0 * (fRec11[0] * (fConst152 + (fConst154 * fRec12[0]))))) + (fConst0 * (fRec12[0] * (fConst156 + (fConst158 * fRec12[0])))))))) + 5.2215614487397502e-09))) + 2.1408401939833001e-08))) / fTemp5));
			fRec2[0] = ((fConst10 * ((fRec3[0] * (((((fRec4[0] * (((fConst175 + (fRec11[0] * (fConst177 + (fConst179 * fRec12[0])))) + (fRec12[0] * (fConst181 + (fConst182 * fRec12[0])))) + (fRec13[0] * (fConst183 + (fConst8 * ((fConst184 * fRec11[0]) + (fConst185 * fRec12[0]))))))) + (fRec4[1] * (((fConst187 + (fRec11[0] * (fConst189 + (fConst191 * fRec12[0])))) + (fRec12[0] * (fConst193 + (fConst194 * fRec12[0])))) + (fRec13[0] * (fConst195 + (fConst8 * ((fConst196 * fRec11[0]) + (fConst197 * fRec12[0])))))))) + (fConst0 * (fRec4[2] * ((((fRec11[0] * ((fConst198 * fRec12[0]) + -9.03622538073106e-13)) + -2.2590563451827699e-14) + (fRec12[0] * (fConst200 + (fConst201 * fRec12[0])))) + (fRec13[0] * (fConst202 + (fConst8 * ((4.52345956928903e-19 * fRec11[0]) - (1.13086489232226e-20 * fRec12[0]))))))))) + (fRec4[3] * (((fConst203 + (fRec11[0] * (fConst204 + (fConst205 * fRec12[0])))) + (fRec12[0] * (fConst206 + (fConst207 * fRec12[0])))) + (fRec13[0] * (fConst208 + (fConst8 * ((fConst209 * fRec11[0]) + (fConst210 * fRec12[0])))))))) + (fRec4[4] * (((fConst211 + (fRec11[0] * (fConst212 + (fConst213 * fRec12[0])))) + (fRec12[0] * (fConst214 + (fConst215 * fRec12[0])))) + (fRec13[0] * (fConst216 + (fConst8 * ((fConst217 * fRec11[0]) + (fConst218 * fRec12[0]))))))))) / fTemp5)) - (fConst7 * ((fConst219 * fRec2[1]) + (fConst220 * fRec2[2]))));
			double fTemp6 = (fConst7 * (((fConst9 * fRec2[1]) + (fConst221 * fRec2[0])) + (fConst221 * fRec2[2])));
			fRec1[0] = ((1.2 * (int(signbit(double(fTemp6)))?double(s06_stage5_negclip(double(fTemp6))):double(s06_stage5clip(double(fTemp6))))) - (fConst222 * fRec1[1]));
			double fTemp7 = (fConst3 * ((fConst5 * fRec1[0]) + (fConst223 * fRec1[1])));
			output0[i] = FAUSTFLOAT((0.029999999999999999 * (fRec0[0] * (int(signbit(double(fTemp7)))?double(s07_stage6_negclip(double(fTemp7))):double(s07_stage6clip(double(fTemp7)))))));
			fRec0[1] = fRec0[0];
			fRec3[1] = fRec3[0];
			fRec8[1] = fRec8[0];
			fRec10[1] = fRec10[0];
			for (int j0 = 5; (j0 > 0); j0 = (j0 - 1)) {
				fRec9[j0] = fRec9[(j0 - 1)];
				
			}
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			fRec11[1] = fRec11[0];
			fRec12[1] = fRec12[0];
			fRec13[1] = fRec13[0];
			for (int j1 = 4; (j1 > 0); j1 = (j1 - 1)) {
				fRec4[j1] = fRec4[(j1 - 1)];
				
			}
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_mesa_dual_rect_orange */

