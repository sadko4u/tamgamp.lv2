namespace ampsim_marshall_jcm800lo {

#include <generated/stage/marshall_jcm800lo/s02_stage2_neg_table.h>
#include <generated/stage/marshall_jcm800lo/s02_stage2_table.h>
#include <generated/stage/marshall_jcm800lo/s03_stage3_neg_table.h>
#include <generated/stage/marshall_jcm800lo/s03_stage3_table.h>
#include <generated/stage/marshall_jcm800lo/s05_stage4_neg_table.h>
#include <generated/stage/marshall_jcm800lo/s05_stage4_table.h>
/* ------------------------------------------------------------
name: "marshall_jcm800lo"
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


class module : public dsp {
	
 private:
	
	FAUSTFLOAT fVslider0;
	double fRec0[2];
	int fSamplingFreq;
	double fConst0;
	FAUSTFLOAT fVslider1;
	double fRec2[2];
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	FAUSTFLOAT fVslider2;
	double fRec5[2];
	FAUSTFLOAT fVslider3;
	double fRec7[2];
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fRec6[3];
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fRec4[2];
	double fConst21;
	FAUSTFLOAT fVslider4;
	double fRec8[2];
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	FAUSTFLOAT fVslider5;
	double fRec9[2];
	FAUSTFLOAT fVslider6;
	double fRec10[2];
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
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
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
	double fRec3[4];
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
	FAUSTFLOAT fVslider7;
	double fRec11[2];
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
	double fRec1[5];
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
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "marshall_jcm800lo");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "marshall_jcm800lo");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "marshall_jcm800lo");
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
		fConst1 = (1.9037851627137301e-05 * fConst0);
		fConst2 = (fConst1 + 0.086183121897407594);
		fConst3 = (1.0 / fConst2);
		fConst4 = (0.00080771387303329696 * fConst0);
		fConst5 = (-1.8282342078617 - fConst4);
		fConst6 = module_faustpower2_f(fConst0);
		fConst7 = (3.0564347359864398e-09 * fConst6);
		fConst8 = (1.5282173679932199e-09 * fConst0);
		fConst9 = (fConst8 + -1.8333073903042301e-06);
		fConst10 = (3.4590705477438199e-06 - fConst8);
		fConst11 = (fConst8 + 1.8333073903042301e-06);
		fConst12 = (-3.4590705477438199e-06 - fConst8);
		fConst13 = (1.18724587211056e-08 * fConst0);
		fConst14 = (-3.2809155392933103e-05 - fConst13);
		fConst15 = (fConst13 + 2.68729260323803e-05);
		fConst16 = (2.3744917442211201e-08 * fConst6);
		fConst17 = (0.0 - fConst16);
		fConst18 = (3.2809155392933103e-05 - fConst13);
		fConst19 = (fConst13 + -2.68729260323803e-05);
		fConst20 = ((0.086183121897407594 - fConst1) / fConst2);
		fConst21 = (fConst4 + -1.8282342078617);
		fConst22 = (3.2411979977481897e-14 * fConst0);
		fConst23 = (((-6.2407768844554506e-11 - fConst22) * fConst0) + 3.9292992253236498e-08);
		fConst24 = (2.55622482089074e-14 * fConst0);
		fConst25 = (((-3.6886255509023598e-11 - fConst24) * fConst0) + 7.9157093120474399e-10);
		fConst26 = (7.1306355950460192e-15 * fConst0);
		fConst27 = (((-1.26394880011049e-11 - fConst26) * fConst0) + 7.7466009767446095e-09);
		fConst28 = (4.0406935038594096e-15 * fConst0);
		fConst29 = ((-7.4987097454887798e-12 - fConst28) * fConst0);
		fConst30 = (fConst26 + 1.63696868573141e-12);
		fConst31 = (4.7537570633640199e-15 * fConst0);
		fConst32 = (7.13063559504602e-16 * fConst0);
		fConst33 = (((-1.8640615202996202e-12 - fConst32) * fConst0) + 3.4082669584882699e-09);
		fConst34 = (1.5069409890863901e-16 * fConst0);
		fConst35 = (((fConst34 + 1.74166502337627e-13) * fConst0) + 8.0898549169124798e-10);
		fConst36 = (5.6236946059596302e-16 * fConst0);
		fConst37 = (((fConst36 + 8.1149762119852001e-13) * fConst0) + -1.74145604865044e-11);
		fConst38 = (1.5687398309101301e-16 * fConst0);
		fConst39 = (((-3.8610866928258001e-13 - fConst38) * fConst0) + 7.3006586985013498e-10);
		fConst40 = (6.7978726006105401e-17 * fConst0);
		fConst41 = (((fConst40 + 5.1874492777199203e-14) * fConst0) + 1.7414560486504399e-10);
		fConst42 = (8.8895257084907102e-17 * fConst0);
		fConst43 = ((fConst42 + 1.64971614400753e-13) * fConst0);
		fConst44 = ((((fConst38 + 1.4405324434436401e-13) * fConst0) + -3.7203833766622999e-11) * fConst0);
		fConst45 = (5.2291327697004203e-17 * fConst0);
		fConst46 = ((3.6013311086091003e-14 - fConst45) * fConst6);
		fConst47 = module_faustpower3_f(fConst0);
		fConst48 = (0.0 - (1.04582655394008e-16 * fConst47));
		fConst49 = (((fConst22 + -6.2407768844554506e-11) * fConst0) + -3.9292992253236498e-08);
		fConst50 = (((fConst24 + -3.6886255509023598e-11) * fConst0) + -7.9157093120474399e-10);
		fConst51 = (((fConst26 + -1.26394880011049e-11) * fConst0) + -7.7466009767446095e-09);
		fConst52 = ((fConst28 + -7.4987097454887798e-12) * fConst0);
		fConst53 = ((1.63696868573141e-12 - fConst26) * fConst6);
		fConst54 = (0.0 - (4.7537570633640199e-15 * fConst47));
		fConst55 = (((fConst32 + -1.8640615202996202e-12) * fConst0) + -3.4082669584882699e-09);
		fConst56 = (((1.74166502337627e-13 - fConst34) * fConst0) + -8.0898549169124798e-10);
		fConst57 = (((8.1149762119852001e-13 - fConst36) * fConst0) + 1.74145604865044e-11);
		fConst58 = (((fConst38 + -3.8610866928258001e-13) * fConst0) + -7.3006586985013498e-10);
		fConst59 = (((5.1874492777199203e-14 - fConst40) * fConst0) + -1.7414560486504399e-10);
		fConst60 = ((1.64971614400753e-13 - fConst42) * fConst0);
		fConst61 = (((1.4405324434436401e-13 - fConst38) * fConst0) + 3.7203833766622999e-11);
		fConst62 = (fConst45 + 3.6013311086091003e-14);
		fConst63 = (1.04582655394008e-16 * fConst0);
		fConst64 = (1.0803993325827301e-14 * fConst0);
		fConst65 = (((6.2407768844554506e-11 - fConst64) * fConst0) + -3.9292992253236498e-08);
		fConst66 = (8.5207494029691403e-15 * fConst0);
		fConst67 = (((3.6886255509023598e-11 - fConst66) * fConst0) + -7.9157093120474399e-10);
		fConst68 = (2.37687853168201e-15 * fConst0);
		fConst69 = (((1.26394880011049e-11 - fConst68) * fConst0) + -7.7466009767446095e-09);
		fConst70 = (1.3468978346198001e-15 * fConst0);
		fConst71 = ((7.4987097454887798e-12 - fConst70) * fConst0);
		fConst72 = (fConst68 + -1.63696868573141e-12);
		fConst73 = (1.5845856877880099e-15 * fConst0);
		fConst74 = (2.37687853168201e-16 * fConst0);
		fConst75 = (((1.8640615202996202e-12 - fConst74) * fConst0) + -3.4082669584882699e-09);
		fConst76 = (5.0231366302879798e-17 * fConst0);
		fConst77 = (((fConst76 + -1.74166502337627e-13) * fConst0) + -8.0898549169124798e-10);
		fConst78 = (1.8745648686532101e-16 * fConst0);
		fConst79 = (((fConst78 + -8.1149762119852001e-13) * fConst0) + 1.74145604865044e-11);
		fConst80 = (((3.8610866928258001e-13 - fConst45) * fConst0) + -7.3006586985013498e-10);
		fConst81 = (2.2659575335368499e-17 * fConst0);
		fConst82 = (((fConst81 + -5.1874492777199203e-14) * fConst0) + -1.7414560486504399e-10);
		fConst83 = (2.9631752361635701e-17 * fConst0);
		fConst84 = ((fConst83 + -1.64971614400753e-13) * fConst0);
		fConst85 = ((((fConst45 + -1.4405324434436401e-13) * fConst0) + 3.7203833766622999e-11) * fConst0);
		fConst86 = (1.7430442565668101e-17 * fConst0);
		fConst87 = ((-3.6013311086091003e-14 - fConst86) * fConst6);
		fConst88 = (0.0 - (3.4860885131336098e-17 * fConst47));
		fConst89 = (((fConst64 + 6.2407768844554506e-11) * fConst0) + 3.9292992253236498e-08);
		fConst90 = (((fConst66 + 3.6886255509023598e-11) * fConst0) + 7.9157093120474399e-10);
		fConst91 = (((fConst68 + 1.26394880011049e-11) * fConst0) + 7.7466009767446095e-09);
		fConst92 = ((fConst70 + 7.4987097454887798e-12) * fConst0);
		fConst93 = ((-1.63696868573141e-12 - fConst68) * fConst6);
		fConst94 = (0.0 - (1.5845856877880099e-15 * fConst47));
		fConst95 = (((fConst74 + 1.8640615202996202e-12) * fConst0) + 3.4082669584882699e-09);
		fConst96 = (((-1.74166502337627e-13 - fConst76) * fConst0) + 8.0898549169124798e-10);
		fConst97 = (((-8.1149762119852001e-13 - fConst78) * fConst0) + -1.74145604865044e-11);
		fConst98 = (((fConst45 + 3.8610866928258001e-13) * fConst0) + 7.3006586985013498e-10);
		fConst99 = (((-5.1874492777199203e-14 - fConst81) * fConst0) + 1.7414560486504399e-10);
		fConst100 = ((-1.64971614400753e-13 - fConst83) * fConst0);
		fConst101 = (((-1.4405324434436401e-13 - fConst45) * fConst0) + -3.7203833766622999e-11);
		fConst102 = (fConst86 + -3.6013311086091003e-14);
		fConst103 = (3.4860885131336098e-17 * fConst0);
		fConst104 = (0.0 - (5.40199666291365e-12 * fConst47));
		fConst105 = (4.8364983896609896e-09 * fConst0);
		fConst106 = (-1.8374585562159701e-05 - fConst105);
		fConst107 = (4.1415307749004698e-12 * fConst0);
		fConst108 = ((-1.7786598824170602e-08 - fConst107) * fConst0);
		fConst109 = (2.1280592914508299e-10 * fConst0);
		fConst110 = (-8.0848176473502702e-07 - fConst109);
		fConst111 = (1.82227354095621e-13 * fConst0);
		fConst112 = (((-7.5805581797753498e-10 - fConst111) * fConst0) + 8.4554167651415808e-09);
		fConst113 = ((fConst111 + 7.82610348263506e-10) * fConst0);
		fConst114 = (2.3768785316820099e-13 * fConst0);
		fConst115 = (((-2.4554530285971201e-10 - fConst114) * fConst0) + -8.4554167651415798e-08);
		fConst116 = (2.3768785316820099e-13 * fConst6);
		fConst117 = (2.3408652205959199e-12 * fConst0);
		fConst118 = (-8.8932994120853008e-09 - fConst117);
		fConst119 = (2.0045008950518301e-15 * fConst0);
		fConst120 = (((-8.0685141646071997e-12 - fConst119) * fConst0) + 1.8601916883311499e-10);
		fConst121 = (4.0090017901036499e-15 * fConst0);
		fConst122 = (((fConst121 + 1.9018093216101701e-11) * fConst0) + 8.7072802432521805e-09);
		fConst123 = ((-8.6087138308985698e-12 - fConst119) * fConst0);
		fConst124 = (2.61456638485021e-15 * fConst0);
		fConst125 = ((((-5.40199666291365e-12 - fConst124) * fConst0) + -1.8601916883311499e-09) * fConst0);
		fConst126 = (5.2291327697004199e-15 * fConst0);
		fConst127 = ((((fConst126 + 5.40199666291365e-12) * fConst0) + 1.8601916883311499e-09) * fConst0);
		fConst128 = (0.0 - (2.61456638485021e-15 * fConst47));
		fConst129 = (fConst109 + -8.0848176473502702e-07);
		fConst130 = (fConst105 + -1.8374585562159701e-05);
		fConst131 = (1.2424592324701401e-11 * fConst0);
		fConst132 = (fConst131 + 1.7786598824170602e-08);
		fConst133 = (1.6205989988740999e-11 * fConst0);
		fConst134 = (5.4668206228686198e-13 * fConst0);
		fConst135 = (((fConst134 + 7.5805581797753498e-10) * fConst0) + 8.4554167651415808e-09);
		fConst136 = ((-7.82610348263506e-10 - fConst134) * fConst0);
		fConst137 = (7.1306355950460202e-13 * fConst0);
		fConst138 = ((((fConst137 + 2.4554530285971201e-10) * fConst0) + -8.4554167651415798e-08) * fConst0);
		fConst139 = (0.0 - (7.1306355950460202e-13 * fConst47));
		fConst140 = (fConst117 + -8.8932994120853008e-09);
		fConst141 = (6.0135026851554797e-15 * fConst0);
		fConst142 = (((fConst141 + 8.0685141646071997e-12) * fConst0) + 1.8601916883311499e-10);
		fConst143 = (1.2027005370311e-14 * fConst0);
		fConst144 = (((-1.9018093216101701e-11 - fConst143) * fConst0) + 8.7072802432521805e-09);
		fConst145 = ((fConst141 + 8.6087138308985698e-12) * fConst0);
		fConst146 = (7.8436991545506303e-15 * fConst0);
		fConst147 = (((fConst146 + 5.40199666291365e-12) * fConst0) + -1.8601916883311499e-09);
		fConst148 = (1.5687398309101298e-14 * fConst0);
		fConst149 = (((-5.40199666291365e-12 - fConst148) * fConst0) + 1.8601916883311499e-09);
		fConst150 = (7.8436991545506303e-15 * fConst6);
		fConst151 = (0.0 - (1.6205989988740999e-11 * fConst47));
		fConst152 = (fConst105 + 1.8374585562159701e-05);
		fConst153 = ((1.7786598824170602e-08 - fConst131) * fConst0);
		fConst154 = (fConst109 + 8.0848176473502702e-07);
		fConst155 = (((7.5805581797753498e-10 - fConst134) * fConst0) + -8.4554167651415808e-09);
		fConst156 = ((fConst134 + -7.82610348263506e-10) * fConst0);
		fConst157 = (((2.4554530285971201e-10 - fConst137) * fConst0) + 8.4554167651415798e-08);
		fConst158 = (7.1306355950460202e-13 * fConst6);
		fConst159 = (fConst117 + 8.8932994120853008e-09);
		fConst160 = (((8.0685141646071997e-12 - fConst141) * fConst0) + -1.8601916883311499e-10);
		fConst161 = (((fConst143 + -1.9018093216101701e-11) * fConst0) + -8.7072802432521805e-09);
		fConst162 = ((8.6087138308985698e-12 - fConst141) * fConst0);
		fConst163 = ((((5.40199666291365e-12 - fConst146) * fConst0) + 1.8601916883311499e-09) * fConst0);
		fConst164 = ((((fConst148 + -5.40199666291365e-12) * fConst0) + -1.8601916883311499e-09) * fConst0);
		fConst165 = (0.0 - (7.8436991545506303e-15 * fConst47));
		fConst166 = (8.0848176473502702e-07 - fConst109);
		fConst167 = (1.8374585562159701e-05 - fConst105);
		fConst168 = (fConst107 + -1.7786598824170602e-08);
		fConst169 = (5.40199666291365e-12 * fConst0);
		fConst170 = (((fConst111 + -7.5805581797753498e-10) * fConst0) + -8.4554167651415808e-09);
		fConst171 = ((7.82610348263506e-10 - fConst111) * fConst0);
		fConst172 = ((((fConst114 + -2.4554530285971201e-10) * fConst0) + 8.4554167651415798e-08) * fConst0);
		fConst173 = (0.0 - (2.3768785316820099e-13 * fConst47));
		fConst174 = (8.8932994120853008e-09 - fConst117);
		fConst175 = (((fConst119 + -8.0685141646071997e-12) * fConst0) + -1.8601916883311499e-10);
		fConst176 = (((1.9018093216101701e-11 - fConst121) * fConst0) + -8.7072802432521805e-09);
		fConst177 = ((fConst119 + -8.6087138308985698e-12) * fConst0);
		fConst178 = (((fConst124 + -5.40199666291365e-12) * fConst0) + 1.8601916883311499e-09);
		fConst179 = (((5.40199666291365e-12 - fConst126) * fConst0) + -1.8601916883311499e-09);
		fConst180 = (2.61456638485021e-15 * fConst6);
		fConst181 = (4.02258092803644e-20 * fConst0);
		fConst182 = (((-3.69280676217593e-15 - fConst181) * fConst6) + 6.2754223114768006e-11);
		fConst183 = (2.29791433448335e-19 * fConst0);
		fConst184 = (((-2.11293773908589e-14 - fConst183) * fConst6) + 2.3037794313061898e-13);
		fConst185 = ((6.0338713920546605e-20 * fConst6) + -4.8565107840874098e-12);
		fConst186 = ((3.44687150172502e-19 * fConst6) + -2.7591009409290098e-13);
		fConst187 = (((3.69280676217593e-15 - fConst181) * fConst6) + -6.2754223114768006e-11);
		fConst188 = (((2.11293773908589e-14 - fConst183) * fConst6) + -2.3037794313061898e-13);
		fConst189 = (1.00564523200911e-20 * fConst0);
		fConst190 = (((((fConst189 + -1.8464033810879701e-15) * fConst0) + 2.4282553920437e-12) * fConst0) + -3.1377111557384003e-11);
		fConst191 = (5.7447858362083703e-20 * fConst0);
		fConst192 = (((((fConst191 + -1.0564688695429399e-14) * fConst0) + 1.3795504704645001e-13) * fConst0) + -1.1518897156530901e-13);
		fConst193 = (((((fConst189 + 1.8464033810879701e-15) * fConst0) + 2.4282553920437e-12) * fConst0) + 3.1377111557384003e-11);
		fConst194 = (((((fConst191 + 1.0564688695429399e-14) * fConst0) + 1.3795504704645001e-13) * fConst0) + 1.1518897156530901e-13);
		fConst195 = (2.3104148454527602e-18 * fConst0);
		fConst196 = (((fConst195 + 4.42026657167486e-13) * fConst0) + 2.1881941557932202e-12);
		fConst197 = (1.01658253199921e-20 * fConst0);
		fConst198 = ((((fConst197 + 1.9449172915369398e-15) * fConst0) + 9.6280542854901902e-15) * fConst0);
		fConst199 = (4.6208296909055104e-18 * fConst6);
		fConst200 = (4.37638831158645e-12 - fConst199);
		fConst201 = (4.0663301279968502e-20 * fConst0);
		fConst202 = ((-3.8898345830738796e-15 - fConst201) * fConst6);
		fConst203 = ((6.0994951919952795e-20 * fConst6) + -1.9256108570980399e-14);
		fConst204 = (fConst199 + -4.37638831158645e-12);
		fConst205 = ((3.8898345830738796e-15 - fConst201) * fConst6);
		fConst206 = (((4.42026657167486e-13 - fConst195) * fConst0) + -2.1881941557932202e-12);
		fConst207 = ((((fConst197 + -1.9449172915369398e-15) * fConst0) + 9.6280542854901902e-15) * fConst0);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		fVslider3 = FAUSTFLOAT(1.0);
		fVslider4 = FAUSTFLOAT(0.5);
		fVslider5 = FAUSTFLOAT(0.5);
		fVslider6 = FAUSTFLOAT(0.5);
		fVslider7 = FAUSTFLOAT(0.5);
		
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
			fRec7[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) {
			fRec6[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec4[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec8[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec9[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec10[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 4); l9 = (l9 + 1)) {
			fRec3[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec11[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 5); l11 = (l11 + 1)) {
			fRec1[l11] = 0.0;
			
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
		ui_interface->openVerticalBox("marshall_jcm800lo");
		ui_interface->addVerticalSlider(".amp.bass", &fVslider4, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.gain", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.master", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.middle", &fVslider5, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider3, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.presence", &fVslider7, 0.5, 0.0, 1.0, 0.01);
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
		double fSlow4 = (4.5401991009687806e-08 * (std::exp((10.0 * double(fVslider4))) + -1.0));
		double fSlow5 = (0.0010000000000000009 * double(fVslider5));
		double fSlow6 = (0.0010000000000000009 * double(fVslider6));
		double fSlow7 = (0.0010000000000000009 * double(fVslider7));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec2[0] = (fSlow1 + (0.999 * fRec2[1]));
			fRec5[0] = (fSlow2 + (0.999 * fRec5[1]));
			fRec7[0] = (fSlow3 + (0.999 * fRec7[1]));
			double fTemp0 = ((fConst0 * ((fRec5[0] * (fConst11 + (fConst12 * fRec5[0]))) + 2.3898718414362101e-06)) + 0.0025424168525917099);
			fRec6[0] = ((7.8600000000000003 * (fRec7[0] * double(input0[i]))) - (((fRec6[1] * ((fRec5[0] * (0.0 - (fConst7 * (1.0 - fRec5[0])))) + 0.0050848337051834199)) + (fRec6[2] * ((fConst0 * ((fRec5[0] * (fConst9 + (fConst10 * fRec5[0]))) + -2.3898718414362101e-06)) + 0.0025424168525917099))) / fTemp0));
			double fTemp1 = ((fRec5[0] * (((fRec6[0] * ((fConst0 * (fConst14 + (fConst15 * fRec5[0]))) + -0.013436463016190101)) + (fRec6[1] * (fConst16 + ((fConst17 * fRec5[0]) + -0.026872926032380302)))) + (fRec6[2] * ((fConst0 * (fConst18 + (fConst19 * fRec5[0]))) + -0.013436463016190101)))) / fTemp0);
			fRec4[0] = ((14.279999999999999 * (int(signbit(double(fTemp1)))?double(s02_stage2_negclip(double(fTemp1))):double(s02_stage2clip(double(fTemp1))))) - (fConst20 * fRec4[1]));
			double fTemp2 = (fConst3 * ((fConst5 * fRec4[0]) + (fConst21 * fRec4[1])));
			fRec8[0] = (fSlow4 + (0.999 * fRec8[1]));
			fRec9[0] = (fSlow5 + (0.999 * fRec9[1]));
			fRec10[0] = (fSlow6 + (0.999 * fRec10[1]));
			double fTemp3 = ((((fRec8[0] * (((fConst0 * (fConst89 + (fConst90 * fRec9[0]))) + (fRec10[0] * ((fConst0 * (fConst91 + (fConst92 * fRec9[0]))) + (fRec10[0] * (fConst93 + (fConst94 * fRec9[0])))))) + 8.1773856529415702e-07)) + (fConst0 * (fConst95 + (fRec9[0] * (fConst96 + (fConst97 * fRec9[0])))))) + (fRec10[0] * ((fConst0 * ((fConst98 + (fRec9[0] * (fConst99 + (fConst100 * fRec9[0])))) + (fRec10[0] * (fConst101 + (fConst0 * (fRec9[0] * (fConst102 + (fConst103 * fRec9[0])))))))) + 1.79902484364715e-07))) + 8.3572881373062798e-07);
			fRec3[0] = ((int(signbit(double(fTemp2)))?double(s03_stage3_negclip(double(fTemp2))):double(s03_stage3clip(double(fTemp2)))) - ((((fRec3[1] * ((((fRec8[0] * ((fConst0 * ((fConst23 + (fConst25 * fRec9[0])) + (fRec10[0] * ((fConst27 + (fConst29 * fRec9[0])) + (fConst0 * (fRec10[0] * (fConst30 + (fConst31 * fRec9[0])))))))) + 2.4532156958824702e-06)) + (fConst0 * (fConst33 + (fRec9[0] * (fConst35 + (fConst37 * fRec9[0])))))) + (fRec10[0] * (((fConst0 * (fConst39 + (fRec9[0] * (fConst41 + (fConst43 * fRec9[0]))))) + (fRec10[0] * (fConst44 + (fRec9[0] * (fConst46 + (fConst48 * fRec9[0])))))) + 5.3970745309414404e-07))) + 2.50718644119189e-06)) + (fRec3[2] * ((((fRec8[0] * (((fConst0 * (fConst49 + (fConst50 * fRec9[0]))) + (fRec10[0] * ((fConst0 * (fConst51 + (fConst52 * fRec9[0]))) + (fRec10[0] * (fConst53 + (fConst54 * fRec9[0])))))) + 2.4532156958824702e-06)) + (fConst0 * (fConst55 + (fRec9[0] * (fConst56 + (fConst57 * fRec9[0])))))) + (fRec10[0] * ((fConst0 * ((fConst58 + (fRec9[0] * (fConst59 + (fConst60 * fRec9[0])))) + (fRec10[0] * (fConst61 + (fConst0 * (fRec9[0] * (fConst62 + (fConst63 * fRec9[0])))))))) + 5.3970745309414404e-07))) + 2.50718644119189e-06))) + (fRec3[3] * ((((fRec8[0] * ((fConst0 * ((fConst65 + (fConst67 * fRec9[0])) + (fRec10[0] * ((fConst69 + (fConst71 * fRec9[0])) + (fConst0 * (fRec10[0] * (fConst72 + (fConst73 * fRec9[0])))))))) + 8.1773856529415702e-07)) + (fConst0 * (fConst75 + (fRec9[0] * (fConst77 + (fConst79 * fRec9[0])))))) + (fRec10[0] * (((fConst0 * (fConst80 + (fRec9[0] * (fConst82 + (fConst84 * fRec9[0]))))) + (fRec10[0] * (fConst85 + (fRec9[0] * (fConst87 + (fConst88 * fRec9[0])))))) + 1.79902484364715e-07))) + 8.3572881373062798e-07))) / fTemp3));
			fRec11[0] = (fSlow7 + (0.999 * fRec11[1]));
			double fTemp4 = ((fConst0 * (fConst193 + (fConst194 * fRec11[0]))) + 2.61793117193885e-11);
			fRec1[0] = ((31.600000000000001 * ((fRec2[0] * ((((fRec3[0] * (((fRec8[0] * ((fRec8[0] * ((fConst104 * fRec10[0]) + (fConst0 * (fConst106 + (fConst108 * fRec9[0]))))) + (fConst0 * ((fConst110 + (fRec9[0] * (fConst112 + (fConst113 * fRec9[0])))) + (fRec10[0] * (fConst115 + (fConst116 * fRec9[0]))))))) + (fConst0 * (fConst118 + (fRec9[0] * (fConst120 + (fRec9[0] * (fConst122 + (fConst123 * fRec9[0])))))))) + (fRec10[0] * (fConst125 + (fRec9[0] * (fConst127 + (fConst128 * fRec9[0]))))))) + (fRec3[1] * ((fRec8[0] * ((fConst0 * ((fConst129 + (fRec8[0] * (fConst130 + (fConst0 * ((fConst132 * fRec9[0]) + (fConst133 * fRec10[0])))))) + (fRec9[0] * (fConst135 + (fConst136 * fRec9[0]))))) + (fRec10[0] * (fConst138 + (fConst139 * fRec9[0]))))) + (fConst0 * ((fConst140 + (fRec9[0] * (fConst142 + (fRec9[0] * (fConst144 + (fConst145 * fRec9[0])))))) + (fRec10[0] * (fConst147 + (fRec9[0] * (fConst149 + (fConst150 * fRec9[0])))))))))) + (fRec3[2] * (((fRec8[0] * ((fRec8[0] * ((fConst151 * fRec10[0]) + (fConst0 * (fConst152 + (fConst153 * fRec9[0]))))) + (fConst0 * ((fConst154 + (fRec9[0] * (fConst155 + (fConst156 * fRec9[0])))) + (fRec10[0] * (fConst157 + (fConst158 * fRec9[0]))))))) + (fConst0 * (fConst159 + (fRec9[0] * (fConst160 + (fRec9[0] * (fConst161 + (fConst162 * fRec9[0])))))))) + (fRec10[0] * (fConst163 + (fRec9[0] * (fConst164 + (fConst165 * fRec9[0])))))))) + (fRec3[3] * ((fRec8[0] * ((fConst0 * ((fConst166 + (fRec8[0] * (fConst167 + (fConst0 * ((fConst168 * fRec9[0]) + (fConst169 * fRec10[0])))))) + (fRec9[0] * (fConst170 + (fConst171 * fRec9[0]))))) + (fRec10[0] * (fConst172 + (fConst173 * fRec9[0]))))) + (fConst0 * ((fConst174 + (fRec9[0] * (fConst175 + (fRec9[0] * (fConst176 + (fConst177 * fRec9[0])))))) + (fRec10[0] * (fConst178 + (fRec9[0] * (fConst179 + (fConst180 * fRec9[0]))))))))))) / fTemp3)) - (((((fRec1[1] * ((fConst0 * (fConst182 + (fConst184 * fRec11[0]))) + 1.04717246877554e-10)) + (fRec1[2] * ((fConst6 * (fConst185 + (fConst186 * fRec11[0]))) + 1.57075870316331e-10))) + (fRec1[3] * ((fConst0 * (fConst187 + (fConst188 * fRec11[0]))) + 1.04717246877554e-10))) + (fRec1[4] * ((fConst0 * (fConst190 + (fConst192 * fRec11[0]))) + 2.61793117193885e-11))) / fTemp4));
			double fTemp5 = (fConst0 * ((((((fRec1[0] * (fConst196 + (fConst198 * fRec11[0]))) + (fRec1[1] * (fConst200 + (fConst202 * fRec11[0])))) + (fConst0 * (fRec1[2] * ((fConst203 * fRec11[0]) + -8.84053314334972e-13)))) + (fRec1[3] * (fConst204 + (fConst205 * fRec11[0])))) + (fRec1[4] * (fConst206 + (fConst207 * fRec11[0])))) / fTemp4));
			output0[i] = FAUSTFLOAT((15.85 * (fRec0[0] * (int(signbit(double(fTemp5)))?double(s05_stage4_negclip(double(fTemp5))):double(s05_stage4clip(double(fTemp5)))))));
			fRec0[1] = fRec0[0];
			fRec2[1] = fRec2[0];
			fRec5[1] = fRec5[0];
			fRec7[1] = fRec7[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec8[1] = fRec8[0];
			fRec9[1] = fRec9[0];
			fRec10[1] = fRec10[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec3[j0] = fRec3[(j0 - 1)];
				
			}
			fRec11[1] = fRec11[0];
			for (int j1 = 4; (j1 > 0); j1 = (j1 - 1)) {
				fRec1[j1] = fRec1[(j1 - 1)];
				
			}
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_marshall_jcm800lo */

