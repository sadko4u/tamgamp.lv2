namespace ampsim_peavey_5150ii_lead {

#include <generated/stage/peavey_5150ii_lead/s01_stage1_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s01_stage1_table.h>
#include <generated/stage/peavey_5150ii_lead/s02_stage2_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s02_stage2_table.h>
#include <generated/stage/peavey_5150ii_lead/s03_stage3_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s03_stage3_table.h>
#include <generated/stage/peavey_5150ii_lead/s04_stage4_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s04_stage4_table.h>
#include <generated/stage/peavey_5150ii_lead/s05_stage5_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s05_stage5_table.h>
#include <generated/stage/peavey_5150ii_lead/s06_stage6_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s06_stage6_table.h>
#include <generated/stage/peavey_5150ii_lead/s08_stage7_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s08_stage7_table.h>
#include <generated/stage/peavey_5150ii_lead/s09_stage8_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s09_stage8_table.h>
#include <generated/stage/peavey_5150ii_lead/s10_stage9_neg_table.h>
#include <generated/stage/peavey_5150ii_lead/s10_stage9_table.h>
/* ------------------------------------------------------------
name: "peavey_5150ii_lead"
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
	FAUSTFLOAT fVslider1;
	double fRec7[2];
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	FAUSTFLOAT fVslider2;
	double fRec10[2];
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fRec9[5];
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
	double fRec8[4];
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
	double fRec6[2];
	double fConst64;
	double fConst65;
	double fConst66;
	double fRec5[3];
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	FAUSTFLOAT fVslider3;
	double fRec11[2];
	FAUSTFLOAT fVslider4;
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
	double fRec4[4];
	double fConst113;
	double fConst114;
	double fConst115;
	double fConst116;
	double fConst117;
	double fConst118;
	double fConst119;
	double fConst120;
	FAUSTFLOAT fVslider5;
	double fRec13[2];
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
	double fRec3[4];
	double fConst155;
	double fConst156;
	double fConst157;
	double fConst158;
	double fConst159;
	double fRec2[3];
	double fConst160;
	double fConst161;
	double fConst162;
	double fConst163;
	double fRec1[3];
	double fConst164;
	double fConst165;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "peavey_5150ii_lead");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "peavey_5150ii_lead");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "peavey_5150ii_lead");
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
		fConst1 = (4.3370466939498002e-10 * fConst0);
		fConst2 = (1.0 / (((fConst1 + 1.5508638534814701e-08) * fConst0) + 2.70642953771017e-08));
		fConst3 = (2.57276196211087e-11 * fConst0);
		fConst4 = ((fConst3 + 4.0826644092102098e-12) * fConst0);
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
		fConst15 = (90.0 * fConst0);
		fConst16 = (4.2766979784866098e-10 * fConst0);
		fConst17 = (1.0 / (((fConst16 + 3.0486082839774299e-07) * fConst0) + 1.5465993593328099e-05));
		fConst18 = (3.5202117677095202e-10 * fConst0);
		fConst19 = (((-5.3304916679800495e-07 - fConst18) * fConst0) + 4.7917053321451697e-07);
		fConst20 = (2.08110484866641e-05 * fConst0);
		fConst21 = (fConst20 + 0.00106967264012324);
		fConst22 = (1.0 / fConst21);
		fConst23 = (0.00040870031119765799 * fConst0);
		fConst24 = (-0.0024920750682785198 - fConst23);
		fConst25 = (6.7224672867785896e-21 * fConst0);
		fConst26 = (1.0 / (((((((fConst25 + 8.7052636265907995e-15) * fConst0) + 6.86307224330787e-13) * fConst0) + 1.2087802567120001e-11) * fConst0) + 4.4077150479075301e-11));
		fConst27 = module_faustpower2_f(fConst0);
		fConst28 = (1.4161936664953399e-13 * fConst0);
		fConst29 = (-8.6353272347279903e-13 - fConst28);
		fConst30 = (2.6889869147114301e-20 * fConst0);
		fConst31 = (((((-1.7410527253181599e-14 - fConst30) * fConst27) + 2.4175605134239901e-11) * fConst0) + 1.76308601916301e-10);
		fConst32 = ((((4.0334803720671499e-20 * fConst27) + -1.37261444866157e-12) * fConst27) + 2.6446290287445199e-10);
		fConst33 = (((((1.7410527253181599e-14 - fConst30) * fConst27) + -2.4175605134239901e-11) * fConst0) + 1.76308601916301e-10);
		fConst34 = (((((((fConst25 + -8.7052636265907995e-15) * fConst0) + 6.86307224330787e-13) * fConst0) + -1.2087802567120001e-11) * fConst0) + 4.4077150479075301e-11);
		fConst35 = (2.8323873329906798e-13 * fConst0);
		fConst36 = (0.0 - (2.8323873329906798e-13 * fConst12));
		fConst37 = ((fConst28 + -8.6353272347279903e-13) * fConst27);
		fConst38 = (5.0389083931064598e-11 * fConst0);
		fConst39 = ((5.4427853155638101e-08 - fConst38) * fConst0);
		fConst40 = (9.6664773255511802e-14 * fConst0);
		fConst41 = ((((-1.8035826385131901e-11 - fConst40) * fConst0) + 9.6251542127317693e-10) * fConst0);
		fConst42 = (((((fConst40 + 5.2314114773611299e-11) * fConst0) + -2.01495647671585e-08) * fConst0) + -3.0718577274683798e-06);
		fConst43 = ((-5.4427853155638101e-08 - fConst38) * fConst0);
		fConst44 = ((((fConst40 + -1.8035826385131901e-11) * fConst0) + -9.6251542127317693e-10) * fConst0);
		fConst45 = (((((5.2314114773611299e-11 - fConst40) * fConst0) + 2.01495647671585e-08) * fConst0) + -3.0718577274683798e-06);
		fConst46 = ((fConst38 + -5.4427853155638101e-08) * fConst0);
		fConst47 = (3.2221591085170603e-14 * fConst0);
		fConst48 = ((((1.8035826385131901e-11 - fConst47) * fConst0) + -9.6251542127317693e-10) * fConst0);
		fConst49 = (((((fConst47 + -5.2314114773611299e-11) * fConst0) + 2.01495647671585e-08) * fConst0) + -1.0239525758227901e-06);
		fConst50 = ((fConst38 + 5.4427853155638101e-08) * fConst0);
		fConst51 = ((((fConst47 + 1.8035826385131901e-11) * fConst0) + 9.6251542127317693e-10) * fConst0);
		fConst52 = (((((-5.2314114773611299e-11 - fConst47) * fConst0) + -2.01495647671585e-08) * fConst0) + -1.0239525758227901e-06);
		fConst53 = (3.4063252169753e-13 * fConst0);
		fConst54 = (((-3.42709549268856e-10 - fConst53) * fConst0) + -2.0770275713265201e-09);
		fConst55 = (((fConst53 + 1.7239328842009101e-10) * fConst0) + 1.0385137856632601e-09);
		fConst56 = (1.02189756509259e-12 * fConst0);
		fConst57 = (((fConst56 + 3.42709549268856e-10) * fConst0) + -2.0770275713265201e-09);
		fConst58 = (((-1.7239328842009101e-10 - fConst56) * fConst0) + 1.0385137856632601e-09);
		fConst59 = (((3.42709549268856e-10 - fConst56) * fConst0) + 2.0770275713265201e-09);
		fConst60 = (((fConst56 + -1.7239328842009101e-10) * fConst0) + -1.0385137856632601e-09);
		fConst61 = (((fConst53 + -3.42709549268856e-10) * fConst0) + 2.0770275713265201e-09);
		fConst62 = (((1.7239328842009101e-10 - fConst53) * fConst0) + -1.0385137856632601e-09);
		fConst63 = ((0.00106967264012324 - fConst20) / fConst21);
		fConst64 = (fConst23 + -0.0024920750682785198);
		fConst65 = (3.0931987186656198e-05 - (8.5533959569732196e-10 * fConst27));
		fConst66 = (((fConst16 + -3.0486082839774299e-07) * fConst0) + 1.5465993593328099e-05);
		fConst67 = ((7.0404235354190302e-10 * fConst27) + 9.5834106642903499e-07);
		fConst68 = (((5.3304916679800495e-07 - fConst18) * fConst0) + 4.7917053321451697e-07);
		fConst69 = (7.87860088953912e-16 * fConst0);
		fConst70 = (((-1.7850034510535401e-12 - fConst69) * fConst0) + 2.7677930013121501e-09);
		fConst71 = (3.2520182395118903e-14 * fConst0);
		fConst72 = (((-5.3340647332806302e-11 - fConst71) * fConst0) + 2.27820978547042e-08);
		fConst73 = (1.0460099904409399e-15 * fConst0);
		fConst74 = (((-1.5476846062005301e-12 - fConst73) * fConst0) + 1.11527848865931e-09);
		fConst75 = (4.1099975197235498e-14 * fConst0);
		fConst76 = (-5.01206152803492e-11 - fConst75);
		fConst77 = (fConst76 * fConst0);
		fConst78 = (1.8338700793948501e-15 * fConst0);
		fConst79 = (((fConst78 + 2.53822436987567e-12) * fConst0) + -5.7488581889655002e-10);
		fConst80 = (2.1185554225379099e-14 * fConst0);
		fConst81 = (fConst80 + 2.5835368701210899e-11);
		fConst82 = (fConst81 * fConst0);
		fConst83 = (((fConst69 + -1.7850034510535401e-12) * fConst0) + -2.7677930013121501e-09);
		fConst84 = (((fConst71 + -5.3340647332806302e-11) * fConst0) + -2.27820978547042e-08);
		fConst85 = (((fConst73 + -1.5476846062005301e-12) * fConst0) + -1.11527848865931e-09);
		fConst86 = (fConst75 + -5.01206152803492e-11);
		fConst87 = (fConst86 * fConst0);
		fConst88 = (((2.53822436987567e-12 - fConst78) * fConst0) + 5.7488581889655002e-10);
		fConst89 = (2.5835368701210899e-11 - fConst80);
		fConst90 = (fConst89 * fConst0);
		fConst91 = (2.6262002965130401e-16 * fConst0);
		fConst92 = (((1.7850034510535401e-12 - fConst91) * fConst0) + -2.7677930013121501e-09);
		fConst93 = (1.0840060798373001e-14 * fConst0);
		fConst94 = (((5.3340647332806302e-11 - fConst93) * fConst0) + -2.27820978547042e-08);
		fConst95 = (3.4866999681364699e-16 * fConst0);
		fConst96 = (((1.5476846062005301e-12 - fConst95) * fConst0) + -1.11527848865931e-09);
		fConst97 = (1.36999917324118e-14 * fConst0);
		fConst98 = (5.01206152803492e-11 - fConst97);
		fConst99 = (fConst98 * fConst0);
		fConst100 = (6.11290026464951e-16 * fConst0);
		fConst101 = (((fConst100 + -2.53822436987567e-12) * fConst0) + 5.7488581889655002e-10);
		fConst102 = (7.0618514084597001e-15 * fConst0);
		fConst103 = (fConst102 + -2.5835368701210899e-11);
		fConst104 = (fConst103 * fConst0);
		fConst105 = (((fConst91 + 1.7850034510535401e-12) * fConst0) + 2.7677930013121501e-09);
		fConst106 = (((fConst93 + 5.3340647332806302e-11) * fConst0) + 2.27820978547042e-08);
		fConst107 = (((fConst95 + 1.5476846062005301e-12) * fConst0) + 1.11527848865931e-09);
		fConst108 = (fConst97 + 5.01206152803492e-11);
		fConst109 = (fConst108 * fConst0);
		fConst110 = (((-2.53822436987567e-12 - fConst100) * fConst0) + -5.7488581889655002e-10);
		fConst111 = (-2.5835368701210899e-11 - fConst102);
		fConst112 = (fConst111 * fConst0);
		fConst113 = (1.7474137369448499e-13 * fConst0);
		fConst114 = (fConst113 + 5.5193742225314305e-10);
		fConst115 = (7.2127290418574598e-12 * fConst0);
		fConst116 = (fConst115 + 2.27820978547042e-08);
		fConst117 = (3.3190701619760598e-16 * fConst0);
		fConst118 = (((fConst117 + 1.34125460635116e-12) * fConst0) + 5.4039266976275699e-10);
		fConst119 = (1.67629806160407e-17 * fConst0);
		fConst120 = (fConst119 + 1.3509816744068901e-13);
		fConst121 = (-1.21426232895691e-12 - fConst117);
		fConst122 = (2.7938301026734498e-16 * fConst0);
		fConst123 = (-1.3509816744068901e-13 - fConst122);
		fConst124 = (((fConst91 + 4.9273003628967995e-13) * fConst0) + 1.1913202037951699e-10);
		fConst125 = (1.0840060798373001e-14 * fConst27);
		fConst126 = (5.5193742225314305e-10 - fConst113);
		fConst127 = (2.27820978547042e-08 - fConst115);
		fConst128 = (9.9572104859281803e-16 * fConst0);
		fConst129 = (((-1.34125460635116e-12 - fConst128) * fConst0) + 5.4039266976275699e-10);
		fConst130 = (5.0288941848121998e-17 * fConst0);
		fConst131 = (-1.3509816744068901e-13 - fConst130);
		fConst132 = (fConst128 + 1.21426232895691e-12);
		fConst133 = (8.3814903080203399e-16 * fConst0);
		fConst134 = (fConst133 + 1.3509816744068901e-13);
		fConst135 = (((-4.9273003628967995e-13 - fConst69) * fConst0) + 1.1913202037951699e-10);
		fConst136 = (-5.5193742225314305e-10 - fConst113);
		fConst137 = (-2.27820978547042e-08 - fConst115);
		fConst138 = (((fConst128 + -1.34125460635116e-12) * fConst0) + -5.4039266976275699e-10);
		fConst139 = (fConst130 + -1.3509816744068901e-13);
		fConst140 = (1.21426232895691e-12 - fConst128);
		fConst141 = (1.3509816744068901e-13 - fConst133);
		fConst142 = (((fConst69 + -4.9273003628967995e-13) * fConst0) + -1.1913202037951699e-10);
		fConst143 = (3.2520182395118903e-14 * fConst27);
		fConst144 = (fConst113 + -5.5193742225314305e-10);
		fConst145 = (fConst115 + -2.27820978547042e-08);
		fConst146 = (((1.34125460635116e-12 - fConst117) * fConst0) + -5.4039266976275699e-10);
		fConst147 = (1.3509816744068901e-13 - fConst119);
		fConst148 = (fConst117 + -1.21426232895691e-12);
		fConst149 = (fConst122 + -1.3509816744068901e-13);
		fConst150 = (((4.9273003628967995e-13 - fConst91) * fConst0) + -1.1913202037951699e-10);
		fConst151 = (2.71008318161101e-14 * fConst0);
		fConst152 = (((((-4.1442087005360399e-13 - fConst151) * fConst0) + 2.29677429297512e-12) * fConst0) + 3.4470596945936702e-12);
		fConst153 = (((((fConst151 + -4.1442087005360399e-13) * fConst0) + -2.29677429297512e-12) * fConst0) + 3.4470596945936702e-12);
		fConst154 = (((((4.1442087005360399e-13 - fConst10) * fConst0) + -2.29677429297512e-12) * fConst0) + 1.1490198981978899e-12);
		fConst155 = (8.8212303264889599e-15 * fConst12);
		fConst156 = (0.0 - fConst155);
		fConst157 = (1.0 / fConst6);
		fConst158 = (0.00030299068814094001 - (2.7450644570995899e-10 * fConst27));
		fConst159 = (((fConst5 + -1.42420224832928e-05) * fConst0) + 0.00015149534407047);
		fConst160 = (1.2404329421577799e-08 * fConst0);
		fConst161 = (0.00019994083529300001 - fConst8);
		fConst162 = (5.4128590754203499e-08 - (8.6740933878996004e-10 * fConst27));
		fConst163 = (((fConst1 + -1.5508638534814701e-08) * fConst0) + 2.70642953771017e-08);
		fConst164 = (0.0 - (5.1455239242217302e-11 * fConst27));
		fConst165 = ((fConst3 + -4.0826644092102098e-12) * fConst0);
		
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
		for (int l4 = 0; (l4 < 4); l4 = (l4 + 1)) {
			fRec8[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec6[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) {
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
		ui_interface->openVerticalBox("peavey_5150ii_lead");
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
			fRec9[0] = ((0.080000000000000002 * (fRec10[0] * double(input0[i]))) - (fConst26 * ((((fConst31 * fRec9[1]) + (fConst32 * fRec9[2])) + (fConst33 * fRec9[3])) + (fConst34 * fRec9[4]))));
			double fTemp0 = (fConst26 * (((fConst27 * (((fConst29 * fRec9[0]) + (fConst35 * fRec9[1])) + (1.7270654469456001e-12 * fRec9[2]))) + (fConst36 * fRec9[3])) + (fConst37 * fRec9[4])));
			double fTemp1 = (fConst50 + ((fRec7[0] * (fConst51 + ((fConst52 * fRec7[0]) + -1.45699490863443e-20))) + 3.0718577274684099e-06));
			fRec8[0] = ((7.0 * (int(signbit(double(fTemp0)))?double(s01_stage1_negclip(double(fTemp0))):double(s01_stage1clip(double(fTemp0))))) - ((((fRec8[1] * (fConst39 + ((fRec7[0] * (fConst41 + ((fConst42 * fRec7[0]) + -4.3709847259032801e-20))) + 9.2155731824052297e-06))) + (fRec8[2] * (fConst43 + ((fRec7[0] * (fConst44 + ((fConst45 * fRec7[0]) + -4.3709847259032801e-20))) + 9.2155731824052297e-06)))) + (fRec8[3] * (fConst46 + ((fRec7[0] * (fConst48 + ((fConst49 * fRec7[0]) + -1.45699490863443e-20))) + 3.0718577274684099e-06)))) / fTemp1));
			double fTemp2 = (fConst0 * ((fRec7[0] * ((((fRec8[0] * (fConst54 + (fConst55 * fRec7[0]))) + (fRec8[1] * (fConst57 + (fConst58 * fRec7[0])))) + (fRec8[2] * (fConst59 + (fConst60 * fRec7[0])))) + (fRec8[3] * (fConst61 + (fConst62 * fRec7[0]))))) / fTemp1));
			double fTemp3 = (4.0 * (int(signbit(double(fTemp2)))?double(s02_stage2_negclip(double(fTemp2))):double(s02_stage2clip(double(fTemp2)))));
			fRec6[0] = ((20.899999999999999 * (int(signbit(double(fTemp3)))?double(s03_stage3_negclip(double(fTemp3))):double(s03_stage3clip(double(fTemp3))))) - (fConst63 * fRec6[1]));
			double fTemp4 = (fConst22 * ((fConst24 * fRec6[0]) + (fConst64 * fRec6[1])));
			double fTemp5 = (73.0 * (int(signbit(double(fTemp4)))?double(s04_stage4_negclip(double(fTemp4))):double(s04_stage4clip(double(fTemp4)))));
			fRec5[0] = ((71.0 * (int(signbit(double(fTemp5)))?double(s05_stage5_negclip(double(fTemp5))):double(s05_stage5clip(double(fTemp5))))) - (fConst17 * ((fConst65 * fRec5[1]) + (fConst66 * fRec5[2]))));
			double fTemp6 = (fConst17 * (((fConst19 * fRec5[0]) + (fConst67 * fRec5[1])) + (fConst68 * fRec5[2])));
			fRec11[0] = (fSlow3 + (0.999 * fRec11[1]));
			fRec12[0] = (fSlow4 + (0.999 * fRec12[1]));
			double fTemp7 = ((fConst0 * ((fConst105 + (fConst106 * fRec11[0])) + (fRec12[0] * ((fConst107 + (fConst109 * fRec11[0])) + (fRec12[0] * (fConst110 + (fConst112 * fRec11[0]))))))) + 5.0694476757241199e-07);
			fRec4[0] = ((int(signbit(double(fTemp6)))?double(s06_stage6_negclip(double(fTemp6))):double(s06_stage6clip(double(fTemp6)))) - ((((fRec4[1] * ((fConst0 * ((fConst70 + (fConst72 * fRec11[0])) + (fRec12[0] * ((fConst74 + (fConst77 * fRec11[0])) + (fRec12[0] * (fConst79 + (fConst82 * fRec11[0]))))))) + 1.52083430271724e-06)) + (fRec4[2] * ((fConst0 * ((fConst83 + (fConst84 * fRec11[0])) + (fRec12[0] * ((fConst85 + (fConst87 * fRec11[0])) + (fRec12[0] * (fConst88 + (fConst90 * fRec11[0]))))))) + 1.52083430271724e-06))) + (fRec4[3] * ((fConst0 * ((fConst92 + (fConst94 * fRec11[0])) + (fRec12[0] * ((fConst96 + (fConst99 * fRec11[0])) + (fRec12[0] * (fConst101 + (fConst104 * fRec11[0]))))))) + 5.0694476757241199e-07))) / fTemp7));
			fRec13[0] = (fSlow5 + (0.999 * fRec13[1]));
			fRec3[0] = ((fConst15 * (((((fRec4[0] * (((fConst114 + (fConst116 * fRec11[0])) + (fRec12[0] * ((fConst118 + (fConst0 * ((fConst108 * fRec11[0]) + (fConst120 * fRec13[0])))) + (fConst0 * (fRec12[0] * (fConst121 + ((fConst111 * fRec11[0]) + (fConst123 * fRec13[0])))))))) + (fRec13[0] * (fConst124 + (fConst125 * fRec11[0]))))) + (fRec4[1] * (((fConst126 + (fConst127 * fRec11[0])) + (fRec12[0] * ((fConst129 + (fConst0 * ((fConst76 * fRec11[0]) + (fConst131 * fRec13[0])))) + (fConst0 * (fRec12[0] * (fConst132 + ((fConst81 * fRec11[0]) + (fConst134 * fRec13[0])))))))) + (fRec13[0] * (fConst135 + (fConst27 * (0.0 - (3.2520182395118903e-14 * fRec11[0])))))))) + (fRec4[2] * (((fConst136 + (fConst137 * fRec11[0])) + (fRec12[0] * ((fConst138 + (fConst0 * ((fConst86 * fRec11[0]) + (fConst139 * fRec13[0])))) + (fConst0 * (fRec12[0] * (fConst140 + ((fConst89 * fRec11[0]) + (fConst141 * fRec13[0])))))))) + (fRec13[0] * (fConst142 + (fConst143 * fRec11[0])))))) + (fRec4[3] * (((fConst144 + (fConst145 * fRec11[0])) + (fRec12[0] * ((fConst146 + (fConst0 * ((fConst98 * fRec11[0]) + (fConst147 * fRec13[0])))) + (fConst0 * (fRec12[0] * (fConst148 + ((fConst103 * fRec11[0]) + (fConst149 * fRec13[0])))))))) + (fRec13[0] * (fConst150 + (fConst27 * (0.0 - (1.0840060798373001e-14 * fRec11[0])))))))) / fTemp7)) - (fConst11 * (((fConst152 * fRec3[1]) + (fConst153 * fRec3[2])) + (fConst154 * fRec3[3]))));
			double fTemp8 = (fConst11 * ((((fConst14 * fRec3[1]) + (fConst155 * fRec3[0])) + (fConst13 * fRec3[2])) + (fConst156 * fRec3[3])));
			fRec2[0] = ((90.0 * (int(signbit(double(fTemp8)))?double(s08_stage7_negclip(double(fTemp8))):double(s08_stage7clip(double(fTemp8))))) - (fConst157 * ((fConst158 * fRec2[1]) + (fConst159 * fRec2[2]))));
			double fTemp9 = (fConst7 * (((fConst9 * fRec2[0]) + (fConst160 * fRec2[1])) + (fConst161 * fRec2[2])));
			fRec1[0] = ((68.0 * (int(signbit(double(fTemp9)))?double(s09_stage8_negclip(double(fTemp9))):double(s09_stage8clip(double(fTemp9))))) - (fConst2 * ((fConst162 * fRec1[1]) + (fConst163 * fRec1[2]))));
			double fTemp10 = (fConst2 * (((fConst4 * fRec1[0]) + (fConst164 * fRec1[1])) + (fConst165 * fRec1[2])));
			output0[i] = FAUSTFLOAT((4.1500000000000004 * (fRec0[0] * (int(signbit(double(fTemp10)))?double(s10_stage9_negclip(double(fTemp10))):double(s10_stage9clip(double(fTemp10)))))));
			fRec0[1] = fRec0[0];
			fRec7[1] = fRec7[0];
			fRec10[1] = fRec10[0];
			for (int j0 = 4; (j0 > 0); j0 = (j0 - 1)) {
				fRec9[j0] = fRec9[(j0 - 1)];
				
			}
			for (int j1 = 3; (j1 > 0); j1 = (j1 - 1)) {
				fRec8[j1] = fRec8[(j1 - 1)];
				
			}
			fRec6[1] = fRec6[0];
			fRec5[2] = fRec5[1];
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
} /* namespace ampsim_peavey_5150ii_lead */

