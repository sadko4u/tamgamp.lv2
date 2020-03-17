namespace ampsim_marshall_jcm800hi {

#include <generated/stage/marshall_jcm800hi/s01_stage1_neg_table.h>
#include <generated/stage/marshall_jcm800hi/s01_stage1_table.h>
#include <generated/stage/marshall_jcm800hi/s02_stage2_neg_table.h>
#include <generated/stage/marshall_jcm800hi/s02_stage2_table.h>
#include <generated/stage/marshall_jcm800hi/s03_stage3_neg_table.h>
#include <generated/stage/marshall_jcm800hi/s03_stage3_table.h>
#include <generated/stage/marshall_jcm800hi/s05_stage4_neg_table.h>
#include <generated/stage/marshall_jcm800hi/s05_stage4_table.h>
/* ------------------------------------------------------------
name: "marshall_jcm800hi"
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
	FAUSTFLOAT fVslider1;
	double fRec1[2];
	FAUSTFLOAT fVslider2;
	double fRec4[2];
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	FAUSTFLOAT fVslider3;
	double fRec7[2];
	double fConst6;
	double fRec6[2];
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fRec5[3];
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	FAUSTFLOAT fVslider4;
	double fRec8[2];
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	FAUSTFLOAT fVslider5;
	double fRec9[2];
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
	double fRec3[5];
	double fConst57;
	FAUSTFLOAT fVslider6;
	double fRec10[2];
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
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	FAUSTFLOAT fVslider7;
	double fRec11[2];
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
	double fRec2[5];
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
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "marshall_jcm800hi");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "marshall_jcm800hi");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "marshall_jcm800hi");
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
		fConst1 = (1.8238368527014298e-05 * fConst0);
		fConst2 = (fConst1 + 0.12455831070331599);
		fConst3 = (1.0 / fConst2);
		fConst4 = (0.0010070600011653601 * fConst0);
		fConst5 = (-2.7425381295353199 - fConst4);
		fConst6 = ((0.12455831070331599 - fConst1) / fConst2);
		fConst7 = (fConst4 + -2.7425381295353199);
		fConst8 = module_faustpower2_f(fConst0);
		fConst9 = (3.0564347359864398e-09 * fConst8);
		fConst10 = (1.5282173679932199e-09 * fConst0);
		fConst11 = (fConst10 + -1.8333073903042301e-06);
		fConst12 = (3.4590705477438199e-06 - fConst10);
		fConst13 = (fConst10 + 1.8333073903042301e-06);
		fConst14 = (-3.4590705477438199e-06 - fConst10);
		fConst15 = (1.18724587211056e-08 * fConst0);
		fConst16 = (-3.2809155392933103e-05 - fConst15);
		fConst17 = (fConst15 + 2.68729260323803e-05);
		fConst18 = (2.3744917442211201e-08 * fConst8);
		fConst19 = (0.0 - fConst18);
		fConst20 = (3.2809155392933103e-05 - fConst15);
		fConst21 = (fConst15 + -2.68729260323803e-05);
		fConst22 = (1.93060508944821e-20 * fConst0);
		fConst23 = (((-1.1878521148685601e-16 - fConst22) * fConst8) + 6.4610881194991103e-10);
		fConst24 = (8.77547767931004e-19 * fConst0);
		fConst25 = (((-4.4927701833581097e-15 - fConst24) * fConst8) + 6.6694154004260502e-09);
		fConst26 = (6.6413569095185204e-19 * fConst0);
		fConst27 = ((-2.92937873837125e-15 - fConst26) * fConst8);
		fConst28 = (4.6950656935413397e-21 * fConst0);
		fConst29 = (((fConst28 + 1.9300618813532401e-17) * fConst8) + 1.43658079831162e-10);
		fConst30 = (1.4610985200940699e-20 * fConst0);
		fConst31 = ((fConst30 + 6.4446332244167502e-17) * fConst8);
		fConst32 = ((2.8959076341723099e-20 * fConst8) + -4.7539577613389504e-13);
		fConst33 = ((1.31632165189651e-18 * fConst8) + -1.28198977404065e-11);
		fConst34 = ((9.9620353642777792e-19 * fConst8) + -6.4559941076124202e-12);
		fConst35 = (7.5302560328814597e-15 - (7.0425985403120197e-21 * fConst8));
		fConst36 = (1.42031870367473e-13 - (2.19164778014111e-20 * fConst8));
		fConst37 = (((1.1878521148685601e-16 - fConst22) * fConst8) + -6.4610881194991103e-10);
		fConst38 = (((4.4927701833581097e-15 - fConst24) * fConst8) + -6.6694154004260502e-09);
		fConst39 = ((2.92937873837125e-15 - fConst26) * fConst8);
		fConst40 = (((fConst28 + -1.9300618813532401e-17) * fConst8) + -1.43658079831162e-10);
		fConst41 = ((fConst30 + -6.4446332244167502e-17) * fConst8);
		fConst42 = (4.8265127236205197e-21 * fConst0);
		fConst43 = (((((fConst42 + -5.9392605743427905e-17) * fConst0) + 2.3769788806694798e-13) * fConst0) + -3.2305440597495598e-10);
		fConst44 = (2.19386941982751e-19 * fConst0);
		fConst45 = (((((fConst44 + -2.2463850916790501e-15) * fConst0) + 6.4099488702032401e-12) * fConst0) + -3.3347077002130301e-09);
		fConst46 = (1.6603392273796301e-19 * fConst0);
		fConst47 = ((((fConst46 + -1.4646893691856201e-15) * fConst0) + 3.2279970538062101e-12) * fConst0);
		fConst48 = (1.17376642338534e-21 * fConst0);
		fConst49 = (((((9.65030940676621e-18 - fConst48) * fConst0) + -3.7651280164407299e-15) * fConst0) + -7.1829039915580998e-11);
		fConst50 = (3.6527463002351899e-21 * fConst0);
		fConst51 = ((((3.2223166122083702e-17 - fConst50) * fConst0) + -7.10159351837366e-14) * fConst0);
		fConst52 = (((((fConst42 + 5.9392605743427905e-17) * fConst0) + 2.3769788806694798e-13) * fConst0) + 3.2305440597495598e-10);
		fConst53 = (((((fConst44 + 2.2463850916790501e-15) * fConst0) + 6.4099488702032401e-12) * fConst0) + 3.3347077002130301e-09);
		fConst54 = ((((fConst46 + 1.4646893691856201e-15) * fConst0) + 3.2279970538062101e-12) * fConst0);
		fConst55 = (((((-9.65030940676621e-18 - fConst48) * fConst0) + -3.7651280164407299e-15) * fConst0) + 7.1829039915580998e-11);
		fConst56 = ((((-3.2223166122083702e-17 - fConst50) * fConst0) + -7.10159351837366e-14) * fConst0);
		fConst57 = (0.0 - (5.5129125352152e-17 * module_faustpower4_f(fConst0)));
		fConst58 = (1.36953373391848e-10 - (4.22656627699832e-17 * fConst8));
		fConst59 = (9.2984458093962998e-19 * fConst8);
		fConst60 = (4.9895642898754903e-12 - fConst59);
		fConst61 = (fConst59 + -3.0129742146206498e-12);
		fConst62 = (1.2128407577473399e-18 * fConst8);
		fConst63 = (2.1782855974267601e-12 - fConst62);
		fConst64 = (1.8097945191363001e-16 * fConst0);
		fConst65 = (((-1.09720931749876e-12 - fConst64) * fConst0) + -1.5562883339982699e-09);
		fConst66 = (8.2263387233468305e-15 * fConst0);
		fConst67 = (((-4.9873150795398001e-11 - fConst66) * fConst0) + -7.0740378818103296e-08);
		fConst68 = (9.1881875586919995e-18 * fConst0);
		fConst69 = ((-2.07971651396379e-14 - fConst68) * fConst0);
		fConst70 = (7.0442771283305293e-18 * fConst0);
		fConst71 = (((-4.61974934559815e-14 - fConst70) * fConst0) + -6.8476686695923895e-11);
		fConst72 = (1.5497409682327199e-19 * fConst0);
		fConst73 = (((((-1.1555598190420799e-15 - fConst72) * fConst0) + -2.49478214493775e-12) * fConst0) + -1.5237357965270101e-09);
		fConst74 = ((((fConst72 + 1.01634485603159e-15) * fConst0) + 1.50648710731033e-12) * fConst0);
		fConst75 = (2.0214012629122401e-19 * fConst0);
		fConst76 = (((((-8.7518252210348803e-16 - fConst75) * fConst0) + -1.0891427987133801e-12) * fConst0) + -3.25525374712589e-10);
		fConst77 = ((fConst75 + 4.5753763307203397e-16) * fConst8);
		fConst78 = (3.6195890382726101e-16 * fConst8);
		fConst79 = (fConst78 + -3.1125766679965399e-09);
		fConst80 = (1.6452677446693699e-14 * fConst8);
		fConst81 = (fConst80 + -1.4148075763620699e-07);
		fConst82 = (2.8177108513322099e-17 * fConst0);
		fConst83 = (fConst82 + 9.2394986911962999e-14);
		fConst84 = (3.6752750234767998e-17 * fConst0);
		fConst85 = (fConst84 + 4.15943302792758e-14);
		fConst86 = (6.1989638729308701e-19 * fConst0);
		fConst87 = (((fConst86 + 2.3111196380841598e-15) * fConst8) + -3.0474715930540301e-09);
		fConst88 = ((-2.0326897120631899e-15 - fConst86) * fConst8);
		fConst89 = (8.0856050516489604e-19 * fConst0);
		fConst90 = (((fConst89 + 1.75036504420698e-15) * fConst8) + -6.51050749425178e-10);
		fConst91 = ((-9.1507526614406696e-16 - fConst89) * fConst8);
		fConst92 = (3.1125766679965399e-09 - fConst78);
		fConst93 = (1.4148075763620699e-07 - fConst80);
		fConst94 = (fConst82 + -9.2394986911962999e-14);
		fConst95 = (fConst84 + -4.15943302792758e-14);
		fConst96 = (((fConst86 + -2.3111196380841598e-15) * fConst8) + 3.0474715930540301e-09);
		fConst97 = ((2.0326897120631899e-15 - fConst86) * fConst8);
		fConst98 = (((fConst89 + -1.75036504420698e-15) * fConst8) + 6.51050749425178e-10);
		fConst99 = ((9.1507526614406696e-16 - fConst89) * fConst8);
		fConst100 = (((fConst64 + -1.09720931749876e-12) * fConst0) + 1.5562883339982699e-09);
		fConst101 = (((fConst66 + -4.9873150795398001e-11) * fConst0) + 7.0740378818103296e-08);
		fConst102 = ((2.07971651396379e-14 - fConst68) * fConst0);
		fConst103 = (((4.61974934559815e-14 - fConst70) * fConst0) + -6.8476686695923895e-11);
		fConst104 = (((((1.1555598190420799e-15 - fConst72) * fConst0) + -2.49478214493775e-12) * fConst0) + 1.5237357965270101e-09);
		fConst105 = ((((fConst72 + -1.01634485603159e-15) * fConst0) + 1.50648710731033e-12) * fConst0);
		fConst106 = (((((8.7518252210348803e-16 - fConst75) * fConst0) + -1.0891427987133801e-12) * fConst0) + 3.25525374712589e-10);
		fConst107 = ((fConst75 + -4.5753763307203397e-16) * fConst8);
		fConst108 = (3.6103118905312199e-20 * fConst0);
		fConst109 = (((-3.3143358479671e-15 - fConst108) * fConst8) + 5.6322625163609103e-11);
		fConst110 = (2.06240411336268e-19 * fConst0);
		fConst111 = (((-1.8963855265111199e-14 - fConst110) * fConst8) + 2.06766810273592e-13);
		fConst112 = (1.96783785357067e-20 * fConst0);
		fConst113 = (((-1.7300441448222399e-15 - fConst112) * fConst8) + 2.06766810273592e-12);
		fConst114 = (9.2862874802808895e-20 * fConst0);
		fConst115 = ((-8.1171498696398895e-15 - fConst114) * fConst8);
		fConst116 = (((fConst112 + 1.7300441448222399e-15) * fConst8) + -2.06766810273592e-12);
		fConst117 = ((fConst114 + 8.1171498696398895e-15) * fConst8);
		fConst118 = ((5.4154678357968202e-20 * fConst8) + -4.3587733749789e-12);
		fConst119 = ((3.09360617004402e-19 * fConst8) + -2.4763243072937701e-13);
		fConst120 = (2.9517567803560003e-20 * fConst8);
		fConst121 = (fConst120 + -1.8466779884595501e-12);
		fConst122 = (1.3929431220421299e-19 * fConst8);
		fConst123 = (fConst122 + -9.0977396520380603e-15);
		fConst124 = (1.8466779884595501e-12 - fConst120);
		fConst125 = (9.0977396520380603e-15 - fConst122);
		fConst126 = (((3.3143358479671e-15 - fConst108) * fConst8) + -5.6322625163609103e-11);
		fConst127 = (((1.8963855265111199e-14 - fConst110) * fConst8) + -2.06766810273592e-13);
		fConst128 = (((1.7300441448222399e-15 - fConst112) * fConst8) + -2.06766810273592e-12);
		fConst129 = ((8.1171498696398895e-15 - fConst114) * fConst8);
		fConst130 = (((fConst112 + -1.7300441448222399e-15) * fConst8) + 2.06766810273592e-12);
		fConst131 = ((fConst114 + -8.1171498696398895e-15) * fConst8);
		fConst132 = (9.0257797263280407e-21 * fConst0);
		fConst133 = (((((fConst132 + -1.65716792398355e-15) * fConst0) + 2.17938668748945e-12) * fConst0) + -2.81613125818046e-11);
		fConst134 = (5.1560102834067001e-20 * fConst0);
		fConst135 = (((((fConst134 + -9.4819276325556201e-15) * fConst0) + 1.23816215364688e-13) * fConst0) + -1.03383405136796e-13);
		fConst136 = (4.9195946339266697e-21 * fConst0);
		fConst137 = (((((fConst136 + -8.6502207241112202e-16) * fConst0) + 9.2333899422977708e-13) * fConst0) + -1.03383405136796e-12);
		fConst138 = (2.32157187007022e-20 * fConst0);
		fConst139 = ((((fConst138 + -4.0585749348199503e-15) * fConst0) + 4.5488698260190301e-15) * fConst0);
		fConst140 = (((((8.6502207241112202e-16 - fConst136) * fConst0) + -9.2333899422977708e-13) * fConst0) + 1.03383405136796e-12);
		fConst141 = ((((4.0585749348199503e-15 - fConst138) * fConst0) + -4.5488698260190301e-15) * fConst0);
		fConst142 = (((((fConst132 + 1.65716792398355e-15) * fConst0) + 2.17938668748945e-12) * fConst0) + 2.81613125818046e-11);
		fConst143 = (((((fConst134 + 9.4819276325556201e-15) * fConst0) + 1.23816215364688e-13) * fConst0) + 1.03383405136796e-13);
		fConst144 = (((((fConst136 + 8.6502207241112202e-16) * fConst0) + 9.2333899422977708e-13) * fConst0) + 1.03383405136796e-12);
		fConst145 = ((((fConst138 + 4.0585749348199503e-15) * fConst0) + 4.5488698260190301e-15) * fConst0);
		fConst146 = (((((-8.6502207241112202e-16 - fConst136) * fConst0) + -9.2333899422977708e-13) * fConst0) + -1.03383405136796e-12);
		fConst147 = ((((-4.0585749348199503e-15 - fConst138) * fConst0) + -4.5488698260190301e-15) * fConst0);
		fConst148 = (2.0736234716626899e-18 * fConst0);
		fConst149 = (((fConst148 + 3.9672392659027401e-13) * fConst0) + 1.96392901548289e-12);
		fConst150 = (9.1239432753158393e-21 * fConst0);
		fConst151 = ((((fConst150 + 1.7455852769972099e-15) * fConst0) + 8.6412876681247105e-15) * fConst0);
		fConst152 = (4.1472469433253798e-18 * fConst8);
		fConst153 = (3.9278580309657799e-12 - fConst152);
		fConst154 = (3.6495773101263297e-20 * fConst0);
		fConst155 = ((-3.4911705539944199e-15 - fConst154) * fConst8);
		fConst156 = ((5.4743659651894997e-20 * fConst8) + -1.7282575336249399e-14);
		fConst157 = (fConst152 + -3.9278580309657799e-12);
		fConst158 = ((3.4911705539944199e-15 - fConst154) * fConst8);
		fConst159 = (((3.9672392659027401e-13 - fConst148) * fConst0) + -1.96392901548289e-12);
		fConst160 = ((((fConst150 + -1.7455852769972099e-15) * fConst0) + 8.6412876681247105e-15) * fConst0);
		
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
			fRec1[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec4[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec7[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec6[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) {
			fRec5[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec8[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec9[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 5); l8 = (l8 + 1)) {
			fRec3[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec10[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec11[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 5); l11 = (l11 + 1)) {
			fRec2[l11] = 0.0;
			
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
		ui_interface->openVerticalBox("marshall_jcm800hi");
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
		double fSlow1 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider1))) + -1.0));
		double fSlow2 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider2))) + -1.0));
		double fSlow3 = (0.0010000000000000009 * double(fVslider3));
		double fSlow4 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider4))) + -1.0));
		double fSlow5 = (0.0010000000000000009 * double(fVslider5));
		double fSlow6 = (0.0010000000000000009 * double(fVslider6));
		double fSlow7 = (0.0010000000000000009 * double(fVslider7));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec1[0] = (fSlow1 + (0.999 * fRec1[1]));
			fRec4[0] = (fSlow2 + (0.999 * fRec4[1]));
			fRec7[0] = (fSlow3 + (0.999 * fRec7[1]));
			fRec6[0] = ((0.5 * (fRec7[0] * double(input0[i]))) - (fConst6 * fRec6[1]));
			double fTemp0 = (fConst3 * ((fConst5 * fRec6[0]) + (fConst7 * fRec6[1])));
			double fTemp1 = ((fConst0 * ((fRec4[0] * (fConst13 + (fConst14 * fRec4[0]))) + 2.3898718414362101e-06)) + 0.0025424168525917099);
			fRec5[0] = ((28.0 * (int(signbit(double(fTemp0)))?double(s01_stage1_negclip(double(fTemp0))):double(s01_stage1clip(double(fTemp0))))) - (((fRec5[1] * ((fRec4[0] * (0.0 - (fConst9 * (1.0 - fRec4[0])))) + 0.0050848337051834199)) + (fRec5[2] * ((fConst0 * ((fRec4[0] * (fConst11 + (fConst12 * fRec4[0]))) + -2.3898718414362101e-06)) + 0.0025424168525917099))) / fTemp1));
			double fTemp2 = ((fRec4[0] * (((fRec5[0] * ((fConst0 * (fConst16 + (fConst17 * fRec4[0]))) + -0.013436463016190101)) + (fRec5[1] * (fConst18 + ((fConst19 * fRec4[0]) + -0.026872926032380302)))) + (fRec5[2] * ((fConst0 * (fConst20 + (fConst21 * fRec4[0]))) + -0.013436463016190101)))) / fTemp1);
			fRec8[0] = (fSlow4 + (0.999 * fRec8[1]));
			fRec9[0] = (fSlow5 + (0.999 * fRec9[1]));
			double fTemp3 = ((fConst0 * ((fConst52 + (fRec8[0] * (fConst53 + (fConst54 * fRec9[0])))) + (fRec9[0] * (fConst55 + (fConst56 * fRec9[0]))))) + 7.4203553631798501e-08);
			fRec3[0] = ((13.0 * (int(signbit(double(fTemp2)))?double(s02_stage2_negclip(double(fTemp2))):double(s02_stage2clip(double(fTemp2))))) - (((((fRec3[1] * ((fConst0 * ((fConst23 + (fRec8[0] * (fConst25 + (fConst27 * fRec9[0])))) + (fRec9[0] * (fConst29 + (fConst31 * fRec9[0]))))) + 2.96814214527194e-07)) + (fRec3[2] * ((fConst8 * ((fConst32 + (fRec8[0] * (fConst33 + (fConst34 * fRec9[0])))) + (fRec9[0] * (fConst35 + (fConst36 * fRec9[0]))))) + 4.4522132179079101e-07))) + (fRec3[3] * ((fConst0 * ((fConst37 + (fRec8[0] * (fConst38 + (fConst39 * fRec9[0])))) + (fRec9[0] * (fConst40 + (fConst41 * fRec9[0]))))) + 2.96814214527194e-07))) + (fRec3[4] * ((fConst0 * ((fConst43 + (fRec8[0] * (fConst45 + (fConst47 * fRec9[0])))) + (fRec9[0] * (fConst49 + (fConst51 * fRec9[0]))))) + 7.4203553631798501e-08))) / fTemp3));
			fRec10[0] = (fSlow6 + (0.999 * fRec10[1]));
			double fTemp4 = (((((fRec3[2] * ((fRec8[0] * ((fConst57 * fRec10[0]) + (fConst8 * ((fConst58 * fRec9[0]) + 9.9746301590796106e-11)))) + (fConst8 * (((fRec9[0] * (fConst60 + (fConst61 * fRec9[0]))) + 2.1944186349975099e-12) + (fRec10[0] * (fConst63 + (fConst62 * fRec9[0]))))))) + (fConst0 * ((fRec3[0] * (((fConst65 + (fRec8[0] * (fConst67 + (fConst0 * ((fConst69 * fRec10[0]) + (fConst71 * fRec9[0])))))) + (fRec9[0] * (fConst73 + (fConst74 * fRec9[0])))) + (fRec10[0] * (fConst76 + (fConst77 * fRec9[0]))))) + (fRec3[1] * (((fConst79 + (fRec8[0] * (fConst81 + (fConst8 * ((fConst83 * fRec9[0]) + (fConst85 * fRec10[0])))))) + (fRec9[0] * (fConst87 + (fConst88 * fRec9[0])))) + (fRec10[0] * (fConst90 + (fConst91 * fRec9[0])))))))) + (fConst0 * (fRec3[3] * (((fConst92 + (fRec8[0] * (fConst93 + (fConst8 * ((fConst94 * fRec9[0]) + (fConst95 * fRec10[0])))))) + (fRec9[0] * (fConst96 + (fConst97 * fRec9[0])))) + (fRec10[0] * (fConst98 + (fConst99 * fRec9[0]))))))) + (fConst0 * (fRec3[4] * (((fConst100 + (fRec8[0] * (fConst101 + (fConst0 * ((fConst102 * fRec10[0]) + (fConst103 * fRec9[0])))))) + (fRec9[0] * (fConst104 + (fConst105 * fRec9[0])))) + (fRec10[0] * (fConst106 + (fConst107 * fRec9[0]))))))) / fTemp3);
			fRec11[0] = (fSlow7 + (0.999 * fRec11[1]));
			double fTemp5 = ((fConst0 * ((fConst142 + (fConst143 * fRec11[0])) + (fRec1[0] * ((fConst144 + (fConst145 * fRec11[0])) + (fRec1[0] * (fConst146 + (fConst147 * fRec11[0]))))))) + 2.3496228440180899e-11);
			fRec2[0] = ((70.0 * (int(signbit(double(fTemp4)))?double(s03_stage3_negclip(double(fTemp4))):double(s03_stage3clip(double(fTemp4))))) - (((((fRec2[1] * ((fConst0 * ((fConst109 + (fConst111 * fRec11[0])) + (fRec1[0] * ((fConst113 + (fConst115 * fRec11[0])) + (fRec1[0] * (fConst116 + (fConst117 * fRec11[0]))))))) + 9.3984913760723805e-11)) + (fRec2[2] * ((fConst8 * ((fConst118 + (fConst119 * fRec11[0])) + (fRec1[0] * ((fConst121 + (fConst123 * fRec11[0])) + (fRec1[0] * (fConst124 + (fConst125 * fRec11[0]))))))) + 1.40977370641086e-10))) + (fRec2[3] * ((fConst0 * ((fConst126 + (fConst127 * fRec11[0])) + (fRec1[0] * ((fConst128 + (fConst129 * fRec11[0])) + (fRec1[0] * (fConst130 + (fConst131 * fRec11[0]))))))) + 9.3984913760723805e-11))) + (fRec2[4] * ((fConst0 * ((fConst133 + (fConst135 * fRec11[0])) + (fRec1[0] * ((fConst137 + (fConst139 * fRec11[0])) + (fRec1[0] * (fConst140 + (fConst141 * fRec11[0]))))))) + 2.3496228440180899e-11))) / fTemp5));
			double fTemp6 = (fConst0 * ((fRec1[0] * (((((fRec2[0] * (fConst149 + (fConst151 * fRec11[0]))) + (fRec2[1] * (fConst153 + (fConst155 * fRec11[0])))) + (fConst0 * (fRec2[2] * ((fConst156 * fRec11[0]) + -7.9344785318054902e-13)))) + (fRec2[3] * (fConst157 + (fConst158 * fRec11[0])))) + (fRec2[4] * (fConst159 + (fConst160 * fRec11[0]))))) / fTemp5));
			output0[i] = FAUSTFLOAT((100.0 * (fRec0[0] * (int(signbit(double(fTemp6)))?double(s05_stage4_negclip(double(fTemp6))):double(s05_stage4clip(double(fTemp6)))))));
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			fRec4[1] = fRec4[0];
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec8[1] = fRec8[0];
			fRec9[1] = fRec9[0];
			for (int j0 = 4; (j0 > 0); j0 = (j0 - 1)) {
				fRec3[j0] = fRec3[(j0 - 1)];
				
			}
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			for (int j1 = 4; (j1 > 0); j1 = (j1 - 1)) {
				fRec2[j1] = fRec2[(j1 - 1)];
				
			}
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_marshall_jcm800hi */

