namespace ampsim_peavey_5150ii_crunch {

#include <generated/stage/peavey_5150ii_crunch/s01_stage1_neg_table.h>
#include <generated/stage/peavey_5150ii_crunch/s01_stage1_table.h>
#include <generated/stage/peavey_5150ii_crunch/s02_stage2_neg_table.h>
#include <generated/stage/peavey_5150ii_crunch/s02_stage2_table.h>
#include <generated/stage/peavey_5150ii_crunch/s03_stage3_neg_table.h>
#include <generated/stage/peavey_5150ii_crunch/s03_stage3_table.h>
#include <generated/stage/peavey_5150ii_crunch/s06_stage4_neg_table.h>
#include <generated/stage/peavey_5150ii_crunch/s06_stage4_table.h>
#include <generated/stage/peavey_5150ii_crunch/s07_stage5_neg_table.h>
#include <generated/stage/peavey_5150ii_crunch/s07_stage5_table.h>
#include <generated/stage/peavey_5150ii_crunch/s08_stage6_neg_table.h>
#include <generated/stage/peavey_5150ii_crunch/s08_stage6_table.h>
/* ------------------------------------------------------------
name: "peavey_5150ii_crunch"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */



/* link with : "" */

static double module_faustpower3_f(double value) {
	return ((value * value) * value);
	
}
static double module_faustpower2_f(double value) {
	return (value * value);
	
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
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	FAUSTFLOAT fVslider1;
	double fRec7[2];
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	FAUSTFLOAT fVslider2;
	double fRec10[2];
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fRec9[5];
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
	double fRec8[5];
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
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
	double fRec6[2];
	double fConst73;
	double fConst74;
	double fRec5[2];
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	FAUSTFLOAT fVslider3;
	double fRec11[2];
	FAUSTFLOAT fVslider4;
	double fRec12[2];
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
	double fRec4[4];
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	FAUSTFLOAT fVslider5;
	double fRec13[2];
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
	double fRec3[4];
	double fConst172;
	double fConst173;
	double fConst174;
	double fConst175;
	double fConst176;
	double fRec2[3];
	double fConst177;
	double fConst178;
	double fConst179;
	double fConst180;
	double fRec1[3];
	double fConst181;
	double fConst182;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "peavey_5150ii_crunch");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "peavey_5150ii_crunch");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "peavey_5150ii_crunch");
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
		fConst1 = (4.33699283765577e-10 * fConst0);
		fConst2 = (1.0 / (((fConst1 + 1.57671526976176e-08) * fConst0) + 2.6874624433038001e-08));
		fConst3 = (4.8657683428397599e-12 * fConst0);
		fConst4 = (((fConst3 + 6.3178978321456903e-10) * fConst0) + 6.8457880936254696e-11);
		fConst5 = (1.3725322285498001e-10 * fConst0);
		fConst6 = (((fConst5 + 1.42420224832928e-05) * fConst0) + 0.00015149534407047);
		fConst7 = (fConst0 / fConst6);
		fConst8 = (6.2021647107888996e-09 * fConst0);
		fConst9 = (-0.00019994083529300001 - fConst8);
		fConst10 = (9.0336106053700195e-15 * fConst0);
		fConst11 = (1.0 / (((((fConst10 + 4.1442087005360399e-13) * fConst0) + 2.29677429297512e-12) * fConst0) + 1.1490198981978899e-12));
		fConst12 = module_faustpower3_f(fConst0);
		fConst13 = (2.64636909794669e-14 * fConst12);
		fConst14 = (0.0 - fConst13);
		fConst15 = (4.9000000000000004 * fConst0);
		fConst16 = (2.0758345060195102e-05 * fConst0);
		fConst17 = (fConst16 + 0.0035994371106348);
		fConst18 = (2.3999999999999999 / fConst17);
		fConst19 = (5.8228720127801896e-06 * fConst0);
		fConst20 = (fConst19 + 0.0010759187015484499);
		fConst21 = (2.07565118653794e-05 * fConst0);
		fConst22 = (fConst21 + 0.00368743046178661);
		fConst23 = (1.0 / fConst22);
		fConst24 = (0.00047105226188484802 * fConst0);
		fConst25 = (-0.048662423748434401 - fConst24);
		fConst26 = (6.7224672867785896e-21 * fConst0);
		fConst27 = (1.0 / (((((((fConst26 + 8.7052636265907995e-15) * fConst0) + 6.86307224330787e-13) * fConst0) + 1.2087802567120001e-11) * fConst0) + 4.4077150479075301e-11));
		fConst28 = module_faustpower2_f(fConst0);
		fConst29 = (1.4161936664953399e-13 * fConst0);
		fConst30 = (-8.6353272347279903e-13 - fConst29);
		fConst31 = (2.6889869147114301e-20 * fConst0);
		fConst32 = (((((-1.7410527253181599e-14 - fConst31) * fConst28) + 2.4175605134239901e-11) * fConst0) + 1.76308601916301e-10);
		fConst33 = ((((4.0334803720671499e-20 * fConst28) + -1.37261444866157e-12) * fConst28) + 2.6446290287445199e-10);
		fConst34 = (((((1.7410527253181599e-14 - fConst31) * fConst28) + -2.4175605134239901e-11) * fConst0) + 1.76308601916301e-10);
		fConst35 = (((((((fConst26 + -8.7052636265907995e-15) * fConst0) + 6.86307224330787e-13) * fConst0) + -1.2087802567120001e-11) * fConst0) + 4.4077150479075301e-11);
		fConst36 = (2.8323873329906798e-13 * fConst0);
		fConst37 = (0.0 - (2.8323873329906798e-13 * fConst12));
		fConst38 = ((fConst29 + -8.6353272347279903e-13) * fConst28);
		fConst39 = (3.9310743691405602e-16 * fConst28);
		fConst40 = ((2.2323573664250201e-09 - fConst39) * fConst0);
		fConst41 = (2.61372766943745e-18 * fConst0);
		fConst42 = (((-8.0032498402501707e-15 - fConst41) * fConst28) + 8.0993521985726099e-10);
		fConst43 = (((fConst41 + 8.3002643481407902e-15) * fConst28) + -2.2421563755240298e-09);
		fConst44 = (3.92059150415618e-18 * fConst28);
		fConst45 = (fConst44 + -8.2405686719400004e-12);
		fConst46 = (9.8904351505128601e-12 - fConst44);
		fConst47 = (2.26698602383433e-12 * fConst28);
		fConst48 = ((fConst39 + -2.2323573664250201e-09) * fConst0);
		fConst49 = (((8.0032498402501707e-15 - fConst41) * fConst28) + -8.0993521985726099e-10);
		fConst50 = (((fConst41 + -8.3002643481407902e-15) * fConst28) + 2.2421563755240298e-09);
		fConst51 = (1.9655371845702801e-16 * fConst0);
		fConst52 = ((((1.13349301191717e-12 - fConst51) * fConst0) + -1.1161786832125101e-09) * fConst0);
		fConst53 = (6.5343191735936404e-19 * fConst0);
		fConst54 = (((((fConst53 + -4.0016249201250798e-15) * fConst0) + 4.1202843359700002e-12) * fConst0) + -4.0496760992862998e-10);
		fConst55 = (((((4.1501321740703904e-15 - fConst53) * fConst0) + -4.94521757525643e-12) * fConst0) + 1.1210781877620201e-09);
		fConst56 = ((((fConst51 + 1.13349301191717e-12) * fConst0) + 1.1161786832125101e-09) * fConst0);
		fConst57 = (((((fConst53 + 4.0016249201250798e-15) * fConst0) + 4.1202843359700002e-12) * fConst0) + 4.0496760992862998e-10);
		fConst58 = (((((-4.1501321740703904e-15 - fConst53) * fConst0) + -4.94521757525643e-12) * fConst0) + -1.1210781877620201e-09);
		fConst59 = (4.6509479095866898e-17 * fConst0);
		fConst60 = (((((-1.4072383686464701e-13 - fConst59) * fConst0) + -8.25977438589657e-11) * fConst0) + -5.3310191082217098e-09);
		fConst61 = ((((fConst59 + 1.3730402222524501e-13) * fConst0) + 7.2501859871815306e-11) * fConst0);
		fConst62 = (1.86037916383467e-16 * fConst0);
		fConst63 = (((fConst62 + 2.8144767372929402e-13) * fConst28) + -1.06620382164434e-08);
		fConst64 = ((-2.7460804445049002e-13 - fConst62) * fConst28);
		fConst65 = (2.7905687457520098e-16 * fConst28);
		fConst66 = (1.6519548771793101e-10 - fConst65);
		fConst67 = (fConst65 + -1.45003719743631e-10);
		fConst68 = (((fConst62 + -2.8144767372929402e-13) * fConst28) + 1.06620382164434e-08);
		fConst69 = ((2.7460804445049002e-13 - fConst62) * fConst28);
		fConst70 = (((((1.4072383686464701e-13 - fConst59) * fConst0) + -8.25977438589657e-11) * fConst0) + 5.3310191082217098e-09);
		fConst71 = ((((fConst59 + -1.3730402222524501e-13) * fConst0) + 7.2501859871815306e-11) * fConst0);
		fConst72 = ((0.00368743046178661 - fConst21) / fConst22);
		fConst73 = (fConst24 + -0.048662423748434401);
		fConst74 = ((0.0035994371106348 - fConst16) / fConst17);
		fConst75 = (0.0010759187015484499 - fConst19);
		fConst76 = (8.5242247750992703e-16 * fConst0);
		fConst77 = (((-1.76095627947824e-12 - fConst76) * fConst0) + 2.6950189488396399e-09);
		fConst78 = (3.4096899100397101e-14 * fConst0);
		fConst79 = (((-4.9773463845555702e-11 - fConst78) * fConst0) + 2.8176758622031599e-08);
		fConst80 = (1.21405625584747e-16 * fConst0);
		fConst81 = (((fConst80 + 2.6435217714732799e-14) * fConst0) + 6.8662903155150096e-10);
		fConst82 = (2.9240674077007203e-14 * fConst0);
		fConst83 = (-3.0994434484234802e-11 - fConst82);
		fConst84 = (7.3101685192518e-16 * fConst0);
		fConst85 = (fConst84 + 7.7486086210586902e-13);
		fConst86 = (((fConst76 + -1.76095627947824e-12) * fConst0) + -2.6950189488396399e-09);
		fConst87 = (((fConst78 + -4.9773463845555702e-11) * fConst0) + -2.8176758622031599e-08);
		fConst88 = (((2.6435217714732799e-14 - fConst80) * fConst0) + -6.8662903155150096e-10);
		fConst89 = (fConst82 + -3.0994434484234802e-11);
		fConst90 = (7.7486086210586902e-13 - fConst84);
		fConst91 = (2.8414082583664198e-16 * fConst0);
		fConst92 = (((1.76095627947824e-12 - fConst91) * fConst0) + -2.6950189488396399e-09);
		fConst93 = (1.13656330334657e-14 * fConst0);
		fConst94 = (((4.9773463845555702e-11 - fConst93) * fConst0) + -2.8176758622031599e-08);
		fConst95 = (4.0468541861582399e-17 * fConst0);
		fConst96 = (((fConst95 + -2.6435217714732799e-14) * fConst0) + -6.8662903155150096e-10);
		fConst97 = (9.7468913590023898e-15 * fConst0);
		fConst98 = (3.0994434484234802e-11 - fConst97);
		fConst99 = (2.4367228397506e-16 * fConst0);
		fConst100 = (fConst99 + -7.7486086210586902e-13);
		fConst101 = (((fConst91 + 1.76095627947824e-12) * fConst0) + 2.6950189488396399e-09);
		fConst102 = (((fConst93 + 4.9773463845555702e-11) * fConst0) + 2.8176758622031599e-08);
		fConst103 = (((-2.6435217714732799e-14 - fConst95) * fConst0) + 6.8662903155150096e-10);
		fConst104 = (fConst97 + 3.0994434484234802e-11);
		fConst105 = (-7.7486086210586902e-13 - fConst99);
		fConst106 = (2.47351242326113e-13 * fConst0);
		fConst107 = (fConst106 + 7.0441896555078997e-10);
		fConst108 = (9.8940496930445105e-12 * fConst0);
		fConst109 = (fConst108 + 2.8176758622031599e-08);
		fConst110 = (((fConst99 + 9.7055013609804702e-13) * fConst0) + 6.8662903155150096e-10);
		fConst111 = (((fConst91 + 5.1661968333934997e-13) * fConst0) + 1.7789933999288899e-10);
		fConst112 = (2.27312660669314e-14 * fConst0);
		fConst113 = (((fConst112 + 3.0558837026618501e-11) * fConst0) + 3.5292732221747201e-08);
		fConst114 = (4.5462532133862798e-13 * fConst0);
		fConst115 = (((fConst114 + 3.9576198772178098e-10) * fConst0) + 1.12707034488126e-06);
		fConst116 = (5.6828165167328396e-16 * fConst0);
		fConst117 = (((-7.6397092566546201e-13 - fConst116) * fConst0) + -8.8231830554367904e-10);
		fConst118 = (1.2984374707929e-14 * fConst0);
		fConst119 = (((2.8927955750877401e-11 - fConst118) * fConst0) + -7.1159735997155598e-10);
		fConst120 = (3.8987565436009598e-13 * fConst0);
		fConst121 = ((fConst120 + 1.2397773793693899e-09) * fConst0);
		fConst122 = (((fConst95 + -9.7055013609804702e-13) * fConst0) + -6.8662903155150096e-10);
		fConst123 = (1.9493782718004799e-14 * fConst0);
		fConst124 = (-6.1988868968469501e-11 - fConst123);
		fConst125 = (fConst99 + 7.7486086210586902e-13);
		fConst126 = (7.0441896555078997e-10 - fConst106);
		fConst127 = (2.8176758622031599e-08 - fConst108);
		fConst128 = (((-9.7055013609804702e-13 - fConst84) * fConst0) + 6.8662903155150096e-10);
		fConst129 = (((-5.1661968333934997e-13 - fConst76) * fConst0) + 1.7789933999288899e-10);
		fConst130 = (6.8193798200794101e-14 * fConst0);
		fConst131 = (((-3.0558837026618501e-11 - fConst130) * fConst0) + 3.5292732221747201e-08);
		fConst132 = (1.3638759640158801e-12 * fConst0);
		fConst133 = (((-3.9576198772178098e-10 - fConst132) * fConst0) + 1.12707034488126e-06);
		fConst134 = (1.7048449550198499e-15 * fConst0);
		fConst135 = (((fConst134 + 7.6397092566546201e-13) * fConst0) + -8.8231830554367904e-10);
		fConst136 = (3.8953124123786999e-14 * fConst0);
		fConst137 = (((fConst136 + -2.8927955750877401e-11) * fConst0) + -7.1159735997155598e-10);
		fConst138 = (1.16962696308029e-12 * fConst0);
		fConst139 = ((-1.2397773793693899e-09 - fConst138) * fConst0);
		fConst140 = (((9.7055013609804702e-13 - fConst80) * fConst0) + -6.8662903155150096e-10);
		fConst141 = (5.8481348154014405e-14 * fConst0);
		fConst142 = (fConst141 + 6.1988868968469501e-11);
		fConst143 = (-7.7486086210586902e-13 - fConst84);
		fConst144 = (-7.0441896555078997e-10 - fConst106);
		fConst145 = (-2.8176758622031599e-08 - fConst108);
		fConst146 = (((fConst84 + -9.7055013609804702e-13) * fConst0) + -6.8662903155150096e-10);
		fConst147 = (((fConst76 + -5.1661968333934997e-13) * fConst0) + -1.7789933999288899e-10);
		fConst148 = (((fConst130 + -3.0558837026618501e-11) * fConst0) + -3.5292732221747201e-08);
		fConst149 = (((fConst132 + -3.9576198772178098e-10) * fConst0) + -1.12707034488126e-06);
		fConst150 = (((7.6397092566546201e-13 - fConst134) * fConst0) + 8.8231830554367904e-10);
		fConst151 = (((-2.8927955750877401e-11 - fConst136) * fConst0) + 7.1159735997155598e-10);
		fConst152 = ((fConst138 + -1.2397773793693899e-09) * fConst0);
		fConst153 = (((fConst80 + 9.7055013609804702e-13) * fConst0) + 6.8662903155150096e-10);
		fConst154 = (6.1988868968469501e-11 - fConst141);
		fConst155 = (fConst84 + -7.7486086210586902e-13);
		fConst156 = (fConst106 + -7.0441896555078997e-10);
		fConst157 = (fConst108 + -2.8176758622031599e-08);
		fConst158 = (((9.7055013609804702e-13 - fConst99) * fConst0) + -6.8662903155150096e-10);
		fConst159 = (((5.1661968333934997e-13 - fConst91) * fConst0) + -1.7789933999288899e-10);
		fConst160 = (((3.0558837026618501e-11 - fConst112) * fConst0) + -3.5292732221747201e-08);
		fConst161 = (((3.9576198772178098e-10 - fConst114) * fConst0) + -1.12707034488126e-06);
		fConst162 = (((fConst116 + -7.6397092566546201e-13) * fConst0) + 8.8231830554367904e-10);
		fConst163 = (((fConst118 + 2.8927955750877401e-11) * fConst0) + 7.1159735997155598e-10);
		fConst164 = ((1.2397773793693899e-09 - fConst120) * fConst0);
		fConst165 = (((-9.7055013609804702e-13 - fConst95) * fConst0) + 6.8662903155150096e-10);
		fConst166 = (fConst123 + -6.1988868968469501e-11);
		fConst167 = (7.7486086210586902e-13 - fConst99);
		fConst168 = (2.71008318161101e-14 * fConst0);
		fConst169 = (((((-4.1442087005360399e-13 - fConst168) * fConst0) + 2.29677429297512e-12) * fConst0) + 3.4470596945936702e-12);
		fConst170 = (((((fConst168 + -4.1442087005360399e-13) * fConst0) + -2.29677429297512e-12) * fConst0) + 3.4470596945936702e-12);
		fConst171 = (((((4.1442087005360399e-13 - fConst10) * fConst0) + -2.29677429297512e-12) * fConst0) + 1.1490198981978899e-12);
		fConst172 = (8.8212303264889599e-15 * fConst12);
		fConst173 = (0.0 - fConst172);
		fConst174 = (1.0 / fConst6);
		fConst175 = (0.00030299068814094001 - (2.7450644570995899e-10 * fConst28));
		fConst176 = (((fConst5 + -1.42420224832928e-05) * fConst0) + 0.00015149534407047);
		fConst177 = (1.2404329421577799e-08 * fConst0);
		fConst178 = (0.00019994083529300001 - fConst8);
		fConst179 = (5.3749248866076101e-08 - (8.67398567531154e-10 * fConst28));
		fConst180 = (((fConst1 + -1.57671526976176e-08) * fConst0) + 2.6874624433038001e-08);
		fConst181 = (1.36915761872509e-10 - (9.7315366856795197e-12 * fConst28));
		fConst182 = (((fConst3 + -6.3178978321456903e-10) * fConst0) + 6.8457880936254696e-11);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(1.0);
		fVslider3 = FAUSTFLOAT(0.5);
		fVslider4 = FAUSTFLOAT(0.5);
		fVslider5 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec7[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec10[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 5); l3 = (l3 + 1)) {
			fRec9[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 5); l4 = (l4 + 1)) {
			fRec8[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec6[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec5[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec11[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec12[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 4); l9 = (l9 + 1)) {
			fRec4[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec13[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 4); l11 = (l11 + 1)) {
			fRec3[l11] = 0.0;
			
		}
		for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) {
			fRec2[l12] = 0.0;
			
		}
		for (int l13 = 0; (l13 < 3); l13 = (l13 + 1)) {
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
		ui_interface->openVerticalBox("peavey_5150ii_crunch");
		ui_interface->addVerticalSlider(".amp.bass", &fVslider3, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.gain", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.middle", &fVslider4, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider2, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.treble", &fVslider5, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0010000000000000009 * double(fVslider0));
		double fSlow1 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider1))) + -1.0));
		double fSlow2 = (0.0010000000000000009 * double(fVslider2));
		double fSlow3 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider3))) + -1.0));
		double fSlow4 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider4))) + -1.0));
		double fSlow5 = (0.0010000000000000009 * double(fVslider5));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec7[0] = (fSlow1 + (0.999 * fRec7[1]));
			fRec10[0] = (fSlow2 + (0.999 * fRec10[1]));
			fRec9[0] = ((0.10000000000000001 * (fRec10[0] * double(input0[i]))) - (fConst27 * ((((fConst32 * fRec9[1]) + (fConst33 * fRec9[2])) + (fConst34 * fRec9[3])) + (fConst35 * fRec9[4]))));
			double fTemp0 = (fConst27 * (((fConst28 * (((fConst30 * fRec9[0]) + (fConst36 * fRec9[1])) + (1.7270654469456001e-12 * fRec9[2]))) + (fConst37 * fRec9[3])) + (fConst38 * fRec9[4])));
			double fTemp1 = (fConst56 + ((fRec7[0] * ((fConst0 * (fConst57 + (fConst58 * fRec7[0]))) + 6.2282121542334302e-08)) + 5.8545194249794498e-08));
			fRec8[0] = ((0.69999999999999996 * (int(signbit(double(fTemp0)))?double(s01_stage1_negclip(double(fTemp0))):double(s01_stage1clip(double(fTemp0))))) - (((((fRec8[1] * (fConst40 + ((fRec7[0] * ((fConst0 * (fConst42 + (fConst43 * fRec7[0]))) + 2.49128486169337e-07)) + 2.3418077699917799e-07))) + (fRec8[2] * (((fRec7[0] * ((fConst28 * (fConst45 + (fConst46 * fRec7[0]))) + 3.7369272925400602e-07)) + 3.5127116549876703e-07) - fConst47))) + (fRec8[3] * (fConst48 + ((fRec7[0] * ((fConst0 * (fConst49 + (fConst50 * fRec7[0]))) + 2.49128486169337e-07)) + 2.3418077699917799e-07)))) + (fRec8[4] * (fConst52 + ((fRec7[0] * ((fConst0 * (fConst54 + (fConst55 * fRec7[0]))) + 6.2282121542334302e-08)) + 5.8545194249794498e-08)))) / fTemp1));
			double fTemp2 = (fConst0 * ((fRec7[0] * (((((fRec8[0] * (fConst60 + (fConst61 * fRec7[0]))) + (fRec8[1] * (fConst63 + (fConst64 * fRec7[0])))) + (fConst0 * (fRec8[2] * (fConst66 + (fConst67 * fRec7[0]))))) + (fRec8[3] * (fConst68 + (fConst69 * fRec7[0])))) + (fRec8[4] * (fConst70 + (fConst71 * fRec7[0]))))) / fTemp1));
			fRec6[0] = ((1.3500000000000001 * (int(signbit(double(fTemp2)))?double(s02_stage2_negclip(double(fTemp2))):double(s02_stage2clip(double(fTemp2))))) - (fConst72 * fRec6[1]));
			double fTemp3 = (fConst23 * ((fConst25 * fRec6[0]) + (fConst73 * fRec6[1])));
			fRec5[0] = ((int(signbit(double(fTemp3)))?double(s03_stage3_negclip(double(fTemp3))):double(s03_stage3clip(double(fTemp3)))) - (fConst74 * fRec5[1]));
			fRec11[0] = (fSlow3 + (0.999 * fRec11[1]));
			fRec12[0] = (fSlow4 + (0.999 * fRec12[1]));
			double fTemp4 = (fConst0 * ((fConst83 * fRec11[0]) + (fConst85 * fRec12[0])));
			double fTemp5 = (fConst0 * ((fConst89 * fRec11[0]) + (fConst90 * fRec12[0])));
			double fTemp6 = (fConst0 * ((fConst98 * fRec11[0]) + (fConst100 * fRec12[0])));
			double fTemp7 = (fConst0 * ((fConst104 * fRec11[0]) + (fConst105 * fRec12[0])));
			double fTemp8 = ((fConst0 * ((fConst101 + (fConst102 * fRec11[0])) + (fRec12[0] * (fConst103 + fTemp7)))) + 6.2420821050136496e-07);
			fRec4[0] = ((fConst18 * ((fConst20 * fRec5[0]) + (fConst75 * fRec5[1]))) - ((((fRec4[1] * ((fConst0 * ((fConst77 + (fConst79 * fRec11[0])) + (fRec12[0] * (fConst81 + fTemp4)))) + 1.87262463150409e-06)) + (fRec4[2] * ((fConst0 * ((fConst86 + (fConst87 * fRec11[0])) + (fRec12[0] * (fConst88 + fTemp5)))) + 1.87262463150409e-06))) + (fRec4[3] * ((fConst0 * ((fConst92 + (fConst94 * fRec11[0])) + (fRec12[0] * (fConst96 + fTemp6)))) + 6.2420821050136496e-07))) / fTemp8));
			fRec13[0] = (fSlow5 + (0.999 * fRec13[1]));
			fRec3[0] = ((fConst15 * (((((fRec4[0] * (((fConst107 + (fConst109 * fRec11[0])) + (fRec12[0] * (fConst110 + fTemp7))) + (fRec13[0] * ((fConst111 + (fRec11[0] * (fConst113 + (fConst115 * fRec11[0])))) + (fRec12[0] * ((fConst117 + (fRec11[0] * (fConst119 + (fConst121 * fRec11[0])))) + (fRec12[0] * (fConst122 + (fConst0 * ((fConst124 * fRec11[0]) + (fConst125 * fRec12[0]))))))))))) + (fRec4[1] * (((fConst126 + (fConst127 * fRec11[0])) + (fRec12[0] * (fConst128 + fTemp4))) + (fRec13[0] * ((fConst129 + (fRec11[0] * (fConst131 + (fConst133 * fRec11[0])))) + (fRec12[0] * ((fConst135 + (fRec11[0] * (fConst137 + (fConst139 * fRec11[0])))) + (fRec12[0] * (fConst140 + (fConst0 * ((fConst142 * fRec11[0]) + (fConst143 * fRec12[0])))))))))))) + (fRec4[2] * (((fConst144 + (fConst145 * fRec11[0])) + (fRec12[0] * (fConst146 + fTemp5))) + (fRec13[0] * ((fConst147 + (fRec11[0] * (fConst148 + (fConst149 * fRec11[0])))) + (fRec12[0] * ((fConst150 + (fRec11[0] * (fConst151 + (fConst152 * fRec11[0])))) + (fRec12[0] * (fConst153 + (fConst0 * ((fConst154 * fRec11[0]) + (fConst155 * fRec12[0])))))))))))) + (fRec4[3] * (((fConst156 + (fConst157 * fRec11[0])) + (fRec12[0] * (fConst158 + fTemp6))) + (fRec13[0] * ((fConst159 + (fRec11[0] * (fConst160 + (fConst161 * fRec11[0])))) + (fRec12[0] * ((fConst162 + (fRec11[0] * (fConst163 + (fConst164 * fRec11[0])))) + (fRec12[0] * (fConst165 + (fConst0 * ((fConst166 * fRec11[0]) + (fConst167 * fRec12[0])))))))))))) / fTemp8)) - (fConst11 * (((fConst169 * fRec3[1]) + (fConst170 * fRec3[2])) + (fConst171 * fRec3[3]))));
			double fTemp9 = (fConst11 * ((((fConst14 * fRec3[1]) + (fConst172 * fRec3[0])) + (fConst13 * fRec3[2])) + (fConst173 * fRec3[3])));
			fRec2[0] = ((10.24 * (int(signbit(double(fTemp9)))?double(s06_stage4_negclip(double(fTemp9))):double(s06_stage4clip(double(fTemp9))))) - (fConst174 * ((fConst175 * fRec2[1]) + (fConst176 * fRec2[2]))));
			double fTemp10 = (fConst7 * (((fConst9 * fRec2[0]) + (fConst177 * fRec2[1])) + (fConst178 * fRec2[2])));
			fRec1[0] = ((21.899999999999999 * (int(signbit(double(fTemp10)))?double(s07_stage5_negclip(double(fTemp10))):double(s07_stage5clip(double(fTemp10))))) - (fConst2 * ((fConst179 * fRec1[1]) + (fConst180 * fRec1[2]))));
			double fTemp11 = (fConst2 * (((fConst4 * fRec1[0]) + (fConst181 * fRec1[1])) + (fConst182 * fRec1[2])));
			output0[i] = FAUSTFLOAT((75.209999999999994 * (fRec0[0] * (int(signbit(double(fTemp11)))?double(s08_stage6_negclip(double(fTemp11))):double(s08_stage6clip(double(fTemp11)))))));
			fRec0[1] = fRec0[0];
			fRec7[1] = fRec7[0];
			fRec10[1] = fRec10[0];
			for (int j0 = 4; (j0 > 0); j0 = (j0 - 1)) {
				fRec9[j0] = fRec9[(j0 - 1)];
				
			}
			for (int j1 = 4; (j1 > 0); j1 = (j1 - 1)) {
				fRec8[j1] = fRec8[(j1 - 1)];
				
			}
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			fRec11[1] = fRec11[0];
			fRec12[1] = fRec12[0];
			for (int j2 = 3; (j2 > 0); j2 = (j2 - 1)) {
				fRec4[j2] = fRec4[(j2 - 1)];
				
			}
			fRec13[1] = fRec13[0];
			for (int j3 = 3; (j3 > 0); j3 = (j3 - 1)) {
				fRec3[j3] = fRec3[(j3 - 1)];
				
			}
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_peavey_5150ii_crunch */

