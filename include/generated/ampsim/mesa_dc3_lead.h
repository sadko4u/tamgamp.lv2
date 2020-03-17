namespace ampsim_mesa_dc3_lead {

#include <generated/stage/mesa_dc3_lead/c01_stage1_neg_table.h>
#include <generated/stage/mesa_dc3_lead/c01_stage1_table.h>
#include <generated/stage/mesa_dc3_lead/c02_stage2_neg_table.h>
#include <generated/stage/mesa_dc3_lead/c02_stage2_table.h>
#include <generated/stage/mesa_dc3_lead/c03_stage3_neg_table.h>
#include <generated/stage/mesa_dc3_lead/c03_stage3_table.h>
#include <generated/stage/mesa_dc3_lead/c04_stage4_neg_table.h>
#include <generated/stage/mesa_dc3_lead/c04_stage4_table.h>
#include <generated/stage/mesa_dc3_lead/c06_stage5_neg_table.h>
#include <generated/stage/mesa_dc3_lead/c06_stage5_table.h>
/* ------------------------------------------------------------
name: "mesa_dc3_lead"
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
static double module_faustpower3_f(double value) {
	return ((value * value) * value);
	
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
	FAUSTFLOAT fVslider1;
	double fRec2[2];
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	FAUSTFLOAT fVslider2;
	double fRec5[2];
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	FAUSTFLOAT fVslider3;
	double fRec9[2];
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fRec8[4];
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
	double fRec7[6];
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
	double fRec6[3];
	double fConst57;
	double fConst58;
	double fConst59;
	double fRec4[2];
	double fConst60;
	double fConst61;
	double fConst62;
	FAUSTFLOAT fVslider4;
	double fRec10[2];
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	FAUSTFLOAT fVslider5;
	double fRec11[2];
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
	double fConst89;
	double fConst90;
	FAUSTFLOAT fVslider6;
	double fRec12[2];
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
	double fRec3[5];
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
	double fConst345;
	double fConst346;
	double fConst347;
	double fConst348;
	double fConst349;
	double fConst350;
	double fConst351;
	double fConst352;
	double fConst353;
	double fConst354;
	double fConst355;
	double fConst356;
	double fRec1[3];
	double fConst357;
	double fConst358;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "mesa_dc3_lead");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "mesa_dc3_lead");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "mesa_dc3_lead");
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
		fConst1 = (4.60626343739698e-10 * fConst0);
		fConst2 = (3.1926925652929403e-11 * fConst0);
		fConst3 = (6.6381515120430502e-11 * fConst0);
		fConst4 = ((((fConst1 + 3.1538915146385902e-07) + ((-4.2330213938630297e-08 - fConst2) + (-3.3320827196341303e-08 - fConst3))) * fConst0) + 7.7984914714842852e-06);
		fConst5 = (fConst0 / fConst4);
		fConst6 = (4.43030830836957e-10 * fConst0);
		fConst7 = (1.4176986586782601e-09 * fConst0);
		fConst8 = ((fConst6 + 1.4767694361232e-07) + (-4.7256621955942301e-07 - fConst7));
		fConst9 = (2.0561376490966301e-05 * fConst0);
		fConst10 = (fConst9 + 0.0130539284336177);
		fConst11 = (1.0 / fConst10);
		fConst12 = (0.00083568729963321895 * fConst0);
		fConst13 = (-0.27856243321107499 - fConst12);
		fConst14 = (4.2973874663027099e-10 * fConst0);
		fConst15 = (((fConst14 + 2.05792195263156e-07) * fConst0) + 3.9023912239994999e-06);
		fConst16 = (fConst0 / fConst15);
		fConst17 = (2.3819226818044001e-08 * fConst0);
		fConst18 = (-5.4011852195111504e-06 - fConst17);
		fConst19 = (3.3429350102670698e-24 * fConst0);
		fConst20 = (((((((((fConst19 + 2.6476885876146501e-20) * fConst0) + 6.7804757508827606e-17) * fConst0) + 6.8045650184315897e-14) * fConst0) + 2.3514292335315e-11) * fConst0) + 3.9624567808715501e-10);
		fConst21 = (fConst0 / fConst20);
		fConst22 = (1.38696009917964e-19 * fConst0);
		fConst23 = (((((-7.07691453407809e-16 - fConst22) * fConst0) + -8.1745840557939696e-13) * fConst0) + -1.9899064073737199e-10);
		fConst24 = (8.89942320144513e-15 * fConst0);
		fConst25 = (((((fConst24 + 6.8285039870336302e-12) * fConst0) + 1.29352204274063e-09) * fConst0) + 2.7061602658254e-08);
		fConst26 = (fConst0 / fConst25);
		fConst27 = (3.39648147814414e-13 * fConst0);
		fConst28 = (((-1.41446620976163e-10 - fConst27) * fConst0) + -6.5627781986686803e-09);
		fConst29 = (1.0 / fConst25);
		fConst30 = (2.6698269604335401e-14 * fConst0);
		fConst31 = (((((-6.8285039870336302e-12 - fConst30) * fConst0) + 1.29352204274063e-09) * fConst0) + 8.1184807974762098e-08);
		fConst32 = (((((fConst30 + -6.8285039870336302e-12) * fConst0) + -1.29352204274063e-09) * fConst0) + 8.1184807974762098e-08);
		fConst33 = (((((6.8285039870336302e-12 - fConst24) * fConst0) + -1.29352204274063e-09) * fConst0) + 2.7061602658254e-08);
		fConst34 = (1.01894444344324e-12 * fConst0);
		fConst35 = (((fConst34 + 1.41446620976163e-10) * fConst0) + -6.5627781986686803e-09);
		fConst36 = (((1.41446620976163e-10 - fConst34) * fConst0) + 6.5627781986686803e-09);
		fConst37 = (((fConst27 + -1.41446620976163e-10) * fConst0) + 6.5627781986686803e-09);
		fConst38 = (1.0 / fConst20);
		fConst39 = (1.6714675051335401e-23 * fConst0);
		fConst40 = (((((((((-7.9430657628439503e-20 - fConst39) * fConst0) + -6.7804757508827606e-17) * fConst0) + 6.8045650184315897e-14) * fConst0) + 7.0542877005944995e-11) * fConst0) + 1.9812283904357801e-09);
		fConst41 = (3.3429350102670703e-23 * fConst0);
		fConst42 = (((((((((fConst41 + 5.2953771752293002e-20) * fConst0) + -1.3560951501765499e-16) * fConst0) + -1.36091300368632e-13) * fConst0) + 4.7028584670630001e-11) * fConst0) + 3.9624567808715503e-09);
		fConst43 = (((((((((5.2953771752293002e-20 - fConst41) * fConst0) + 1.3560951501765499e-16) * fConst0) + -1.36091300368632e-13) * fConst0) + -4.7028584670630001e-11) * fConst0) + 3.9624567808715503e-09);
		fConst44 = (((((((((fConst39 + -7.9430657628439503e-20) * fConst0) + 6.7804757508827606e-17) * fConst0) + 6.8045650184315897e-14) * fConst0) + -7.0542877005944995e-11) * fConst0) + 1.9812283904357801e-09);
		fConst45 = (((((((((2.6476885876146501e-20 - fConst19) * fConst0) + -6.7804757508827606e-17) * fConst0) + 6.8045650184315897e-14) * fConst0) + -2.3514292335315e-11) * fConst0) + 3.9624567808715501e-10);
		fConst46 = (4.1608802975389199e-19 * fConst0);
		fConst47 = (((((fConst46 + 7.07691453407809e-16) * fConst0) + -8.1745840557939696e-13) * fConst0) + -5.9697192221211498e-10);
		fConst48 = (2.7739201983592799e-19 * fConst0);
		fConst49 = (((((1.41538290681562e-15 - fConst48) * fConst0) + 1.6349168111587901e-12) * fConst0) + -3.9798128147474399e-10);
		fConst50 = (((((-1.41538290681562e-15 - fConst48) * fConst0) + 1.6349168111587901e-12) * fConst0) + 3.9798128147474399e-10);
		fConst51 = (((((fConst46 + -7.07691453407809e-16) * fConst0) + -8.1745840557939696e-13) * fConst0) + 5.9697192221211498e-10);
		fConst52 = (((((7.07691453407809e-16 - fConst22) * fConst0) + -8.1745840557939696e-13) * fConst0) + 1.9899064073737199e-10);
		fConst53 = (1.0 / fConst15);
		fConst54 = module_faustpower2_f(fConst0);
		fConst55 = (7.8047824479990099e-06 - (8.5947749326054197e-10 * fConst54));
		fConst56 = (((fConst14 + -2.05792195263156e-07) * fConst0) + 3.9023912239994999e-06);
		fConst57 = (4.7638453636088102e-08 * fConst0);
		fConst58 = (5.4011852195111504e-06 - fConst17);
		fConst59 = ((0.0130539284336177 - fConst9) / fConst10);
		fConst60 = (fConst12 + -0.27856243321107499);
		fConst61 = (1.04282314866313e-14 * fConst54);
		fConst62 = (((1.9690621774898601e-08 - fConst61) * fConst0) + 2.3272215784066398e-06);
		fConst63 = (3.2299340726752099e-16 * fConst54);
		fConst64 = (2.4700315305655599e-09 - fConst63);
		fConst65 = (3.2299340726752099e-20 * fConst0);
		fConst66 = (((-9.5562373863090801e-17 - fConst65) * fConst54) + 1.5417842956944001e-11);
		fConst67 = (1.0428231486631299e-18 * fConst0);
		fConst68 = (((-2.3702193242892799e-15 - fConst67) * fConst54) + 5.8180539460165997e-11);
		fConst69 = (8.5699022353965707e-21 * fConst0);
		fConst70 = (((fConst69 + 2.52311685110196e-17) * fConst54) + -4.0144572227514503e-12);
		fConst71 = (2.76355961307342e-19 * fConst0);
		fConst72 = (((fConst71 + 6.2197323904495799e-16) * fConst54) + -1.1636107892033201e-11);
		fConst73 = (1.1242807445282501e-16 * fConst54);
		fConst74 = (fConst73 + 3.0835685913887999e-10);
		fConst75 = (4.6628211544955401e-15 * fConst54);
		fConst76 = (1.1636107892033201e-09 - fConst75);
		fConst77 = (1.12428074452825e-20 * fConst0);
		fConst78 = (fConst77 + 2.28620429808722e-17);
		fConst79 = (4.6628211544955399e-19 * fConst0);
		fConst80 = (-7.7787381258241896e-16 - fConst79);
		fConst81 = (3.1571087932664499e-21 * fConst0);
		fConst82 = (-6.4388403020565698e-18 - fConst81);
		fConst83 = (1.17980825138903e-19 * fConst0);
		fConst84 = (fConst83 + 1.93741196402353e-16);
		fConst85 = (1.1657052886238901e-16 * fConst54);
		fConst86 = (fConst85 + -2.9090269730082999e-11);
		fConst87 = (1.16570528862389e-20 * fConst0);
		fConst88 = (fConst87 + 1.94468453145605e-17);
		fConst89 = (2.9495206284725699e-21 * fConst0);
		fConst90 = (-4.8435299100588201e-18 - fConst89);
		fConst91 = (3.1671623904851599e-16 * fConst54);
		fConst92 = (2.3438030321527898e-09 - fConst91);
		fConst93 = (1.00733320577016e-14 * fConst54);
		fConst94 = (1.1345205194732401e-08 - fConst93);
		fConst95 = (3.1671623904851597e-20 * fConst0);
		fConst96 = (((-9.06359715926249e-17 - fConst95) * fConst54) + 1.4545134865041499e-11);
		fConst97 = (1.00733320577016e-18 * fConst0);
		fConst98 = ((-2.1126517488775501e-15 - fConst97) * fConst54);
		fConst99 = (6.3343247809703202e-21 * fConst0);
		fConst100 = (((fConst99 + 1.8127194318524999e-17) * fConst54) + -2.9090269730083002e-12);
		fConst101 = (2.0146664115403101e-19 * fConst0);
		fConst102 = ((fConst101 + 4.2253034977550899e-16) * fConst54);
		fConst103 = (1.8966855864014101e-16 * fConst54);
		fConst104 = (fConst103 + 2.9090269730083003e-10);
		fConst105 = (1.8966855864014099e-20 * fConst0);
		fConst106 = (fConst105 + 2.9890252147660301e-17);
		fConst107 = (1.9548661258615801e-19 * fConst0);
		fConst108 = (-5.67260259736618e-16 - fConst107);
		fConst109 = (3.7933711728028198e-21 * fConst0);
		fConst110 = (-5.97805042953205e-18 - fConst109);
		fConst111 = (3.9097322517231499e-20 * fConst0);
		fConst112 = (fConst111 + 1.13452051947324e-16);
		fConst113 = (4.8871653146539397e-21 * fConst0);
		fConst114 = (fConst113 + 1.41815064934155e-17);
		fConst115 = (9.7743306293078809e-22 * fConst0);
		fConst116 = (-2.83630129868309e-18 - fConst115);
		fConst117 = (3.2320453280911399e-16 * fConst54);
		fConst118 = (fConst117 + -7.2725674325207506e-11);
		fConst119 = (1.03328638081255e-14 * fConst54);
		fConst120 = (3.2320453280911402e-20 * fConst0);
		fConst121 = (fConst120 + 2.8479374065751202e-17);
		fConst122 = (1.03328638081255e-18 * fConst0);
		fConst123 = (fConst122 + 1.4545134865041499e-16);
		fConst124 = (6.4640906561822802e-21 * fConst0);
		fConst125 = (-5.6958748131502501e-18 - fConst124);
		fConst126 = (2.0665727616250899e-19 * fConst0);
		fConst127 = (-2.9090269730082998e-17 - fConst126);
		fConst128 = (1.6581453746147299e-20 * fConst0);
		fConst129 = (3.6362837162603701e-18 - fConst128);
		fConst130 = (2.9090269730083e-19 * fConst0);
		fConst131 = (3.3162907492294599e-21 * fConst0);
		fConst132 = (fConst131 + -7.2725674325207399e-19);
		fConst133 = (3.4908323676099602e-06 - (4.74043864857856e-11 * fConst54));
		fConst134 = ((4.84490110901281e-20 * fConst54) + -1.2350157652827801e-13);
		fConst135 = ((1.5642347229947e-18 * fConst54) + -9.845310887449281e-13);
		fConst136 = (3.22470294401127e-14 - (1.28548533530949e-20 * fConst54));
		fConst137 = (2.3507265163485502e-13 - (4.1453394196101399e-19 * fConst54));
		fConst138 = (-1.5417842956943999e-14 - (1.6864211167923701e-20 * fConst54));
		fConst139 = ((6.9942317317433099e-19 * fConst54) + -5.8180539460166e-14);
		fConst140 = ((4.7356631898996701e-21 * fConst54) + 4.0144572227514497e-15);
		fConst141 = (1.1636107892033201e-14 - (1.7697123770835401e-19 * fConst54));
		fConst142 = (1.4545134865041501e-15 - (1.7485579329358301e-20 * fConst54));
		fConst143 = ((4.4242809427088599e-21 * fConst54) + -2.9090269730082999e-16);
		fConst144 = ((4.7507435857277402e-20 * fConst54) + -1.1719015160763899e-13);
		fConst145 = ((1.5109998086552299e-18 * fConst54) + -5.6726025973661798e-13);
		fConst146 = (2.3438030321527901e-14 - (9.5014871714554898e-21 * fConst54));
		fConst147 = (1.13452051947324e-13 - (3.0219996173104701e-19 * fConst54));
		fConst148 = (-1.45451348650415e-14 - (2.84502837960212e-20 * fConst54));
		fConst149 = (2.9322991887923601e-19 * fConst54);
		fConst150 = ((5.6900567592042298e-21 * fConst54) + 2.9090269730083002e-15);
		fConst151 = (3.6362837162603703e-15 - (4.8480679921367098e-20 * fConst54));
		fConst152 = ((9.6961359842734195e-21 * fConst54) + -7.2725674325207504e-16);
		fConst153 = (3.0998591424376399e-19 * fConst54);
		fConst154 = module_faustpower4_f(fConst0);
		fConst155 = (1.0908851148781099e-20 * fConst154);
		fConst156 = (0.0 - (2.1817702297562198e-21 * fConst154));
		fConst157 = (((fConst61 + -1.9690621774898601e-08) * fConst0) + 2.3272215784066398e-06);
		fConst158 = (fConst63 + -2.4700315305655599e-09);
		fConst159 = (((9.5562373863090801e-17 - fConst65) * fConst54) + -1.5417842956944001e-11);
		fConst160 = (((2.3702193242892799e-15 - fConst67) * fConst54) + -5.8180539460165997e-11);
		fConst161 = (((fConst69 + -2.52311685110196e-17) * fConst54) + 4.0144572227514503e-12);
		fConst162 = (((fConst71 + -6.2197323904495799e-16) * fConst54) + 1.1636107892033201e-11);
		fConst163 = (-3.0835685913887999e-10 - fConst73);
		fConst164 = (fConst75 + -1.1636107892033201e-09);
		fConst165 = (fConst77 + -2.28620429808722e-17);
		fConst166 = (7.7787381258241896e-16 - fConst79);
		fConst167 = (6.4388403020565698e-18 - fConst81);
		fConst168 = (fConst83 + -1.93741196402353e-16);
		fConst169 = (2.9090269730082999e-11 - fConst85);
		fConst170 = (fConst87 + -1.94468453145605e-17);
		fConst171 = (4.8435299100588201e-18 - fConst89);
		fConst172 = (fConst91 + -2.3438030321527898e-09);
		fConst173 = (fConst93 + -1.1345205194732401e-08);
		fConst174 = (((9.06359715926249e-17 - fConst95) * fConst54) + -1.4545134865041499e-11);
		fConst175 = ((2.1126517488775501e-15 - fConst97) * fConst54);
		fConst176 = (((fConst99 + -1.8127194318524999e-17) * fConst54) + 2.9090269730083002e-12);
		fConst177 = ((fConst101 + -4.2253034977550899e-16) * fConst54);
		fConst178 = (-2.9090269730083003e-10 - fConst103);
		fConst179 = (1.9548661258615801e-15 * fConst54);
		fConst180 = (fConst105 + -2.9890252147660301e-17);
		fConst181 = (5.67260259736618e-16 - fConst107);
		fConst182 = (5.97805042953205e-18 - fConst109);
		fConst183 = (fConst111 + -1.13452051947324e-16);
		fConst184 = (fConst113 + -1.41815064934155e-17);
		fConst185 = (2.83630129868309e-18 - fConst115);
		fConst186 = (7.2725674325207506e-11 - fConst117);
		fConst187 = (fConst120 + -2.8479374065751202e-17);
		fConst188 = (fConst122 + -1.4545134865041499e-16);
		fConst189 = (5.6958748131502501e-18 - fConst124);
		fConst190 = (2.9090269730082998e-17 - fConst126);
		fConst191 = (-3.6362837162603701e-18 - fConst128);
		fConst192 = (fConst131 + 7.2725674325207399e-19);
		fConst193 = (5.2141157433156601e-15 * fConst0);
		fConst194 = (((((2.37021932428928e-11 - fConst193) * fConst0) + -9.8453108874492792e-09) * fConst0) + 5.8180539460165996e-07);
		fConst195 = (1.6149670363376e-16 * fConst0);
		fConst196 = (((9.5562373863090802e-13 - fConst195) * fConst0) + -1.23501576528278e-09);
		fConst197 = (8.0748351816880201e-21 * fConst0);
		fConst198 = (((((fConst197 + -4.7781186931545401e-17) * fConst0) + 6.1750788264139004e-14) * fConst0) + -7.7089214784719907e-12);
		fConst199 = (2.6070578716578301e-19 * fConst0);
		fConst200 = (((((fConst199 + -1.18510966214464e-15) * fConst0) + 4.9226554437246405e-13) * fConst0) + -2.9090269730082999e-11);
		fConst201 = (2.14247555884914e-21 * fConst0);
		fConst202 = (((((1.26155842555098e-17 - fConst201) * fConst0) + -1.6123514720056299e-14) * fConst0) + 2.00722861137573e-12);
		fConst203 = (6.9088990326835597e-20 * fConst0);
		fConst204 = (((((3.1098661952247899e-16 - fConst203) * fConst0) + -1.1753632581742701e-13) * fConst0) + 5.8180539460166004e-12);
		fConst205 = (5.6214037226412394e-17 * fConst0);
		fConst206 = (((fConst205 + -2.2862042980872198e-13) * fConst0) + -1.5417842956944e-10);
		fConst207 = (2.3314105772477701e-15 * fConst0);
		fConst208 = (((7.7787381258241907e-12 - fConst207) * fConst0) + -5.8180539460166005e-10);
		fConst209 = (2.8107018613206202e-21 * fConst0);
		fConst210 = (((1.14310214904361e-17 - fConst209) * fConst0) + 7.7089214784719902e-15);
		fConst211 = (1.16570528862389e-19 * fConst0);
		fConst212 = (((fConst211 + -3.8893690629120899e-16) * fConst0) + 2.9090269730083e-14);
		fConst213 = (7.8927719831661097e-22 * fConst0);
		fConst214 = (((fConst213 + -3.2194201510282799e-18) * fConst0) + -2.00722861137573e-15);
		fConst215 = (2.9495206284725702e-20 * fConst0);
		fConst216 = (((9.6870598201176304e-17 - fConst215) * fConst0) + -5.8180539460166003e-15);
		fConst217 = (5.8285264431194306e-17 * fConst0);
		fConst218 = (((fConst217 + -1.9446845314560499e-13) * fConst0) + 1.4545134865041499e-11);
		fConst219 = (2.91426322155971e-21 * fConst0);
		fConst220 = (((9.7234226572802408e-18 - fConst219) * fConst0) + -7.2725674325207504e-16);
		fConst221 = (7.3738015711814303e-22 * fConst0);
		fConst222 = (((fConst221 + -2.4217649550294101e-18) * fConst0) + 1.4545134865041499e-16);
		fConst223 = (1.58358119524258e-16 * fConst0);
		fConst224 = (((9.0635971592624897e-13 - fConst223) * fConst0) + -1.17190151607639e-09);
		fConst225 = (5.0366660288507801e-15 * fConst0);
		fConst226 = (((2.11265174887755e-11 - fConst225) * fConst0) + -5.6726025973661796e-09);
		fConst227 = (7.9179059762129099e-21 * fConst0);
		fConst228 = (((((fConst227 + -4.5317985796312499e-17) * fConst0) + 5.8595075803819596e-14) * fConst0) + -7.27256743252074e-12);
		fConst229 = (2.51833301442539e-19 * fConst0);
		fConst230 = ((((fConst229 + -1.0563258744387699e-15) * fConst0) + 2.8363012986830899e-13) * fConst0);
		fConst231 = (1.5835811952425801e-21 * fConst0);
		fConst232 = (((((9.0635971592624903e-18 - fConst231) * fConst0) + -1.17190151607639e-14) * fConst0) + 1.4545134865041501e-12);
		fConst233 = (5.03666602885078e-20 * fConst0);
		fConst234 = ((((2.1126517488775499e-16 - fConst233) * fConst0) + -5.67260259736618e-14) * fConst0);
		fConst235 = (9.4834279320070504e-17 * fConst0);
		fConst236 = (((fConst235 + -2.9890252147660299e-13) * fConst0) + -1.4545134865041501e-10);
		fConst237 = (9.7743306293078809e-16 * fConst0);
		fConst238 = ((5.67260259736618e-12 - fConst237) * fConst0);
		fConst239 = (4.7417139660035301e-21 * fConst0);
		fConst240 = (((1.4945126073830101e-17 - fConst239) * fConst0) + 7.27256743252075e-15);
		fConst241 = (4.88716531465394e-20 * fConst0);
		fConst242 = ((fConst241 + -2.83630129868309e-16) * fConst0);
		fConst243 = (9.4834279320070496e-22 * fConst0);
		fConst244 = (((fConst243 + -2.98902521476603e-18) * fConst0) + -1.4545134865041501e-15);
		fConst245 = (9.7743306293078794e-21 * fConst0);
		fConst246 = ((5.6726025973661803e-17 - fConst245) * fConst0);
		fConst247 = (2.4435826573269701e-17 * fConst0);
		fConst248 = (fConst247 + -1.41815064934155e-13);
		fConst249 = (1.22179132866349e-21 * fConst0);
		fConst250 = (7.09075324670773e-18 - fConst249);
		fConst251 = (2.4435826573269702e-22 * fConst0);
		fConst252 = (fConst251 + -1.41815064934155e-18);
		fConst253 = (1.61602266404557e-16 * fConst0);
		fConst254 = (((fConst253 + -2.84793740657512e-13) * fConst0) + 3.6362837162603701e-11);
		fConst255 = (5.1664319040627396e-15 * fConst0);
		fConst256 = ((fConst255 + -1.4545134865041501e-12) * fConst0);
		fConst257 = (8.0801133202278506e-21 * fConst0);
		fConst258 = (((1.4239687032875601e-17 - fConst257) * fConst0) + -1.8181418581301899e-15);
		fConst259 = (2.5832159520313702e-19 * fConst0);
		fConst260 = ((7.2725674325207398e-17 - fConst259) * fConst0);
		fConst261 = (1.61602266404557e-21 * fConst0);
		fConst262 = (((fConst261 + -2.8479374065751201e-18) * fConst0) + 3.6362837162603698e-16);
		fConst263 = (5.1664319040627398e-20 * fConst0);
		fConst264 = ((fConst263 + -1.4545134865041499e-17) * fConst0);
		fConst265 = (8.2907268730736496e-17 * fConst0);
		fConst266 = (-3.6362837162603698e-14 - fConst265);
		fConst267 = (1.4545134865041501e-15 * fConst0);
		fConst268 = (4.1453634365368203e-21 * fConst0);
		fConst269 = (fConst268 + 1.81814185813019e-18);
		fConst270 = (8.2907268730736497e-22 * fConst0);
		fConst271 = (-3.63628371626037e-19 - fConst270);
		fConst272 = (1.45451348650415e-20 * fConst0);
		fConst273 = (1.8181418581301901e-21 * fConst154);
		fConst274 = (0.0 - (3.6362837162603701e-22 * fConst154));
		fConst275 = module_faustpower3_f(fConst0);
		fConst276 = (3.6362837162603699e-17 * fConst275);
		fConst277 = (((((fConst193 + 2.37021932428928e-11) * fConst0) + 9.8453108874492792e-09) * fConst0) + 5.8180539460165996e-07);
		fConst278 = (((fConst195 + 9.5562373863090802e-13) * fConst0) + 1.23501576528278e-09);
		fConst279 = (((((fConst197 + 4.7781186931545401e-17) * fConst0) + 6.1750788264139004e-14) * fConst0) + 7.7089214784719907e-12);
		fConst280 = (((((fConst199 + 1.18510966214464e-15) * fConst0) + 4.9226554437246405e-13) * fConst0) + 2.9090269730082999e-11);
		fConst281 = (((((-1.26155842555098e-17 - fConst201) * fConst0) + -1.6123514720056299e-14) * fConst0) + -2.00722861137573e-12);
		fConst282 = (((((-3.1098661952247899e-16 - fConst203) * fConst0) + -1.1753632581742701e-13) * fConst0) + -5.8180539460166004e-12);
		fConst283 = (((-2.2862042980872198e-13 - fConst205) * fConst0) + 1.5417842956944e-10);
		fConst284 = (((fConst207 + 7.7787381258241907e-12) * fConst0) + 5.8180539460166005e-10);
		fConst285 = (((-1.14310214904361e-17 - fConst209) * fConst0) + 7.7089214784719902e-15);
		fConst286 = (((fConst211 + 3.8893690629120899e-16) * fConst0) + 2.9090269730083e-14);
		fConst287 = (((fConst213 + 3.2194201510282799e-18) * fConst0) + -2.00722861137573e-15);
		fConst288 = (((-9.6870598201176304e-17 - fConst215) * fConst0) + -5.8180539460166003e-15);
		fConst289 = (((-1.9446845314560499e-13 - fConst217) * fConst0) + -1.4545134865041499e-11);
		fConst290 = (((-9.7234226572802408e-18 - fConst219) * fConst0) + -7.2725674325207504e-16);
		fConst291 = (((fConst221 + 2.4217649550294101e-18) * fConst0) + 1.4545134865041499e-16);
		fConst292 = (((fConst223 + 9.0635971592624897e-13) * fConst0) + 1.17190151607639e-09);
		fConst293 = (((fConst225 + 2.11265174887755e-11) * fConst0) + 5.6726025973661796e-09);
		fConst294 = (((((fConst227 + 4.5317985796312499e-17) * fConst0) + 5.8595075803819596e-14) * fConst0) + 7.27256743252074e-12);
		fConst295 = ((((fConst229 + 1.0563258744387699e-15) * fConst0) + 2.8363012986830899e-13) * fConst0);
		fConst296 = (((((-9.0635971592624903e-18 - fConst231) * fConst0) + -1.17190151607639e-14) * fConst0) + -1.4545134865041501e-12);
		fConst297 = ((((-2.1126517488775499e-16 - fConst233) * fConst0) + -5.67260259736618e-14) * fConst0);
		fConst298 = (((-2.9890252147660299e-13 - fConst235) * fConst0) + 1.4545134865041501e-10);
		fConst299 = ((fConst237 + 5.67260259736618e-12) * fConst0);
		fConst300 = (((-1.4945126073830101e-17 - fConst239) * fConst0) + 7.27256743252075e-15);
		fConst301 = ((fConst241 + 2.83630129868309e-16) * fConst0);
		fConst302 = (((fConst243 + 2.98902521476603e-18) * fConst0) + -1.4545134865041501e-15);
		fConst303 = ((-5.6726025973661803e-17 - fConst245) * fConst0);
		fConst304 = (-1.41815064934155e-13 - fConst247);
		fConst305 = (-7.09075324670773e-18 - fConst249);
		fConst306 = (fConst251 + 1.41815064934155e-18);
		fConst307 = (((-2.84793740657512e-13 - fConst253) * fConst0) + -3.6362837162603701e-11);
		fConst308 = ((-1.4545134865041501e-12 - fConst255) * fConst0);
		fConst309 = (((-1.4239687032875601e-17 - fConst257) * fConst0) + -1.8181418581301899e-15);
		fConst310 = ((-7.2725674325207398e-17 - fConst259) * fConst0);
		fConst311 = (((fConst261 + 2.8479374065751201e-18) * fConst0) + 3.6362837162603698e-16);
		fConst312 = ((fConst263 + 1.4545134865041499e-17) * fConst0);
		fConst313 = (fConst265 + -3.6362837162603698e-14);
		fConst314 = (fConst268 + -1.81814185813019e-18);
		fConst315 = (3.63628371626037e-19 - fConst270);
		fConst316 = (1.0507870870821701e-18 * fConst0);
		fConst317 = (((fConst316 + 8.0614955476006004e-15) * fConst0) + 1.1927010589334e-11);
		fConst318 = (4.2031483483286602e-17 * fConst0);
		fConst319 = (((fConst318 + 3.2245982190402399e-13) * fConst0) + 4.7708042357336098e-10);
		fConst320 = (3.8631878201550202e-18 * fConst0);
		fConst321 = (((fConst320 + 1.4836037562342298e-14) * fConst0) + 1.1636107892033201e-11);
		fConst322 = (1.5452751280620099e-16 * fConst0);
		fConst323 = ((fConst322 + 4.77080423573361e-13) * fConst0);
		fConst324 = ((-1.1927010589334001e-14 - fConst320) * fConst0);
		fConst325 = (1.21369259757063e-17 * fConst0);
		fConst326 = (((fConst325 + 1.9874472279592699e-14) * fConst0) + 2.9090269730083002e-12);
		fConst327 = (3.8166433885868899e-16 * fConst54);
		fConst328 = (0.0 - (9.5416084714672198e-18 * fConst275));
		fConst329 = (2.1015741741643301e-18 * fConst54);
		fConst330 = (2.3854021178667999e-11 - fConst329);
		fConst331 = (8.4062966966573205e-17 * fConst54);
		fConst332 = (9.5416084714672196e-10 - fConst331);
		fConst333 = (7.7263756403100404e-18 * fConst54);
		fConst334 = (2.3272215784066402e-11 - fConst333);
		fConst335 = (2.42738519514126e-17 * fConst54);
		fConst336 = (5.8180539460166004e-12 - fConst335);
		fConst337 = (1.90832169429344e-17 * fConst54);
		fConst338 = (0.0 - (3.9748944559185399e-14 * fConst54));
		fConst339 = (fConst329 + -2.3854021178667999e-11);
		fConst340 = (fConst331 + -9.5416084714672196e-10);
		fConst341 = (fConst333 + -2.3272215784066402e-11);
		fConst342 = (3.0905502561240199e-16 * fConst54);
		fConst343 = (0.0 - (7.7263756403100404e-18 * fConst275));
		fConst344 = (fConst335 + -5.8180539460166004e-12);
		fConst345 = (7.6332867771737699e-16 * fConst54);
		fConst346 = (0.0 - (1.90832169429344e-17 * fConst275));
		fConst347 = (((8.0614955476006004e-15 - fConst316) * fConst0) + -1.1927010589334e-11);
		fConst348 = (((3.2245982190402399e-13 - fConst318) * fConst0) + -4.7708042357336098e-10);
		fConst349 = (((1.4836037562342298e-14 - fConst320) * fConst0) + -1.1636107892033201e-11);
		fConst350 = ((4.77080423573361e-13 - fConst322) * fConst0);
		fConst351 = ((fConst320 + -1.1927010589334001e-14) * fConst0);
		fConst352 = (((1.9874472279592699e-14 - fConst325) * fConst0) + -2.9090269730083002e-12);
		fConst353 = (9.5416084714672198e-18 * fConst54);
		fConst354 = (1.0 / fConst4);
		fConst355 = (1.5596982942968472e-05 - (7.2463580593267625e-10 * fConst54));
		fConst356 = ((((fConst1 + -3.1538915146385902e-07) + ((4.2330213938630297e-08 - fConst2) + (3.3320827196341303e-08 - fConst3))) * fConst0) + 7.7984914714842852e-06);
		fConst357 = (1.949335655682606e-09 * fConst0);
		fConst358 = ((fConst6 + -1.4767694361232e-07) + (4.7256621955942301e-07 - fConst7));
		
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
			fRec2[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec5[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec9[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 4); l4 = (l4 + 1)) {
			fRec8[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 6); l5 = (l5 + 1)) {
			fRec7[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) {
			fRec6[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec4[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec10[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec11[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec12[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 5); l11 = (l11 + 1)) {
			fRec3[l11] = 0.0;
			
		}
		for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) {
			fRec1[l12] = 0.0;
			
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
		ui_interface->openVerticalBox("mesa_dc3_lead");
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
			fRec2[0] = (fSlow1 + (0.999 * fRec2[1]));
			fRec5[0] = (fSlow2 + (0.999 * fRec5[1]));
			fRec9[0] = (fSlow3 + (0.999 * fRec9[1]));
			fRec8[0] = ((0.050000000000000003 * (fRec9[0] * double(input0[i]))) - (fConst29 * (((fConst31 * fRec8[1]) + (fConst32 * fRec8[2])) + (fConst33 * fRec8[3]))));
			double fTemp0 = (fConst26 * ((((fConst28 * fRec8[0]) + (fConst35 * fRec8[1])) + (fConst36 * fRec8[2])) + (fConst37 * fRec8[3])));
			fRec7[0] = ((0.13 * (int(signbit(double(fTemp0)))?double(c01_stage1_negclip(double(fTemp0))):double(c01_stage1clip(double(fTemp0))))) - (fConst38 * (((((fConst40 * fRec7[1]) + (fConst42 * fRec7[2])) + (fConst43 * fRec7[3])) + (fConst44 * fRec7[4])) + (fConst45 * fRec7[5]))));
			double fTemp1 = (fConst21 * ((((((fConst23 * fRec7[0]) + (fConst47 * fRec7[1])) + (fConst49 * fRec7[2])) + (fConst50 * fRec7[3])) + (fConst51 * fRec7[4])) + (fConst52 * fRec7[5])));
			fRec6[0] = ((0.90000000000000002 * (int(signbit(double(fTemp1)))?double(c02_stage2_negclip(double(fTemp1))):double(c02_stage2clip(double(fTemp1))))) - (fConst53 * ((fConst55 * fRec6[1]) + (fConst56 * fRec6[2]))));
			double fTemp2 = (fConst16 * (fRec5[0] * (((fConst18 * fRec6[0]) + (fConst57 * fRec6[1])) + (fConst58 * fRec6[2]))));
			fRec4[0] = ((0.62 * (int(signbit(double(fTemp2)))?double(c03_stage3_negclip(double(fTemp2))):double(c03_stage3clip(double(fTemp2))))) - (fConst59 * fRec4[1]));
			double fTemp3 = (fConst11 * ((fConst13 * fRec4[0]) + (fConst60 * fRec4[1])));
			fRec10[0] = (fSlow4 + (0.999 * fRec10[1]));
			fRec11[0] = (fSlow5 + (0.999 * fRec11[1]));
			fRec12[0] = (fSlow6 + (0.999 * fRec12[1]));
			double fTemp4 = (2.9090269730083002e-15 * fRec10[0]);
			double fTemp5 = (fConst130 * fRec10[0]);
			double fTemp6 = (fConst0 * (0.0 - (5.8180539460166e-20 * fRec10[0])));
			double fTemp7 = (fConst0 * (fRec2[0] * ((1.4545134865041499e-21 * fRec2[0]) + -7.2725674325207501e-21)));
			double fTemp8 = (fConst0 * (0.0 - (7.2725674325207501e-20 * fRec10[0])));
			double fTemp9 = (fConst272 * fRec10[0]);
			double fTemp10 = (fRec2[0] * (fConst273 + (fConst274 * fRec2[0])));
			double fTemp11 = ((((fConst277 * fRec10[0]) + (fConst0 * ((fConst278 + (fRec2[0] * ((fConst279 + (fConst280 * fRec10[0])) + (fRec2[0] * (fConst281 + (fConst282 * fRec10[0])))))) + (fRec11[0] * (((fConst283 + (fConst284 * fRec10[0])) + (fConst0 * (fRec2[0] * ((fConst285 + (fConst286 * fRec10[0])) + (fRec2[0] * (fConst287 + (fConst288 * fRec10[0]))))))) + (fRec11[0] * (fConst289 + (fConst0 * (fRec2[0] * (fConst290 + (fConst291 * fRec2[0]))))))))))) + (fRec12[0] * (((fConst0 * (((fConst292 + (fConst293 * fRec10[0])) + (fRec2[0] * ((fConst294 + (fConst295 * fRec10[0])) + (fRec2[0] * (fConst296 + (fConst297 * fRec10[0])))))) + (fRec11[0] * (((fConst298 + (fConst299 * fRec10[0])) + (fConst0 * (fRec2[0] * ((fConst300 + (fConst301 * fRec10[0])) + (fRec2[0] * (fConst302 + (fConst303 * fRec10[0]))))))) + (fConst0 * (fRec11[0] * (fConst304 + (fConst0 * (fRec2[0] * (fConst305 + (fConst306 * fRec2[0]))))))))))) + (fRec12[0] * ((fConst0 * ((fConst307 + (fConst308 * fRec10[0])) + (fConst0 * (fRec2[0] * ((fConst309 + (fConst310 * fRec10[0])) + (fRec2[0] * (fConst311 + (fConst312 * fRec10[0])))))))) + (fRec11[0] * ((fConst54 * ((fConst313 + (fConst0 * (0.0 - (1.4545134865041501e-15 * fRec10[0])))) + (fConst0 * (fRec2[0] * ((fConst314 + fTemp8) + (fRec2[0] * (fConst315 + fTemp9))))))) + (fRec11[0] * (fConst276 + fTemp10))))))) + 1.4545134865041499e-07))) + 1.5417842956943999e-07);
			fRec3[0] = ((int(signbit(double(fTemp3)))?double(c04_stage4_negclip(double(fTemp3))):double(c04_stage4clip(double(fTemp3)))) - (((((fRec3[1] * ((((fConst62 * fRec10[0]) + (fConst0 * ((fConst64 + (fRec2[0] * ((fConst66 + (fConst68 * fRec10[0])) + (fRec2[0] * (fConst70 + (fConst72 * fRec10[0])))))) + (fRec11[0] * (((fConst74 + (fConst76 * fRec10[0])) + (fConst54 * (fRec2[0] * ((fConst78 + (fConst80 * fRec10[0])) + (fRec2[0] * (fConst82 + (fConst84 * fRec10[0]))))))) + (fRec11[0] * (fConst86 + (fConst54 * (fRec2[0] * (fConst88 + (fConst90 * fRec2[0]))))))))))) + (fRec12[0] * ((fConst0 * ((((fConst92 + (fConst94 * fRec10[0])) + (fRec2[0] * ((fConst96 + (fConst98 * fRec10[0])) + (fRec2[0] * (fConst100 + (fConst102 * fRec10[0])))))) + (fRec11[0] * (((fConst104 + (fConst54 * (0.0 - (1.9548661258615801e-15 * fRec10[0])))) + (fConst54 * (fRec2[0] * ((fConst106 + (fConst108 * fRec10[0])) + (fRec2[0] * (fConst110 + (fConst112 * fRec10[0]))))))) + (fConst54 * (fRec11[0] * ((fRec2[0] * (fConst114 + (fConst116 * fRec2[0]))) + 4.8871653146539401e-17)))))) + (fRec12[0] * (((fConst118 + (fConst119 * fRec10[0])) + (fConst54 * (fRec2[0] * ((fConst121 + (fConst123 * fRec10[0])) + (fRec2[0] * (fConst125 + (fConst127 * fRec10[0]))))))) + (fConst54 * (fRec11[0] * (((fTemp4 + -1.6581453746147299e-16) + (fRec2[0] * ((fConst129 + fTemp5) + (fRec2[0] * (fConst132 + fTemp6))))) + (fRec11[0] * (fTemp7 + -7.2725674325207398e-17))))))))) + 5.8180539460165996e-07))) + 6.16713718277759e-07)) + (fRec3[2] * ((((fConst133 * fRec10[0]) + (fConst54 * (((fRec2[0] * ((fConst134 + (fConst135 * fRec10[0])) + (fRec2[0] * (fConst136 + (fConst137 * fRec10[0]))))) + -1.9112474772618201e-12) + (fRec11[0] * ((((0.0 - (1.5557476251648401e-11 * fRec10[0])) + 4.5724085961744396e-13) + (fRec2[0] * ((fConst138 + (fConst139 * fRec10[0])) + (fRec2[0] * (fConst140 + (fConst141 * fRec10[0])))))) + (fRec11[0] * ((fRec2[0] * (fConst142 + (fConst143 * fRec2[0]))) + 3.8893690629120902e-13))))))) + (fRec12[0] * (((fConst54 * ((((0.0 - (4.2253034977550903e-11 * fRec10[0])) + -1.8127194318524999e-12) + (fRec2[0] * ((fConst144 + (fConst145 * fRec10[0])) + (fRec2[0] * (fConst146 + (fConst147 * fRec10[0])))))) + (fRec11[0] * ((((0.0 - (1.13452051947324e-11 * fRec10[0])) + 5.9780504295320497e-13) + (fRec2[0] * ((fConst148 + (fConst149 * fRec10[0])) + (fRec2[0] * (fConst150 + (fConst54 * (0.0 - (5.8645983775847294e-20 * fRec10[0])))))))) + (fRec11[0] * ((fConst54 * (fRec2[0] * ((1.4661495943961801e-21 * fRec2[0]) + -7.3307479719809103e-21))) + 2.8363012986830899e-13)))))) + (fRec12[0] * ((fConst54 * (((2.9090269730083002e-12 * fRec10[0]) + 5.6958748131502502e-13) + (fRec2[0] * ((fConst151 + (fConst54 * (0.0 - (1.5499295712188199e-18 * fRec10[0])))) + (fRec2[0] * (fConst152 + (fConst153 * fRec10[0]))))))) + (fRec11[0] * (((fRec2[0] * fRec11[0]) * (fConst155 + (fConst156 * fRec2[0]))) + (fConst54 * ((fConst54 * (fRec2[0] * (((0.0 - (4.3635404595124495e-19 * fRec10[0])) + 2.4872180619220899e-20) + (fRec2[0] * ((8.7270809190248904e-20 * fRec10[0]) + -4.9744361238441898e-21))))) + 7.2725674325207396e-14))))))) + 8.7270809190248898e-07))) + 9.2507057741663903e-07))) + (fRec3[3] * ((((fConst157 * fRec10[0]) + (fConst0 * ((fConst158 + (fRec2[0] * ((fConst159 + (fConst160 * fRec10[0])) + (fRec2[0] * (fConst161 + (fConst162 * fRec10[0])))))) + (fRec11[0] * (((fConst163 + (fConst164 * fRec10[0])) + (fConst54 * (fRec2[0] * ((fConst165 + (fConst166 * fRec10[0])) + (fRec2[0] * (fConst167 + (fConst168 * fRec10[0]))))))) + (fRec11[0] * (fConst169 + (fConst54 * (fRec2[0] * (fConst170 + (fConst171 * fRec2[0]))))))))))) + (fRec12[0] * ((fConst0 * ((((fConst172 + (fConst173 * fRec10[0])) + (fRec2[0] * ((fConst174 + (fConst175 * fRec10[0])) + (fRec2[0] * (fConst176 + (fConst177 * fRec10[0])))))) + (fRec11[0] * (((fConst178 + (fConst179 * fRec10[0])) + (fConst54 * (fRec2[0] * ((fConst180 + (fConst181 * fRec10[0])) + (fRec2[0] * (fConst182 + (fConst183 * fRec10[0]))))))) + (fConst54 * (fRec11[0] * ((fRec2[0] * (fConst184 + (fConst185 * fRec2[0]))) + -4.8871653146539401e-17)))))) + (fRec12[0] * (((fConst186 + (fConst54 * (0.0 - (1.03328638081255e-14 * fRec10[0])))) + (fConst54 * (fRec2[0] * ((fConst187 + (fConst188 * fRec10[0])) + (fRec2[0] * (fConst189 + (fConst190 * fRec10[0]))))))) + (fConst54 * (fRec11[0] * ((((0.0 - fTemp4) + 1.6581453746147299e-16) + (fRec2[0] * ((fConst191 + fTemp5) + (fRec2[0] * (fConst192 + fTemp6))))) + (fRec11[0] * (fTemp7 + 7.2725674325207398e-17))))))))) + 5.8180539460165996e-07))) + 6.16713718277759e-07))) + (fRec3[4] * ((((fConst194 * fRec10[0]) + (fConst0 * ((fConst196 + (fRec2[0] * ((fConst198 + (fConst200 * fRec10[0])) + (fRec2[0] * (fConst202 + (fConst204 * fRec10[0])))))) + (fRec11[0] * (((fConst206 + (fConst208 * fRec10[0])) + (fConst0 * (fRec2[0] * ((fConst210 + (fConst212 * fRec10[0])) + (fRec2[0] * (fConst214 + (fConst216 * fRec10[0]))))))) + (fRec11[0] * (fConst218 + (fConst0 * (fRec2[0] * (fConst220 + (fConst222 * fRec2[0]))))))))))) + (fRec12[0] * (((fConst0 * (((fConst224 + (fConst226 * fRec10[0])) + (fRec2[0] * ((fConst228 + (fConst230 * fRec10[0])) + (fRec2[0] * (fConst232 + (fConst234 * fRec10[0])))))) + (fRec11[0] * (((fConst236 + (fConst238 * fRec10[0])) + (fConst0 * (fRec2[0] * ((fConst240 + (fConst242 * fRec10[0])) + (fRec2[0] * (fConst244 + (fConst246 * fRec10[0]))))))) + (fConst0 * (fRec11[0] * (fConst248 + (fConst0 * (fRec2[0] * (fConst250 + (fConst252 * fRec2[0]))))))))))) + (fRec12[0] * ((fConst0 * ((fConst254 + (fConst256 * fRec10[0])) + (fConst0 * (fRec2[0] * ((fConst258 + (fConst260 * fRec10[0])) + (fRec2[0] * (fConst262 + (fConst264 * fRec10[0])))))))) + (fRec11[0] * ((fConst54 * ((fConst266 + (fConst267 * fRec10[0])) + (fConst0 * (fRec2[0] * ((fConst269 + fTemp8) + (fRec2[0] * (fConst271 + fTemp9))))))) + (fRec11[0] * (fTemp10 - fConst276))))))) + 1.4545134865041499e-07))) + 1.5417842956943999e-07))) / fTemp11));
			fRec1[0] = ((3.2799999999999998 * ((fRec2[0] * (((((fRec3[0] * ((fConst0 * ((fConst317 + (fConst319 * fRec10[0])) + (fRec11[0] * ((fConst321 + (fConst323 * fRec10[0])) + (fConst324 * fRec11[0]))))) + (fRec12[0] * ((fConst0 * (fConst326 + (fConst327 * fRec10[0]))) + (fConst328 * fRec11[0]))))) + (fConst0 * (fRec3[1] * (((fConst330 + (fConst332 * fRec10[0])) + (fRec11[0] * ((fConst334 + (fConst54 * (0.0 - (3.0905502561240199e-16 * fRec10[0])))) + (fConst333 * fRec11[0])))) + (fRec12[0] * ((fConst336 + (fConst54 * (0.0 - (7.6332867771737699e-16 * fRec10[0])))) + (fConst337 * fRec11[0]))))))) + (fRec3[2] * (((fConst54 * ((0.0 - (6.4491964380804798e-13 * fRec10[0])) + -1.6122991095201201e-14)) + (fConst338 * fRec12[0])) + (fConst54 * (fRec11[0] * (((0.0 - (9.5416084714672199e-13 * fRec10[0])) + -2.9672075124684597e-14) + (2.3854021178668001e-14 * fRec11[0]))))))) + (fRec3[3] * (((fConst0 * (fConst339 + (fConst340 * fRec10[0]))) + (fRec11[0] * ((fConst0 * (fConst341 + (fConst342 * fRec10[0]))) + (fConst343 * fRec11[0])))) + (fRec12[0] * ((fConst0 * (fConst344 + (fConst345 * fRec10[0]))) + (fConst346 * fRec11[0])))))) + (fConst0 * (fRec3[4] * (((fConst347 + (fConst348 * fRec10[0])) + (fRec11[0] * ((fConst349 + (fConst350 * fRec10[0])) + (fConst351 * fRec11[0])))) + (fRec12[0] * ((fConst352 + (fConst54 * (0.0 - (3.8166433885868899e-16 * fRec10[0])))) + (fConst353 * fRec11[0])))))))) / fTemp11)) - (fConst354 * ((fConst355 * fRec1[1]) + (fConst356 * fRec1[2]))));
			double fTemp12 = (fConst5 * (((fConst8 * fRec1[0]) + (fConst357 * fRec1[1])) + (fConst358 * fRec1[2])));
			output0[i] = FAUSTFLOAT((4.3600000000000003 * (fRec0[0] * (int(signbit(double(fTemp12)))?double(c06_stage5_negclip(double(fTemp12))):double(c06_stage5clip(double(fTemp12)))))));
			fRec0[1] = fRec0[0];
			fRec2[1] = fRec2[0];
			fRec5[1] = fRec5[0];
			fRec9[1] = fRec9[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec8[j0] = fRec8[(j0 - 1)];
				
			}
			for (int j1 = 5; (j1 > 0); j1 = (j1 - 1)) {
				fRec7[j1] = fRec7[(j1 - 1)];
				
			}
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec12[1] = fRec12[0];
			for (int j2 = 4; (j2 > 0); j2 = (j2 - 1)) {
				fRec3[j2] = fRec3[(j2 - 1)];
				
			}
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_mesa_dc3_lead */

