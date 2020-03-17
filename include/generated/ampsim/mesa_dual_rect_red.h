namespace ampsim_mesa_dual_rect_red {

#include <generated/stage/mesa_dual_rect_red/s01_stage1_neg_table.h>
#include <generated/stage/mesa_dual_rect_red/s01_stage1_table.h>
#include <generated/stage/mesa_dual_rect_red/s02_stage2_neg_table.h>
#include <generated/stage/mesa_dual_rect_red/s02_stage2_table.h>
#include <generated/stage/mesa_dual_rect_red/s03_stage3_neg_table.h>
#include <generated/stage/mesa_dual_rect_red/s03_stage3_table.h>
#include <generated/stage/mesa_dual_rect_red/s04_stage4_neg_table.h>
#include <generated/stage/mesa_dual_rect_red/s04_stage4_table.h>
#include <generated/stage/mesa_dual_rect_red/s06_stage5_neg_table.h>
#include <generated/stage/mesa_dual_rect_red/s06_stage5_table.h>
#include <generated/stage/mesa_dual_rect_red/s07_stage6_neg_table.h>
#include <generated/stage/mesa_dual_rect_red/s07_stage6_table.h>
/* ------------------------------------------------------------
name: "mesa_dual_rect_red"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */



/* link with : "" */

static double module_faustpower2_f(double value) {
	return (value * value);
	
}
static double module_faustpower3_f(double value) {
	return ((value * value) * value);
	
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
	FAUSTFLOAT fVslider1;
	double fRec3[2];
	double fConst10;
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
	FAUSTFLOAT fVslider2;
	double fRec8[2];
	FAUSTFLOAT fVslider3;
	double fRec10[2];
	double fConst21;
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
	double fRec9[6];
	double fConst45;
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
	double fRec7[3];
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fRec6[2];
	double fConst67;
	double fRec5[2];
	double fConst68;
	FAUSTFLOAT fVslider4;
	double fRec11[2];
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	FAUSTFLOAT fVslider5;
	double fRec12[2];
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	double fConst87;
	double fConst88;
	FAUSTFLOAT fVslider6;
	double fRec13[2];
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
	double fConst221;
	double fConst222;
	double fConst223;
	double fConst224;
	double fConst225;
	double fConst226;
	double fConst227;
	double fConst228;
	double fConst229;
	double fConst230;
	double fConst231;
	double fConst232;
	double fConst233;
	double fConst234;
	double fConst235;
	double fConst236;
	double fConst237;
	double fConst238;
	double fConst239;
	double fConst240;
	double fConst241;
	double fConst242;
	double fConst243;
	double fConst244;
	double fConst245;
	double fConst246;
	double fConst247;
	double fConst248;
	double fConst249;
	double fConst250;
	double fConst251;
	double fConst252;
	double fConst253;
	double fConst254;
	double fConst255;
	double fConst256;
	double fConst257;
	double fConst258;
	double fConst259;
	double fConst260;
	double fConst261;
	double fConst262;
	double fConst263;
	double fConst264;
	double fConst265;
	double fRec4[5];
	double fConst266;
	double fConst267;
	double fConst268;
	double fConst269;
	double fConst270;
	double fConst271;
	double fConst272;
	double fConst273;
	double fConst274;
	double fConst275;
	double fConst276;
	double fConst277;
	double fConst278;
	double fConst279;
	double fConst280;
	double fConst281;
	double fConst282;
	double fConst283;
	double fConst284;
	double fConst285;
	double fConst286;
	double fConst287;
	double fConst288;
	double fConst289;
	double fConst290;
	double fConst291;
	double fConst292;
	double fConst293;
	double fConst294;
	double fConst295;
	double fConst296;
	double fConst297;
	double fConst298;
	double fConst299;
	double fConst300;
	double fConst301;
	double fConst302;
	double fConst303;
	double fConst304;
	double fConst305;
	double fConst306;
	double fConst307;
	double fConst308;
	double fConst309;
	double fConst310;
	double fConst311;
	double fConst312;
	double fConst313;
	double fConst314;
	double fConst315;
	double fConst316;
	double fConst317;
	double fConst318;
	double fConst319;
	double fConst320;
	double fConst321;
	double fConst322;
	double fConst323;
	double fConst324;
	double fConst325;
	double fConst326;
	double fConst327;
	double fConst328;
	double fConst329;
	double fConst330;
	double fConst331;
	double fConst332;
	double fConst333;
	double fConst334;
	double fConst335;
	double fConst336;
	double fConst337;
	double fConst338;
	double fConst339;
	double fConst340;
	double fConst341;
	double fConst342;
	double fConst343;
	double fConst344;
	double fRec2[3];
	double fConst345;
	double fConst346;
	double fRec1[2];
	double fConst347;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "mesa_dual_rect_red");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "mesa_dual_rect_red");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "mesa_dual_rect_red");
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
		fConst10 = (2.0641302225742399e-05 * fConst0);
		fConst11 = (fConst10 + 0.0092174931643671607);
		fConst12 = (1.0 / fConst11);
		fConst13 = (0.0014952552790220501 * fConst0);
		fConst14 = (-0.41534868861723401 - fConst13);
		fConst15 = (1.8810377081318699e-05 * fConst0);
		fConst16 = (fConst15 + 0.0971019000967005);
		fConst17 = (0.0 - (0.14626172185908901 / fConst16));
		fConst18 = (2.0340565862396499e-10 * fConst0);
		fConst19 = (((fConst18 + 1.09382323078101e-05) * fConst0) + 0.0063182117555006002);
		fConst20 = (0.0 - (0.36405786592281902 / fConst19));
		fConst21 = (8.3105653974609703e-20 * fConst0);
		fConst22 = (((((-5.5408420307862795e-16 - fConst21) * fConst0) + 5.0134079063028096e-13) * fConst0) + 3.5882652987587999e-10);
		fConst23 = (9.9505980808851097e-36 * fConst0);
		fConst24 = (((((((-1.8604276563012399e-18 - fConst23) * fConst0) + -3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + -1.0027399382217099e-11);
		fConst25 = ((((((fConst23 + 1.9435333102758399e-18) * fConst0) + 5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst26 = (5.5403769316406501e-20 * fConst0);
		fConst27 = (((((fConst26 + -1.10816840615726e-15) * fConst0) + -1.0026815812605599e-12) * fConst0) + 2.3921768658391998e-10);
		fConst28 = (1.9901196161770201e-35 * fConst0);
		fConst29 = (((((((fConst28 + 1.24028510420082e-18) * fConst0) + -7.4478261210872397e-16) * fConst0) + -6.9729126393360305e-14) * fConst0) + -6.6849329214780402e-12);
		fConst30 = ((((((-1.29568887351723e-18 - fConst28) * fConst0) + 1.1774046968491601e-15) * fConst0) + 2.6739731685912199e-13) * fConst0);
		fConst31 = (((((fConst26 + 1.10816840615726e-15) * fConst0) + -1.0026815812605599e-12) * fConst0) + -2.3921768658391998e-10);
		fConst32 = (((((((1.24028510420082e-18 - fConst28) * fConst0) + 7.4478261210872397e-16) * fConst0) + -6.9729126393360305e-14) * fConst0) + 6.6849329214780402e-12);
		fConst33 = ((((((fConst28 + -1.29568887351723e-18) * fConst0) + -1.1774046968491601e-15) * fConst0) + 2.6739731685912199e-13) * fConst0);
		fConst34 = (((((5.5408420307862795e-16 - fConst21) * fConst0) + 5.0134079063028096e-13) * fConst0) + -3.5882652987587999e-10);
		fConst35 = (((((((fConst23 + -1.8604276563012399e-18) * fConst0) + 3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + 1.0027399382217099e-11);
		fConst36 = ((((((1.9435333102758399e-18 - fConst23) * fConst0) + -5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst37 = (2.7701884658203202e-20 * fConst0);
		fConst38 = (((((fConst37 + -5.5408420307862795e-16) * fConst0) + 5.0134079063028096e-13) * fConst0) + -1.1960884329195999e-10);
		fConst39 = (1.9901196161770201e-36 * fConst0);
		fConst40 = (((((((6.2014255210041202e-19 - fConst39) * fConst0) + -3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + 3.3424664607390201e-12);
		fConst41 = ((((((fConst39 + -6.4784443675861404e-19) * fConst0) + 5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst42 = (((((fConst37 + 5.5408420307862795e-16) * fConst0) + 5.0134079063028096e-13) * fConst0) + 1.1960884329195999e-10);
		fConst43 = (((((((fConst39 + 6.2014255210041202e-19) * fConst0) + 3.7239130605436199e-16) * fConst0) + 3.4864563196680197e-14) * fConst0) + -3.3424664607390201e-12);
		fConst44 = ((((((-6.4784443675861404e-19 - fConst39) * fConst0) + -5.8870234842458102e-16) * fConst0) + -1.3369865842956099e-13) * fConst0);
		fConst45 = (4.7538812792761402e-17 * fConst0);
		fConst46 = (((((-5.8953155246672801e-14 - fConst45) * fConst0) + -2.3697019723625201e-11) * fConst0) + -3.0525726492396001e-09);
		fConst47 = ((((fConst45 + 3.5183748850292099e-14) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst48 = (1.42616438378284e-16 * fConst0);
		fConst49 = (((((fConst48 + 5.8953155246672801e-14) * fConst0) + -2.3697019723625201e-11) * fConst0) + -9.1577179477187999e-09);
		fConst50 = ((((-3.5183748850292099e-14 - fConst48) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst51 = (9.5077625585522903e-17 * fConst0);
		fConst52 = (((((1.1790631049334601e-13 - fConst51) * fConst0) + 4.7394039447250498e-11) * fConst0) + -6.1051452984792002e-09);
		fConst53 = ((((fConst51 + -7.0367497700584199e-14) * fConst0) + -1.2210290596958401e-11) * fConst0);
		fConst54 = (((((-1.1790631049334601e-13 - fConst51) * fConst0) + 4.7394039447250498e-11) * fConst0) + 6.1051452984792002e-09);
		fConst55 = ((((fConst51 + 7.0367497700584199e-14) * fConst0) + -1.2210290596958401e-11) * fConst0);
		fConst56 = (((((fConst48 + -5.8953155246672801e-14) * fConst0) + -2.3697019723625201e-11) * fConst0) + 9.1577179477187999e-09);
		fConst57 = ((((3.5183748850292099e-14 - fConst48) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst58 = (((((5.8953155246672801e-14 - fConst45) * fConst0) + -2.3697019723625201e-11) * fConst0) + 3.0525726492396001e-09);
		fConst59 = ((((fConst45 + -3.5183748850292099e-14) * fConst0) + 6.1051452984792004e-12) * fConst0);
		fConst60 = (1.0 / fConst19);
		fConst61 = (0.0126364235110012 - (4.0681131724792999e-10 * fConst8));
		fConst62 = (((fConst18 + -1.09382323078101e-05) * fConst0) + 0.0063182117555006002);
		fConst63 = (0.00065530415866107104 * fConst0);
		fConst64 = (-0.18202893296141001 - fConst63);
		fConst65 = (fConst63 + -0.18202893296141001);
		fConst66 = ((0.0971019000967005 - fConst15) / fConst16);
		fConst67 = ((0.0092174931643671607 - fConst10) / fConst11);
		fConst68 = (fConst13 + -0.41534868861723401);
		fConst69 = (2.08921589374493e-19 * fConst0);
		fConst70 = (((-1.41769763633614e-15 - fConst69) * fConst8) + 1.5968532278464899e-09);
		fConst71 = (3.7465460067471399e-19 * fConst0);
		fConst72 = (((-1.1101881263413999e-15 - fConst71) * fConst8) + 3.09515666740288e-11);
		fConst73 = (5.2230397343623298e-21 * fConst0);
		fConst74 = (((-4.0665480642765903e-17 - fConst73) * fConst8) + 1.70908360860652e-10);
		fConst75 = (4.1433252825055202e-21 * fConst0);
		fConst76 = (((-1.6786272669993101e-18 - fConst75) * fConst8) + 3.1725355840879503e-11);
		fConst77 = (9.36636501686785e-21 * fConst0);
		fConst78 = (((fConst77 + 2.7754703158535e-17) * fConst8) + -7.73789166850719e-13);
		fConst79 = (5.9352724254117402e-21 * fConst0);
		fConst80 = (((-1.6984053181039799e-17 - fConst79) * fConst8) + 4.7588033761319197e-12);
		fConst81 = (2.3741089701647002e-19 * fConst0);
		fConst82 = (((-4.4195123022512102e-16 - fConst81) * fConst8) + 4.6427350011043104e-12);
		fConst83 = (1.5595875415709599e-19 * fConst0);
		fConst84 = ((-2.0233039134812599e-16 - fConst83) * fConst8);
		fConst85 = (2.0363035714843401e-21 * fConst0);
		fConst86 = (fConst85 + 2.0915521179974699e-18);
		fConst87 = (3.8989688539273998e-21 * fConst0);
		fConst88 = (fConst87 + 5.0582597837031503e-18);
		fConst89 = (1.4838181063529399e-21 * fConst0);
		fConst90 = (((-3.9121542213305301e-18 - fConst89) * fConst8) + 1.16068375027608e-12);
		fConst91 = (5.9352724254117396e-20 * fConst0);
		fConst92 = (-9.7133444599103805e-17 - fConst91);
		fConst93 = (2.5635325582097601e-20 * fConst0);
		fConst94 = (-4.4848820110667701e-17 - fConst93);
		fConst95 = (8.4293496680049504e-22 * fConst0);
		fConst96 = (fConst95 + 6.6623247265846399e-19);
		fConst97 = (6.4088313955244001e-22 * fConst0);
		fConst98 = (fConst97 + 1.1212205027666899e-18);
		fConst99 = module_faustpower3_f(fConst0);
		fConst100 = (fConst89 + 1.8784505814468e-18);
		fConst101 = (fConst91 + 1.5785299003754701e-17);
		fConst102 = (3.1570598007509302e-20 * fConst0);
		fConst103 = (6.9455315616520199e-22 * fConst0);
		fConst104 = ((3.94632475093867e-19 - fConst103) * fConst99);
		fConst105 = module_faustpower4_f(fConst0);
		fConst106 = (0.0 - (7.8926495018773297e-22 * fConst105));
		fConst107 = (6.0658484187707997e-20 * fConst0);
		fConst108 = (((-1.6487492492250199e-16 - fConst107) * fConst8) + 8.6648910903943397e-11);
		fConst109 = (2.4263393675083199e-18 * fConst0);
		fConst110 = (((-4.1686576293917597e-15 - fConst109) * fConst8) + 2.9899213407111801e-10);
		fConst111 = (1.04797210979615e-18 * fConst0);
		fConst112 = ((-1.9188708513977501e-15 - fConst111) * fConst8);
		fConst113 = (3.44591814428042e-20 * fConst0);
		fConst114 = (((fConst113 + 3.0045366704946301e-17) * fConst8) + 7.7378916685071904e-12);
		fConst115 = (2.6199302744903701e-20 * fConst0);
		fConst116 = ((fConst115 + 4.7971771284943803e-17) * fConst8);
		fConst117 = (((fConst107 + 8.1737120124054995e-17) * fConst8) + -2.6308831672924401e-12);
		fConst118 = (fConst109 + 8.4314543745388204e-16);
		fConst119 = (1.29060604654698e-18 * fConst0);
		fConst120 = (fConst119 + 1.05235326691698e-16);
		fConst121 = (2.8393333024033499e-20 * fConst0);
		fConst122 = (1.3817398394619901e-17 - fConst121);
		fConst123 = (3.2265151163674499e-20 * fConst0);
		fConst124 = (-2.6308831672924401e-18 - fConst123);
		fConst125 = ((3.1338238406174001e-19 * fConst8) + -3.8934817601874198e-12);
		fConst126 = ((5.6198190101207096e-19 * fConst8) + -1.5386642824993201e-12);
		fConst127 = (7.8345596015435003e-21 * fConst8);
		fConst128 = (fConst127 + -1.53656514724748e-13);
		fConst129 = ((6.21498792375828e-21 * fConst8) + 5.1131988145494198e-15);
		fConst130 = (3.84666070624829e-14 - (1.40495475253018e-20 * fConst8));
		fConst131 = (8.9029086381176103e-21 * fConst8);
		fConst132 = (fConst131 + -2.4311681833282701e-14);
		fConst133 = ((3.5611634552470399e-19 * fConst8) + -2.11058733150202e-13);
		fConst134 = ((2.3393813123564399e-19 * fConst8) + -4.6427350011043101e-15);
		fConst135 = (-4.7588033761319201e-15 - (3.0544553572265099e-21 * fConst8));
		fConst136 = (1.1606837502760799e-16 - (5.8484532808910996e-21 * fConst8));
		fConst137 = (2.2257271595293999e-21 * fConst8);
		fConst138 = (fConst137 + -5.8800238788986e-15);
		fConst139 = ((8.9029086381176106e-20 * fConst8) + -4.4848820110667697e-14);
		fConst140 = (3.8452988373146401e-20 * fConst8);
		fConst141 = ((-1.1606837502760801e-15 - (1.26440245020074e-21 * fConst8)) * fConst8);
		fConst142 = (0.0 - (9.6132470932865996e-22 * fConst105));
		fConst143 = (0.0 - (4.7355897011264001e-20 * fConst105));
		fConst144 = (8.9029086381176106e-20 * fConst105);
		fConst145 = (3.9463247509386702e-16 - fConst137);
		fConst146 = (9.0987726281561996e-20 * fConst8);
		fConst147 = (fConst146 + -2.6645640431157802e-13);
		fConst148 = (3.6395090512624796e-18 * fConst8);
		fConst149 = (fConst148 + -2.4809760634514499e-12);
		fConst150 = ((1.5719581646942201e-18 * fConst8) + -2.98992134071118e-13);
		fConst151 = (-4.3007201893563002e-14 - (5.1688772164206402e-20 * fConst8));
		fConst152 = (7.4748033517779395e-15 - (3.92989541173556e-20 * fConst8));
		fConst153 = ((1.05235326691698e-13 - fConst148) * fConst8);
		fConst154 = (0.0 - (1.9359090698204699e-18 * fConst105));
		fConst155 = (2.8655579458149299e-14 - fConst146);
		fConst156 = ((4.25899995360502e-20 * fConst8) + 2.6308831672924401e-15);
		fConst157 = (4.8397726745511802e-20 * fConst8);
		fConst158 = (((1.41769763633614e-15 - fConst69) * fConst8) + -1.5968532278464899e-09);
		fConst159 = (((1.1101881263413999e-15 - fConst71) * fConst8) + -3.09515666740288e-11);
		fConst160 = (((4.0665480642765903e-17 - fConst73) * fConst8) + -1.70908360860652e-10);
		fConst161 = (((1.6786272669993101e-18 - fConst75) * fConst8) + -3.1725355840879503e-11);
		fConst162 = (((fConst77 + -2.7754703158535e-17) * fConst8) + 7.73789166850719e-13);
		fConst163 = (((1.6984053181039799e-17 - fConst79) * fConst8) + -4.7588033761319197e-12);
		fConst164 = (((4.4195123022512102e-16 - fConst81) * fConst8) + -4.6427350011043104e-12);
		fConst165 = ((2.0233039134812599e-16 - fConst83) * fConst8);
		fConst166 = (fConst85 + -2.0915521179974699e-18);
		fConst167 = (fConst87 + -5.0582597837031503e-18);
		fConst168 = (((3.9121542213305301e-18 - fConst89) * fConst8) + -1.16068375027608e-12);
		fConst169 = (9.7133444599103805e-17 - fConst91);
		fConst170 = (4.4848820110667701e-17 - fConst93);
		fConst171 = (fConst95 + -6.6623247265846399e-19);
		fConst172 = (fConst97 + -1.1212205027666899e-18);
		fConst173 = (fConst89 + -1.8784505814468e-18);
		fConst174 = (fConst91 + -1.5785299003754701e-17);
		fConst175 = ((-3.94632475093867e-19 - fConst103) * fConst99);
		fConst176 = (((1.6487492492250199e-16 - fConst107) * fConst8) + -8.6648910903943397e-11);
		fConst177 = (((4.1686576293917597e-15 - fConst109) * fConst8) + -2.9899213407111801e-10);
		fConst178 = ((1.9188708513977501e-15 - fConst111) * fConst8);
		fConst179 = (((fConst113 + -3.0045366704946301e-17) * fConst8) + -7.7378916685071904e-12);
		fConst180 = ((fConst115 + -4.7971771284943803e-17) * fConst8);
		fConst181 = (((fConst107 + -8.1737120124054995e-17) * fConst8) + 2.6308831672924401e-12);
		fConst182 = (fConst109 + -8.4314543745388204e-16);
		fConst183 = (fConst119 + -1.05235326691698e-16);
		fConst184 = (-1.3817398394619901e-17 - fConst121);
		fConst185 = (2.6308831672924401e-18 - fConst123);
		fConst186 = (5.2230397343623299e-20 * fConst0);
		fConst187 = (((((fConst186 + -7.08848818168071e-16) * fConst0) + 1.9467408800937099e-12) * fConst0) + -7.9842661392324599e-10);
		fConst188 = (9.3663650168678497e-20 * fConst0);
		fConst189 = (((((fConst188 + -5.5509406317069997e-16) * fConst0) + 7.6933214124965903e-13) * fConst0) + -1.54757833370144e-11);
		fConst190 = (1.30575993359058e-21 * fConst0);
		fConst191 = (((((fConst190 + -2.0332740321382899e-17) * fConst0) + 7.6828257362374103e-14) * fConst0) + -8.5454180430325898e-11);
		fConst192 = (1.0358313206263801e-21 * fConst0);
		fConst193 = (((((fConst192 + -8.39313633499656e-19) * fConst0) + -2.5565994072747099e-15) * fConst0) + -1.58626779204397e-11);
		fConst194 = (2.3415912542169599e-21 * fConst0);
		fConst195 = (((((1.38773515792675e-17 - fConst194) * fConst0) + -1.92333035312415e-14) * fConst0) + 3.8689458342535899e-13);
		fConst196 = (((((fConst89 + -8.4920265905198792e-18) * fConst0) + 1.21558409166413e-14) * fConst0) + -2.3794016880659599e-12);
		fConst197 = (((((fConst91 + -2.2097561511255999e-16) * fConst0) + 1.05529366575101e-13) * fConst0) + -2.32136750055216e-12);
		fConst198 = (3.8989688539273998e-20 * fConst0);
		fConst199 = ((((fConst198 + -1.01165195674063e-16) * fConst0) + 2.3213675005521602e-15) * fConst0);
		fConst200 = (5.0907589287108501e-22 * fConst0);
		fConst201 = (((1.04577605899874e-18 - fConst200) * fConst0) + 2.37940168806596e-15);
		fConst202 = (9.7474221348184994e-22 * fConst0);
		fConst203 = (((2.5291298918515701e-18 - fConst202) * fConst0) + -5.8034187513803896e-17);
		fConst204 = (3.70954526588234e-22 * fConst0);
		fConst205 = (((((fConst204 + -1.95607711066527e-18) * fConst0) + 2.9400119394493e-15) * fConst0) + -5.80341875138039e-13);
		fConst206 = (1.48381810635294e-20 * fConst0);
		fConst207 = (((fConst206 + -4.8566722299551903e-17) * fConst0) + 2.2424410055333801e-14);
		fConst208 = (6.4088313955244002e-21 * fConst0);
		fConst209 = ((fConst208 + -2.2424410055333801e-17) * fConst0);
		fConst210 = (2.10733741700124e-22 * fConst0);
		fConst211 = (((3.3311623632923199e-19 - fConst210) * fConst0) + 5.8034187513803896e-16);
		fConst212 = (1.6022078488811e-22 * fConst0);
		fConst213 = ((5.6061025138334601e-19 - fConst212) * fConst0);
		fConst214 = ((7.8926495018773306e-18 - fConst206) * fConst99);
		fConst215 = (0.0 - (7.89264950187733e-21 * fConst105));
		fConst216 = (((9.3922529072340096e-19 - fConst204) * fConst0) + -1.9731623754693299e-16);
		fConst217 = (1.736382890413e-22 * fConst0);
		fConst218 = (fConst217 + 1.97316237546933e-19);
		fConst219 = (1.9731623754693301e-22 * fConst0);
		fConst220 = (1.5164621046926999e-20 * fConst0);
		fConst221 = (((((fConst220 + -8.2437462461250896e-17) * fConst0) + 1.3322820215578901e-13) * fConst0) + -4.3324455451971698e-11);
		fConst222 = (6.0658484187707997e-19 * fConst0);
		fConst223 = (((((fConst222 + -2.0843288146958798e-15) * fConst0) + 1.24048803172573e-12) * fConst0) + -1.4949606703555901e-10);
		fConst224 = (2.6199302744903701e-19 * fConst0);
		fConst225 = ((((fConst224 + -9.5943542569887604e-16) * fConst0) + 1.49496067035559e-13) * fConst0);
		fConst226 = (8.6147953607010605e-21 * fConst0);
		fConst227 = (((((1.50226833524732e-17 - fConst226) * fConst0) + 2.1503600946781501e-14) * fConst0) + -3.8689458342535904e-12);
		fConst228 = (6.5498256862259299e-21 * fConst0);
		fConst229 = ((((2.3985885642471902e-17 - fConst228) * fConst0) + -3.7374016758889698e-15) * fConst0);
		fConst230 = (((((4.0868560062027498e-17 - fConst220) * fConst0) + -1.4327789729074599e-14) * fConst0) + 1.3154415836462201e-12);
		fConst231 = (((4.2157271872694102e-16 - fConst222) * fConst0) + -5.26176633458489e-14);
		fConst232 = (3.2265151163674501e-19 * fConst0);
		fConst233 = ((5.2617663345848902e-17 - fConst232) * fConst0);
		fConst234 = (7.0983332560083596e-21 * fConst0);
		fConst235 = (((fConst234 + 6.9086991973099603e-18) * fConst0) + -1.3154415836462201e-15);
		fConst236 = (8.0662877909186397e-21 * fConst0);
		fConst237 = ((fConst236 + -1.31544158364622e-18) * fConst0);
		fConst238 = (((((fConst186 + 7.08848818168071e-16) * fConst0) + 1.9467408800937099e-12) * fConst0) + 7.9842661392324599e-10);
		fConst239 = (((((fConst188 + 5.5509406317069997e-16) * fConst0) + 7.6933214124965903e-13) * fConst0) + 1.54757833370144e-11);
		fConst240 = (((((fConst190 + 2.0332740321382899e-17) * fConst0) + 7.6828257362374103e-14) * fConst0) + 8.5454180430325898e-11);
		fConst241 = (((((fConst192 + 8.39313633499656e-19) * fConst0) + -2.5565994072747099e-15) * fConst0) + 1.58626779204397e-11);
		fConst242 = (((((-1.38773515792675e-17 - fConst194) * fConst0) + -1.92333035312415e-14) * fConst0) + -3.8689458342535899e-13);
		fConst243 = (((((fConst89 + 8.4920265905198792e-18) * fConst0) + 1.21558409166413e-14) * fConst0) + 2.3794016880659599e-12);
		fConst244 = (((((fConst91 + 2.2097561511255999e-16) * fConst0) + 1.05529366575101e-13) * fConst0) + 2.32136750055216e-12);
		fConst245 = ((((fConst198 + 1.01165195674063e-16) * fConst0) + 2.3213675005521602e-15) * fConst0);
		fConst246 = (((-1.04577605899874e-18 - fConst200) * fConst0) + 2.37940168806596e-15);
		fConst247 = (((-2.5291298918515701e-18 - fConst202) * fConst0) + -5.8034187513803896e-17);
		fConst248 = (((((fConst204 + 1.95607711066527e-18) * fConst0) + 2.9400119394493e-15) * fConst0) + 5.80341875138039e-13);
		fConst249 = (((fConst206 + 4.8566722299551903e-17) * fConst0) + 2.2424410055333801e-14);
		fConst250 = ((fConst208 + 2.2424410055333801e-17) * fConst0);
		fConst251 = (((-3.3311623632923199e-19 - fConst210) * fConst0) + 5.8034187513803896e-16);
		fConst252 = ((-5.6061025138334601e-19 - fConst212) * fConst0);
		fConst253 = ((-7.8926495018773306e-18 - fConst206) * fConst99);
		fConst254 = (((-9.3922529072340096e-19 - fConst204) * fConst0) + -1.9731623754693299e-16);
		fConst255 = (fConst217 + -1.97316237546933e-19);
		fConst256 = (((((fConst220 + 8.2437462461250896e-17) * fConst0) + 1.3322820215578901e-13) * fConst0) + 4.3324455451971698e-11);
		fConst257 = (((((fConst222 + 2.0843288146958798e-15) * fConst0) + 1.24048803172573e-12) * fConst0) + 1.4949606703555901e-10);
		fConst258 = ((((fConst224 + 9.5943542569887604e-16) * fConst0) + 1.49496067035559e-13) * fConst0);
		fConst259 = (((((-1.50226833524732e-17 - fConst226) * fConst0) + 2.1503600946781501e-14) * fConst0) + 3.8689458342535904e-12);
		fConst260 = ((((-2.3985885642471902e-17 - fConst228) * fConst0) + -3.7374016758889698e-15) * fConst0);
		fConst261 = (((((-4.0868560062027498e-17 - fConst220) * fConst0) + -1.4327789729074599e-14) * fConst0) + -1.3154415836462201e-12);
		fConst262 = (((-4.2157271872694102e-16 - fConst222) * fConst0) + -5.26176633458489e-14);
		fConst263 = ((-5.2617663345848902e-17 - fConst232) * fConst0);
		fConst264 = (((fConst234 + -6.9086991973099603e-18) * fConst0) + -1.3154415836462201e-15);
		fConst265 = ((fConst236 + 1.31544158364622e-18) * fConst0);
		fConst266 = (9.5570514288332192e-19 * fConst0);
		fConst267 = (((fConst266 + 9.3524491924912197e-15) * fConst0) + 1.60019599704729e-11);
		fConst268 = (3.8228205715332897e-17 * fConst0);
		fConst269 = (((fConst268 + 3.7409796769964898e-13) * fConst0) + 6.4007839881891495e-10);
		fConst270 = (3.30051659809705e-20 * fConst0);
		fConst271 = ((((fConst270 + 3.3452948486357102e-16) * fConst0) + 6.4007839881891505e-13) * fConst0);
		fConst272 = (8.2512914952426401e-22 * fConst0);
		fConst273 = (((((fConst272 + 9.0577902777544703e-18) * fConst0) + 2.3306529705543698e-14) * fConst0) + 1.54757833370144e-11);
		fConst274 = ((((-8.3632371215892598e-18 - fConst272) * fConst0) + -1.60019599704729e-14) * fConst0);
		fConst275 = (0.80000000000000004 * fConst0);
		fConst276 = (1.0860285714583199e-18 * fConst0);
		fConst277 = (fConst276 + 2.4002939955709301e-15);
		fConst278 = (4.3441142858332801e-17 * fConst0);
		fConst279 = (fConst278 + 9.6011759822837199e-14);
		fConst280 = (3.7505870432921099e-20 * fConst0);
		fConst281 = ((fConst280 + 9.6011759822837196e-17) * fConst0);
		fConst282 = (9.3764676082302696e-22 * fConst0);
		fConst283 = (((fConst282 + 3.1895589457586598e-18) * fConst0) + 2.3213675005521602e-15);
		fConst284 = ((-2.4002939955709301e-18 - fConst282) * fConst0);
		fConst285 = (((fConst89 + 2.9676362127058699e-18) * fConst0) + 7.8926495018773305e-16);
		fConst286 = (((((fConst190 + 1.25036405762007e-17) * fConst0) + 2.04787945742043e-14) * fConst0) + 5.2617663345848899e-12);
		fConst287 = (fConst186 + 3.95684828360783e-16);
		fConst288 = (-9.8921207090195698e-18 - fConst190);
		fConst289 = (1.91141028576664e-18 * fConst8);
		fConst290 = (3.2003919940945702e-11 - fConst289);
		fConst291 = (7.6456411430665794e-17 * fConst8);
		fConst292 = (1.2801567976378299e-09 - fConst291);
		fConst293 = (1.32020663923882e-19 * fConst0);
		fConst294 = ((-6.6905896972714096e-16 - fConst293) * fConst8);
		fConst295 = (3.30051659809705e-21 * fConst0);
		fConst296 = (((-1.8115580555508901e-17 - fConst295) * fConst8) + 3.09515666740288e-11);
		fConst297 = ((fConst295 + 1.6726474243178501e-17) * fConst8);
		fConst298 = (0.80000000000000004 * fConst8);
		fConst299 = (1.5002348173168399e-19 * fConst0);
		fConst300 = (-1.92023519645674e-16 - fConst299);
		fConst301 = (3.7505870432921101e-21 * fConst0);
		fConst302 = (-6.3791178915173296e-18 - fConst301);
		fConst303 = (fConst301 + 4.8005879911418603e-18);
		fConst304 = (-5.9352724254117399e-18 - fConst79);
		fConst305 = (((-2.5007281152401501e-17 - fConst73) * fConst8) + 1.0523532669169799e-11);
		fConst306 = (-7.9136965672156502e-16 - fConst69);
		fConst307 = (fConst73 + 1.97842414180391e-17);
		fConst308 = ((1.98030995885823e-19 * fConst8) + -1.2801567976378301e-12);
		fConst309 = (4.9507748971455798e-21 * fConst8);
		fConst310 = (fConst309 + -4.6613059411087302e-14);
		fConst311 = (3.2003919940945699e-14 - fConst309);
		fConst312 = (2.2503522259752602e-19 * fConst8);
		fConst313 = (((5.6258805649381602e-21 * fConst8) + -4.6427350011043101e-15) * fConst8);
		fConst314 = (0.0 - (5.6258805649381602e-21 * fConst105));
		fConst315 = (fConst131 + -1.57852990037547e-15);
		fConst316 = (fConst127 + -4.09575891484087e-14);
		fConst317 = (fConst289 + -3.2003919940945702e-11);
		fConst318 = (fConst291 + -1.2801567976378299e-09);
		fConst319 = ((6.6905896972714096e-16 - fConst293) * fConst8);
		fConst320 = (((1.8115580555508901e-17 - fConst295) * fConst8) + -3.09515666740288e-11);
		fConst321 = ((fConst295 + -1.6726474243178501e-17) * fConst8);
		fConst322 = (1.92023519645674e-16 - fConst299);
		fConst323 = (6.3791178915173296e-18 - fConst301);
		fConst324 = (fConst301 + -4.8005879911418603e-18);
		fConst325 = (5.9352724254117399e-18 - fConst79);
		fConst326 = (((2.5007281152401501e-17 - fConst73) * fConst8) + -1.0523532669169799e-11);
		fConst327 = (7.9136965672156502e-16 - fConst69);
		fConst328 = (fConst73 + -1.97842414180391e-17);
		fConst329 = (((9.3524491924912197e-15 - fConst266) * fConst0) + -1.60019599704729e-11);
		fConst330 = (((3.7409796769964898e-13 - fConst268) * fConst0) + -6.4007839881891495e-10);
		fConst331 = ((((fConst270 + -3.3452948486357102e-16) * fConst0) + 6.4007839881891505e-13) * fConst0);
		fConst332 = (((((fConst272 + -9.0577902777544703e-18) * fConst0) + 2.3306529705543698e-14) * fConst0) + -1.54757833370144e-11);
		fConst333 = ((((8.3632371215892598e-18 - fConst272) * fConst0) + -1.60019599704729e-14) * fConst0);
		fConst334 = (2.4002939955709301e-15 - fConst276);
		fConst335 = (9.6011759822837199e-14 - fConst278);
		fConst336 = ((fConst280 + -9.6011759822837196e-17) * fConst0);
		fConst337 = (((fConst282 + -3.1895589457586598e-18) * fConst0) + 2.3213675005521602e-15);
		fConst338 = ((2.4002939955709301e-18 - fConst282) * fConst0);
		fConst339 = (((fConst89 + -2.9676362127058699e-18) * fConst0) + 7.8926495018773305e-16);
		fConst340 = (((((fConst190 + -1.25036405762007e-17) * fConst0) + 2.04787945742043e-14) * fConst0) + -5.2617663345848899e-12);
		fConst341 = (fConst186 + -3.95684828360783e-16);
		fConst342 = (9.8921207090195698e-18 - fConst190);
		fConst343 = (1.81647124203455e-07 - (8.6714081178921499e-10 * fConst8));
		fConst344 = (((fConst6 + -2.1951958234628299e-08) * fConst0) + 9.0823562101727498e-08);
		fConst345 = (2.8246147596833602e-10 * fConst8);
		fConst346 = ((0.0045968217295597903 - fConst1) / fConst2);
		fConst347 = (fConst4 + -0.123708458051269);
		
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
		ui_interface->openVerticalBox("mesa_dual_rect_red");
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
			double fTemp0 = ((fConst0 * (fConst42 + (fRec8[0] * (fConst43 + (fConst44 * fRec8[0]))))) + 1.67123323036951e-09);
			fRec9[0] = ((0.02 * (fRec10[0] * double(input0[i]))) - ((((((fRec9[1] * ((fConst0 * (fConst22 + (fRec8[0] * (fConst24 + (fConst25 * fRec8[0]))))) + 8.3561661518475506e-09)) + (fRec9[2] * ((fConst0 * (fConst27 + (fRec8[0] * (fConst29 + (fConst30 * fRec8[0]))))) + 1.6712332303695101e-08))) + (fRec9[3] * ((fConst0 * (fConst31 + (fRec8[0] * (fConst32 + (fConst33 * fRec8[0]))))) + 1.6712332303695101e-08))) + (fRec9[4] * ((fConst0 * (fConst34 + (fRec8[0] * (fConst35 + (fConst36 * fRec8[0]))))) + 8.3561661518475506e-09))) + (fRec9[5] * ((fConst0 * (fConst38 + (fRec8[0] * (fConst40 + (fConst41 * fRec8[0]))))) + 1.67123323036951e-09))) / fTemp0));
			double fTemp1 = (fConst0 * ((fRec8[0] * ((((((fRec9[0] * (fConst46 + (fConst47 * fRec8[0]))) + (fRec9[1] * (fConst49 + (fConst50 * fRec8[0])))) + (fRec9[2] * (fConst52 + (fConst53 * fRec8[0])))) + (fRec9[3] * (fConst54 + (fConst55 * fRec8[0])))) + (fRec9[4] * (fConst56 + (fConst57 * fRec8[0])))) + (fRec9[5] * (fConst58 + (fConst59 * fRec8[0]))))) / fTemp0));
			fRec7[0] = ((0.69999999999999996 * (int(signbit(double(fTemp1)))?double(s01_stage1_negclip(double(fTemp1))):double(s01_stage1clip(double(fTemp1))))) - (fConst60 * ((fConst61 * fRec7[1]) + (fConst62 * fRec7[2]))));
			double fTemp2 = ((fConst20 * fRec7[1]) + (fConst60 * ((fConst64 * fRec7[0]) + (fConst65 * fRec7[2]))));
			fRec6[0] = ((1.05 * (int(signbit(double(fTemp2)))?double(s02_stage2_negclip(double(fTemp2))):double(s02_stage2clip(double(fTemp2))))) - (fConst66 * fRec6[1]));
			double fTemp3 = (fConst17 * (fRec6[0] + fRec6[1]));
			fRec5[0] = ((3.2000000000000002 * (int(signbit(double(fTemp3)))?double(s03_stage3_negclip(double(fTemp3))):double(s03_stage3clip(double(fTemp3))))) - (fConst67 * fRec5[1]));
			double fTemp4 = (fConst12 * ((fConst14 * fRec5[0]) + (fConst68 * fRec5[1])));
			fRec11[0] = (fSlow4 + (0.999 * fRec11[1]));
			fRec12[0] = (fSlow5 + (0.999 * fRec12[1]));
			fRec13[0] = (fSlow6 + (0.999 * fRec13[1]));
			double fTemp5 = (fConst102 * fRec12[0]);
			double fTemp6 = (fConst106 * fRec12[0]);
			double fTemp7 = (fConst215 * fRec12[0]);
			double fTemp8 = (fConst219 * fRec12[0]);
			double fTemp9 = (((((fRec11[0] * ((fConst0 * (fConst238 + (fConst239 * fRec12[0]))) + 1.5475783337014401e-08)) + (fConst0 * (fConst240 + (fRec12[0] * (fConst241 + (fConst242 * fRec12[0])))))) + (0.80000000000000004 * ((fConst0 * ((fConst243 + (fRec11[0] * (fConst244 + (fConst245 * fRec12[0])))) + (fConst0 * (fRec12[0] * (fConst246 + (fConst247 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * ((fConst248 + (fConst0 * (fRec11[0] * (fConst249 + (fConst250 * fRec12[0]))))) + (fConst0 * (fRec12[0] * (fConst251 + (fConst252 * fRec12[0])))))) + (fRec13[0] * ((fRec11[0] * (fConst253 + fTemp7)) + (fConst8 * (fConst254 + (fConst0 * (fRec12[0] * (fConst255 + fTemp8)))))))))))) + (fRec13[0] * ((fConst0 * (((fConst256 + (fRec11[0] * (fConst257 + (fConst258 * fRec12[0])))) + (fRec12[0] * (fConst259 + (fConst260 * fRec12[0])))) + (fRec13[0] * ((fConst261 + (fConst0 * (fRec11[0] * (fConst262 + (fConst263 * fRec12[0]))))) + (fConst0 * (fRec12[0] * (fConst264 + (fConst265 * fRec12[0])))))))) + 3.8689458342535904e-09))) + 1.5862677920439699e-08);
			fRec4[0] = ((int(signbit(double(fTemp4)))?double(s04_stage4_negclip(double(fTemp4))):double(s04_stage4clip(double(fTemp4)))) - (((((fRec4[1] * (((((fRec11[0] * ((fConst0 * (fConst70 + (fConst72 * fRec12[0]))) + 6.1903133348057499e-08)) + (fConst0 * (fConst74 + (fRec12[0] * (fConst76 + (fConst78 * fRec12[0])))))) + (0.80000000000000004 * ((fConst0 * ((fConst80 + (fRec11[0] * (fConst82 + (fConst84 * fRec12[0])))) + (fConst8 * (fRec12[0] * (fConst86 + (fConst88 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * ((fConst90 + (fConst8 * (fRec11[0] * (fConst92 + (fConst94 * fRec12[0]))))) + (fConst8 * (fRec12[0] * (fConst96 + (fConst98 * fRec12[0])))))) + (fRec13[0] * ((fConst99 * (fConst100 + (fRec11[0] * (fConst101 + fTemp5)))) + (fRec12[0] * (fConst104 + fTemp6))))))))) + (fRec13[0] * ((fConst0 * (((fConst108 + (fRec11[0] * (fConst110 + (fConst112 * fRec12[0])))) + (fRec12[0] * (fConst114 + (fConst116 * fRec12[0])))) + (fRec13[0] * ((fConst117 + (fConst8 * (fRec11[0] * (fConst118 + (fConst120 * fRec12[0]))))) + (fConst8 * (fRec12[0] * (fConst122 + (fConst124 * fRec12[0])))))))) + 1.5475783337014401e-08))) + 6.3450711681759006e-08)) + (fRec4[2] * (((((fRec11[0] * ((fConst8 * (fConst125 + (fConst126 * fRec12[0]))) + 9.2854700022086295e-08)) + (fConst8 * (fConst128 + (fRec12[0] * (fConst129 + (fConst130 * fRec12[0])))))) + (0.80000000000000004 * ((fConst8 * ((fConst132 + (fRec11[0] * (fConst133 + (fConst134 * fRec12[0])))) + (fRec12[0] * (fConst135 + (fConst136 * fRec12[0]))))) + (fRec13[0] * (((fConst8 * (fConst138 + (fRec11[0] * (fConst139 + (fConst140 * fRec12[0]))))) + (fRec12[0] * (fConst141 + (fConst142 * fRec12[0])))) + (fRec13[0] * ((fRec11[0] * ((fConst143 * fRec12[0]) - fConst144)) + (fConst8 * (fConst145 + (fConst8 * (fRec12[0] * ((1.1838974252815999e-21 * fRec12[0]) + 1.0418297342478e-21)))))))))))) + (fRec13[0] * (((fConst8 * ((fConst147 + (fRec11[0] * (fConst149 + (fConst150 * fRec12[0])))) + (fRec12[0] * (fConst151 + (fConst152 * fRec12[0]))))) + (fRec13[0] * ((fRec11[0] * (fConst153 + (fConst154 * fRec12[0]))) + (fConst8 * (fConst155 + (fRec12[0] * (fConst156 + (fConst157 * fRec12[0])))))))) + 2.32136750055216e-08))) + 9.5176067522638396e-08))) + (fRec4[3] * (((((fRec11[0] * ((fConst0 * (fConst158 + (fConst159 * fRec12[0]))) + 6.1903133348057499e-08)) + (fConst0 * (fConst160 + (fRec12[0] * (fConst161 + (fConst162 * fRec12[0])))))) + (0.80000000000000004 * ((fConst0 * ((fConst163 + (fRec11[0] * (fConst164 + (fConst165 * fRec12[0])))) + (fConst8 * (fRec12[0] * (fConst166 + (fConst167 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * ((fConst168 + (fConst8 * (fRec11[0] * (fConst169 + (fConst170 * fRec12[0]))))) + (fConst8 * (fRec12[0] * (fConst171 + (fConst172 * fRec12[0])))))) + (fRec13[0] * ((fConst99 * (fConst173 + (fRec11[0] * (fConst174 + fTemp5)))) + (fRec12[0] * (fConst175 + fTemp6))))))))) + (fRec13[0] * ((fConst0 * (((fConst176 + (fRec11[0] * (fConst177 + (fConst178 * fRec12[0])))) + (fRec12[0] * (fConst179 + (fConst180 * fRec12[0])))) + (fRec13[0] * ((fConst181 + (fConst8 * (fRec11[0] * (fConst182 + (fConst183 * fRec12[0]))))) + (fConst8 * (fRec12[0] * (fConst184 + (fConst185 * fRec12[0])))))))) + 1.5475783337014401e-08))) + 6.3450711681759006e-08))) + (fRec4[4] * (((((fRec11[0] * ((fConst0 * (fConst187 + (fConst189 * fRec12[0]))) + 1.5475783337014401e-08)) + (fConst0 * (fConst191 + (fRec12[0] * (fConst193 + (fConst195 * fRec12[0])))))) + (0.80000000000000004 * ((fConst0 * ((fConst196 + (fRec11[0] * (fConst197 + (fConst199 * fRec12[0])))) + (fConst0 * (fRec12[0] * (fConst201 + (fConst203 * fRec12[0])))))) + (fRec13[0] * ((fConst0 * ((fConst205 + (fConst0 * (fRec11[0] * (fConst207 + (fConst209 * fRec12[0]))))) + (fConst0 * (fRec12[0] * (fConst211 + (fConst213 * fRec12[0])))))) + (fRec13[0] * ((fRec11[0] * (fConst214 + fTemp7)) + (fConst8 * (fConst216 + (fConst0 * (fRec12[0] * (fConst218 + fTemp8)))))))))))) + (fRec13[0] * ((fConst0 * (((fConst221 + (fRec11[0] * (fConst223 + (fConst225 * fRec12[0])))) + (fRec12[0] * (fConst227 + (fConst229 * fRec12[0])))) + (fRec13[0] * ((fConst230 + (fConst0 * (fRec11[0] * (fConst231 + (fConst233 * fRec12[0]))))) + (fConst0 * (fRec12[0] * (fConst235 + (fConst237 * fRec12[0])))))))) + 3.8689458342535904e-09))) + 1.5862677920439699e-08))) / fTemp9));
			double fTemp10 = (fConst8 * ((5.9352724254117396e-20 * fRec11[0]) - (1.4838181063529399e-21 * fRec12[0])));
			double fTemp11 = (fConst0 * ((0.0 - (2.3741089701647002e-19 * fRec11[0])) + (5.9352724254117402e-21 * fRec12[0])));
			fRec2[0] = ((20.0 * ((fRec3[0] * ((((fConst0 * ((fRec4[0] * ((((fConst267 + (fRec11[0] * (fConst269 + (fConst271 * fRec12[0])))) + (fRec12[0] * (fConst273 + (fConst274 * fRec12[0])))) + (fConst275 * (((fConst277 + (fRec11[0] * (fConst279 + (fConst281 * fRec12[0])))) + (fRec12[0] * (fConst283 + (fConst284 * fRec12[0])))) + (fRec13[0] * (fConst285 + fTemp10))))) + (fRec13[0] * (fConst286 + (fConst8 * ((fConst287 * fRec11[0]) + (fConst288 * fRec12[0]))))))) + (fRec4[1] * ((((fConst290 + (fRec11[0] * (fConst292 + (fConst294 * fRec12[0])))) + (fRec12[0] * (fConst296 + (fConst297 * fRec12[0])))) + (fConst298 * ((((fRec11[0] * ((fConst300 * fRec12[0]) + -8.6882285716665602e-17)) + -2.1720571429166398e-18) + (fRec12[0] * (fConst302 + (fConst303 * fRec12[0])))) + (fRec13[0] * (fConst304 + fTemp11))))) + (fRec13[0] * (fConst305 + (fConst8 * ((fConst306 * fRec11[0]) + (fConst307 * fRec12[0]))))))))) + (fRec4[2] * (((fConst8 * (((fRec11[0] * ((fConst308 * fRec12[0]) + -7.4819593539929795e-13)) + -1.8704898384982401e-14) + (fRec12[0] * (fConst310 + (fConst311 * fRec12[0]))))) + (0.80000000000000004 * (((fConst8 * ((fRec11[0] * ((fConst312 * fRec12[0]) + -1.9202351964567399e-13)) + -4.8005879911418601e-15)) + (fRec12[0] * (fConst313 + (fConst314 * fRec12[0])))) + (fConst8 * (fRec13[0] * (fConst315 + (fConst8 * ((3.5611634552470399e-19 * fRec11[0]) - (8.9029086381176103e-21 * fRec12[0]))))))))) + (fConst8 * (fRec13[0] * (fConst316 + (fConst8 * ((3.1338238406174001e-19 * fRec11[0]) - (7.8345596015435003e-21 * fRec12[0]))))))))) + (fConst0 * (fRec4[3] * ((((fConst317 + (fRec11[0] * (fConst318 + (fConst319 * fRec12[0])))) + (fRec12[0] * (fConst320 + (fConst321 * fRec12[0])))) + (fConst298 * ((((fRec11[0] * ((fConst322 * fRec12[0]) + 8.6882285716665602e-17)) + 2.1720571429166398e-18) + (fRec12[0] * (fConst323 + (fConst324 * fRec12[0])))) + (fRec13[0] * (fConst325 + fTemp11))))) + (fRec13[0] * (fConst326 + (fConst8 * ((fConst327 * fRec11[0]) + (fConst328 * fRec12[0]))))))))) + (fConst0 * (fRec4[4] * ((((fConst329 + (fRec11[0] * (fConst330 + (fConst331 * fRec12[0])))) + (fRec12[0] * (fConst332 + (fConst333 * fRec12[0])))) + (fConst275 * (((fConst334 + (fRec11[0] * (fConst335 + (fConst336 * fRec12[0])))) + (fRec12[0] * (fConst337 + (fConst338 * fRec12[0])))) + (fRec13[0] * (fConst339 + fTemp10))))) + (fRec13[0] * (fConst340 + (fConst8 * ((fConst341 * fRec11[0]) + (fConst342 * fRec12[0])))))))))) / fTemp9)) - (fConst7 * ((fConst343 * fRec2[1]) + (fConst344 * fRec2[2]))));
			double fTemp12 = (fConst7 * (((fConst9 * fRec2[1]) + (fConst345 * fRec2[0])) + (fConst345 * fRec2[2])));
			fRec1[0] = ((8.0 * (int(signbit(double(fTemp12)))?double(s06_stage5_negclip(double(fTemp12))):double(s06_stage5clip(double(fTemp12))))) - (fConst346 * fRec1[1]));
			double fTemp13 = (fConst3 * ((fConst5 * fRec1[0]) + (fConst347 * fRec1[1])));
			output0[i] = FAUSTFLOAT((0.02 * (fRec0[0] * (int(signbit(double(fTemp13)))?double(s07_stage6_negclip(double(fTemp13))):double(s07_stage6clip(double(fTemp13)))))));
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
} /* namespace ampsim_mesa_dual_rect_red */

