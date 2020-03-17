namespace gxsim_pre_12at7_pp_6v6 {

#include <resources/valve.h>
/* ------------------------------------------------------------
name: "pre 12AT7/ push pull 6V6"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */



/* link with : "" */

static double module_faustpower2_f(double value) {
	return (value * value);
	
}


class module : public dsp {
	
 private:
	
	FAUSTFLOAT fVslider0;
	double fRec1[2];
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
	double fRec23[2];
	double fRec22[3];
	double fConst8;
	double fConst9;
	double fConst10;
	double fRec24[2];
	double fRec21[3];
	double fConst11;
	double fConst12;
	double fRec20[2];
	double fRec34[2];
	double fRec33[3];
	double fConst13;
	double fConst14;
	double fConst15;
	double fRec35[2];
	double fRec32[3];
	double fRec31[2];
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	FAUSTFLOAT fVslider1;
	double fRec41[2];
	double fRec40[2];
	double fConst20;
	double fConst21;
	double fConst22;
	double fVec0[2];
	double fConst23;
	double fRec45[2];
	double fRec44[2];
	double fConst24;
	double fConst25;
	double fRec43[3];
	double fConst26;
	double fConst27;
	double fRec42[3];
	double fVec1[2];
	double fRec39[2];
	double fRec38[3];
	double fConst28;
	double fConst29;
	double fConst30;
	double fRec46[2];
	double fRec37[3];
	double fRec36[2];
	double fRec30[3];
	double fRec29[2];
	double fRec28[2];
	double fRec27[3];
	double fRec47[2];
	double fRec26[3];
	double fRec25[2];
	double fRec19[3];
	double fRec18[2];
	double fRec17[3];
	double fRec48[2];
	double fRec16[3];
	double fRec15[2];
	double fRec49[2];
	int IOTA;
	double fVec2[32768];
	double fConst31;
	int iConst32;
	double fRec51[2];
	double fRec50[2];
	FAUSTFLOAT fVslider2;
	double fRec52[2];
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
	double fRec60[3];
	double fVec3[2];
	double fRec59[2];
	double fRec58[2];
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fRec57[3];
	double fVec4[2];
	double fConst55;
	double fConst56;
	double fConst57;
	double fRec56[2];
	double fConst58;
	double fConst59;
	double fRec55[3];
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
	double fRec54[3];
	double fConst70;
	double fRec64[2];
	double fRec63[3];
	double fConst71;
	double fConst72;
	double fConst73;
	double fRec62[3];
	double fRec61[3];
	double fConst74;
	double fConst75;
	double fConst76;
	double fRec68[2];
	double fRec67[3];
	double fVec5[2];
	double fConst77;
	double fConst78;
	double fRec66[2];
	double fConst79;
	double fRec65[3];
	double fConst80;
	double fConst81;
	double fRec70[2];
	double fRec69[3];
	double fVec6[2];
	double fRec53[2];
	double fVec7[2];
	double fRec14[2];
	FAUSTFLOAT fVslider3;
	double fRec71[2];
	double fVec8[2];
	double fRec13[2];
	double fRec12[3];
	double fRec72[2];
	double fRec11[3];
	double fRec10[2];
	double fRec75[2];
	double fRec74[3];
	double fRec73[2];
	double fRec8[2];
	double fRec6[2];
	double fRec4[2];
	double fRec2[2];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("amp_dist.dsp/author", "Hermann Meyer");
		m->declare("amp_dist.dsp/copyright", "(C) Hermann Meyer 2008");
		m->declare("amp_dist.dsp/id", "amp_dist");
		m->declare("amp_dist.dsp/license", "BSD");
		m->declare("amp_dist.dsp/version", "0.01");
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "0.0");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("filename", "pre_12at7_pp_6v6");
		m->declare("filters.lib/allpassn:author", "Julius O. Smith III and Romain Michon");
		m->declare("filters.lib/allpassn:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu> and Romain Michon <rmichon@ccrma.stanford.edu>");
		m->declare("filters.lib/allpassn:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/dcblockerat:author", "Julius O. Smith III");
		m->declare("filters.lib/dcblockerat:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/dcblockerat:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/filterbank:author", "Julius O. Smith III");
		m->declare("filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/filterbank:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpass_plus_lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass_plus_lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpass_plus_lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/pole:author", "Julius O. Smith III");
		m->declare("filters.lib/pole:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/pole:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/zero:author", "Julius O. Smith III");
		m->declare("filters.lib/zero:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/zero:license", "MIT-style STK-4.3 license");
		m->declare("id", "pre 12AT7/ push pull 6V6");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("misceffects.lib/name", "Faust Math Library");
		m->declare("misceffects.lib/version", "2.0");
		m->declare("name", "pre 12AT7/ push pull 6V6");
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
		fConst1 = std::tan((97.389372261283583 / fConst0));
		fConst2 = (1.0 / fConst1);
		fConst3 = (fConst2 + 1.0);
		fConst4 = (1.0 / (fConst3 * fConst1));
		fConst5 = (1.0 / std::tan((20517.741620594938 / fConst0)));
		fConst6 = (1.0 / (fConst5 + 1.0));
		fConst7 = (1.0 - fConst5);
		fConst8 = (1.0 / std::tan((609.46897479641984 / fConst0)));
		fConst9 = (1.0 / (fConst8 + 1.0));
		fConst10 = (1.0 - fConst8);
		fConst11 = (0.0 - fConst4);
		fConst12 = ((1.0 - fConst2) / fConst3);
		fConst13 = (1.0 / std::tan((414.69023027385271 / fConst0)));
		fConst14 = (1.0 / (fConst13 + 1.0));
		fConst15 = (1.0 - fConst13);
		fConst16 = std::tan((37699.111843077517 / fConst0));
		fConst17 = (1.0 / fConst16);
		fConst18 = (((fConst17 + 0.76536686473017945) / fConst16) + 1.0);
		fConst19 = (0.93028479253239138 / fConst18);
		fConst20 = (1.0 / (((fConst17 + 1.8477590650225735) / fConst16) + 1.0));
		fConst21 = (973.89372261283586 / fConst0);
		fConst22 = (1.0 / (fConst21 + 1.0));
		fConst23 = (1.0 - fConst21);
		fConst24 = (((fConst17 + -1.8477590650225735) / fConst16) + 1.0);
		fConst25 = (2.0 * (1.0 - (1.0 / module_faustpower2_f(fConst16))));
		fConst26 = (1.0 / fConst18);
		fConst27 = (((fConst17 + -0.76536686473017945) / fConst16) + 1.0);
		fConst28 = (1.0 / std::tan((270.1769682087222 / fConst0)));
		fConst29 = (1.0 / (fConst28 + 1.0));
		fConst30 = (1.0 - fConst28);
		fConst31 = (0.009000000000000008 / fConst0);
		iConst32 = int(std::min<double>(65536.0, std::max<double>(0.0, (0.1111111111111111 * fConst0))));
		fConst33 = std::tan((3769.9111843077517 / fConst0));
		fConst34 = (1.0 / fConst33);
		fConst35 = (1.0 / (((fConst34 + 1.0000000000000004) / fConst33) + 1.0));
		fConst36 = module_faustpower2_f(fConst33);
		fConst37 = (1.0 / fConst36);
		fConst38 = std::tan((10053.096491487338 / fConst0));
		fConst39 = (1.0 / fConst38);
		fConst40 = (1.0 / (((fConst39 + 1.0000000000000004) / fConst38) + 1.0));
		fConst41 = (fConst34 + 1.0);
		fConst42 = (1.0 / (fConst33 * fConst41));
		fConst43 = (fConst39 + 1.0);
		fConst44 = (1.0 / fConst43);
		fConst45 = (1.0 - fConst39);
		fConst46 = std::tan((47123.889803846898 / fConst0));
		fConst47 = (1.0 / fConst46);
		fConst48 = (1.0 / (((fConst47 + 1.4142135623730949) / fConst46) + 1.0));
		fConst49 = (((fConst47 + -1.4142135623730949) / fConst46) + 1.0);
		fConst50 = (2.0 * (1.0 - (1.0 / module_faustpower2_f(fConst46))));
		fConst51 = (((fConst39 + -1.0000000000000004) / fConst38) + 1.0);
		fConst52 = module_faustpower2_f(fConst38);
		fConst53 = (1.0 / fConst52);
		fConst54 = (2.0 * (1.0 - fConst53));
		fConst55 = (0.0 - fConst42);
		fConst56 = (1.0 - fConst34);
		fConst57 = (fConst56 / fConst41);
		fConst58 = (((fConst34 + -1.0000000000000004) / fConst33) + 1.0);
		fConst59 = (2.0 * (1.0 - fConst37));
		fConst60 = (0.0 - (2.0 / fConst36));
		fConst61 = std::tan((942.47779607693792 / fConst0));
		fConst62 = (1.0 / fConst61);
		fConst63 = (fConst62 + 1.0);
		fConst64 = (1.0 / ((fConst63 / fConst61) + 1.0));
		fConst65 = (1.0 - fConst62);
		fConst66 = (1.0 - (fConst65 / fConst61));
		fConst67 = module_faustpower2_f(fConst61);
		fConst68 = (1.0 / fConst67);
		fConst69 = (2.0 * (1.0 - fConst68));
		fConst70 = (0.0 - (1.0 / (fConst43 * fConst38)));
		fConst71 = (0.0 - (2.0 / fConst52));
		fConst72 = (1.0 / ((fConst41 / fConst33) + 1.0));
		fConst73 = (1.0 - (fConst56 / fConst33));
		fConst74 = (1.0 / (((fConst62 + 1.0000000000000004) / fConst61) + 1.0));
		fConst75 = (1.0 / (fConst61 * fConst63));
		fConst76 = (1.0 / fConst41);
		fConst77 = (0.0 - fConst75);
		fConst78 = (fConst65 / fConst63);
		fConst79 = (((fConst62 + -1.0000000000000004) / fConst61) + 1.0);
		fConst80 = (0.0 - (2.0 / fConst67));
		fConst81 = (1.0 / fConst63);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(1.0);
		fVslider2 = FAUSTFLOAT(0.5);
		fVslider3 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec1[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec0[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec23[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) {
			fRec22[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec24[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) {
			fRec21[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec20[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec34[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			fRec33[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec35[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) {
			fRec32[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec31[l11] = 0.0;
			
		}
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			fRec41[l12] = 0.0;
			
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec40[l13] = 0.0;
			
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			fVec0[l14] = 0.0;
			
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec45[l15] = 0.0;
			
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec44[l16] = 0.0;
			
		}
		for (int l17 = 0; (l17 < 3); l17 = (l17 + 1)) {
			fRec43[l17] = 0.0;
			
		}
		for (int l18 = 0; (l18 < 3); l18 = (l18 + 1)) {
			fRec42[l18] = 0.0;
			
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fVec1[l19] = 0.0;
			
		}
		for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			fRec39[l20] = 0.0;
			
		}
		for (int l21 = 0; (l21 < 3); l21 = (l21 + 1)) {
			fRec38[l21] = 0.0;
			
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec46[l22] = 0.0;
			
		}
		for (int l23 = 0; (l23 < 3); l23 = (l23 + 1)) {
			fRec37[l23] = 0.0;
			
		}
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			fRec36[l24] = 0.0;
			
		}
		for (int l25 = 0; (l25 < 3); l25 = (l25 + 1)) {
			fRec30[l25] = 0.0;
			
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fRec29[l26] = 0.0;
			
		}
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fRec28[l27] = 0.0;
			
		}
		for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) {
			fRec27[l28] = 0.0;
			
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec47[l29] = 0.0;
			
		}
		for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) {
			fRec26[l30] = 0.0;
			
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec25[l31] = 0.0;
			
		}
		for (int l32 = 0; (l32 < 3); l32 = (l32 + 1)) {
			fRec19[l32] = 0.0;
			
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fRec18[l33] = 0.0;
			
		}
		for (int l34 = 0; (l34 < 3); l34 = (l34 + 1)) {
			fRec17[l34] = 0.0;
			
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fRec48[l35] = 0.0;
			
		}
		for (int l36 = 0; (l36 < 3); l36 = (l36 + 1)) {
			fRec16[l36] = 0.0;
			
		}
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			fRec15[l37] = 0.0;
			
		}
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec49[l38] = 0.0;
			
		}
		IOTA = 0;
		for (int l39 = 0; (l39 < 32768); l39 = (l39 + 1)) {
			fVec2[l39] = 0.0;
			
		}
		for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			fRec51[l40] = 0.0;
			
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fRec50[l41] = 0.0;
			
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			fRec52[l42] = 0.0;
			
		}
		for (int l43 = 0; (l43 < 3); l43 = (l43 + 1)) {
			fRec60[l43] = 0.0;
			
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			fVec3[l44] = 0.0;
			
		}
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fRec59[l45] = 0.0;
			
		}
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			fRec58[l46] = 0.0;
			
		}
		for (int l47 = 0; (l47 < 3); l47 = (l47 + 1)) {
			fRec57[l47] = 0.0;
			
		}
		for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			fVec4[l48] = 0.0;
			
		}
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec56[l49] = 0.0;
			
		}
		for (int l50 = 0; (l50 < 3); l50 = (l50 + 1)) {
			fRec55[l50] = 0.0;
			
		}
		for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) {
			fRec54[l51] = 0.0;
			
		}
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			fRec64[l52] = 0.0;
			
		}
		for (int l53 = 0; (l53 < 3); l53 = (l53 + 1)) {
			fRec63[l53] = 0.0;
			
		}
		for (int l54 = 0; (l54 < 3); l54 = (l54 + 1)) {
			fRec62[l54] = 0.0;
			
		}
		for (int l55 = 0; (l55 < 3); l55 = (l55 + 1)) {
			fRec61[l55] = 0.0;
			
		}
		for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			fRec68[l56] = 0.0;
			
		}
		for (int l57 = 0; (l57 < 3); l57 = (l57 + 1)) {
			fRec67[l57] = 0.0;
			
		}
		for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			fVec5[l58] = 0.0;
			
		}
		for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			fRec66[l59] = 0.0;
			
		}
		for (int l60 = 0; (l60 < 3); l60 = (l60 + 1)) {
			fRec65[l60] = 0.0;
			
		}
		for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			fRec70[l61] = 0.0;
			
		}
		for (int l62 = 0; (l62 < 3); l62 = (l62 + 1)) {
			fRec69[l62] = 0.0;
			
		}
		for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			fVec6[l63] = 0.0;
			
		}
		for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			fRec53[l64] = 0.0;
			
		}
		for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			fVec7[l65] = 0.0;
			
		}
		for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			fRec14[l66] = 0.0;
			
		}
		for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			fRec71[l67] = 0.0;
			
		}
		for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			fVec8[l68] = 0.0;
			
		}
		for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			fRec13[l69] = 0.0;
			
		}
		for (int l70 = 0; (l70 < 3); l70 = (l70 + 1)) {
			fRec12[l70] = 0.0;
			
		}
		for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			fRec72[l71] = 0.0;
			
		}
		for (int l72 = 0; (l72 < 3); l72 = (l72 + 1)) {
			fRec11[l72] = 0.0;
			
		}
		for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			fRec10[l73] = 0.0;
			
		}
		for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			fRec75[l74] = 0.0;
			
		}
		for (int l75 = 0; (l75 < 3); l75 = (l75 + 1)) {
			fRec74[l75] = 0.0;
			
		}
		for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			fRec73[l76] = 0.0;
			
		}
		for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			fRec8[l77] = 0.0;
			
		}
		for (int l78 = 0; (l78 < 2); l78 = (l78 + 1)) {
			fRec6[l78] = 0.0;
			
		}
		for (int l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			fRec4[l79] = 0.0;
			
		}
		for (int l80 = 0; (l80 < 2); l80 = (l80 + 1)) {
			fRec2[l80] = 0.0;
			
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
		ui_interface->openVerticalBox("pre 12AT7/ push pull 6V6");
		ui_interface->addVerticalSlider(".amp.gain", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.master", &fVslider3, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider1, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0010000000000000009 * double(fVslider0));
		double fSlow1 = (0.0010000000000000009 * double(fVslider1));
		double fSlow2 = (0.0010000000000000009 * double(fVslider2));
		double fSlow3 = (0.0010000000000000009 * double(fVslider3));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec1[0] = (fSlow0 + (0.999 * fRec1[1]));
			fRec0[0] = ((0.999 * fRec0[1]) + (6.3100000000000057e-05 * fRec1[0]));
			fRec23[0] = ((0.93028479253239138 * (fRec19[1] + fRec19[2])) - (0.86056958506478287 * fRec23[1]));
			fRec22[0] = (fRec23[0] - ((1.8405051250752198 * fRec22[1]) + (0.86129424393186271 * fRec22[2])));
			fRec24[0] = (fConst9 * ((0.0082000000000000007 * (fRec21[1] + fRec21[2])) - (fConst10 * fRec24[1])));
			fRec21[0] = (double(Ftube(int(TUBE_TABLE_12AT7_250k), double((((0.92544984225177063 * (fRec22[0] + fRec22[2])) + (fRec24[0] + (1.8508996845035413 * fRec22[1]))) + -1.2569619999999999)))) + -96.711951219512201);
			fRec20[0] = ((0.025000000000000001 * ((fConst4 * fRec21[0]) + (fConst11 * fRec21[1]))) - (fConst12 * fRec20[1]));
			fRec34[0] = ((0.93028479253239138 * (fRec30[1] + fRec30[2])) - (0.86056958506478287 * fRec34[1]));
			fRec33[0] = (fRec34[0] - ((1.8405051250752198 * fRec33[1]) + (0.86129424393186271 * fRec33[2])));
			fRec35[0] = (fConst14 * ((0.014999999999999999 * (fRec32[1] + fRec32[2])) - (fConst15 * fRec35[1])));
			fRec32[0] = (double(Ftube(int(TUBE_TABLE_12AT7_250k), double((((0.92544984225177063 * (fRec33[0] + fRec33[2])) + (fRec35[0] + (1.8508996845035413 * fRec33[1]))) + -1.8873329999999999)))) + -124.17779999999999);
			fRec31[0] = ((0.025000000000000001 * ((fConst4 * fRec32[0]) + (fConst11 * fRec32[1]))) - (fConst12 * fRec31[1]));
			fRec41[0] = (fSlow1 + (0.999 * fRec41[1]));
			fRec40[0] = ((0.999 * fRec40[1]) + (0.0010000000000000009 * fRec41[0]));
			double fTemp0 = double(input0[i]);
			fVec0[0] = fTemp0;
			fRec45[0] = (fConst22 * ((fTemp0 - fVec0[1]) + (fConst23 * fRec45[1])));
			fRec44[0] = (fConst22 * ((fRec45[0] - fRec45[1]) + (fConst23 * fRec44[1])));
			fRec43[0] = (fRec44[0] - (fConst20 * ((fConst24 * fRec43[2]) + (fConst25 * fRec43[1]))));
			fRec42[0] = ((fConst20 * (fRec43[2] + (fRec43[0] + (2.0 * fRec43[1])))) - (fConst26 * ((fConst27 * fRec42[2]) + (fConst25 * fRec42[1]))));
			double fTemp1 = (fRec40[0] * (fRec42[2] + (fRec42[0] + (2.0 * fRec42[1]))));
			fVec1[0] = fTemp1;
			fRec39[0] = ((fConst19 * (fTemp1 + fVec1[1])) - (0.86056958506478287 * fRec39[1]));
			fRec38[0] = (fRec39[0] - ((1.8405051250752198 * fRec38[1]) + (0.86129424393186271 * fRec38[2])));
			fRec46[0] = (fConst29 * ((0.027 * (fRec37[1] + fRec37[2])) - (fConst30 * fRec46[1])));
			fRec37[0] = (double(Ftube(int(TUBE_TABLE_12AT7_68k), double((((0.92544984225177063 * (fRec38[0] + fRec38[2])) + (fRec46[0] + (1.8508996845035413 * fRec38[1]))) + -2.617753)))) + -153.04618518518518);
			fRec36[0] = ((0.025000000000000001 * ((fConst4 * fRec37[0]) + (fConst11 * fRec37[1]))) - (fConst12 * fRec36[1]));
			fRec30[0] = ((0.59999999999999998 * fRec31[0]) + fRec36[0]);
			fRec29[0] = (0.0 - (fConst6 * ((fConst7 * fRec29[1]) - (fRec30[0] + fRec30[1]))));
			fRec28[0] = ((0.93028479253239138 * (fRec29[0] + fRec29[1])) - (0.86056958506478287 * fRec28[1]));
			fRec27[0] = (fRec28[0] - ((1.8405051250752198 * fRec27[1]) + (0.86129424393186271 * fRec27[2])));
			fRec47[0] = (fConst14 * ((0.014999999999999999 * (fRec26[1] + fRec26[2])) - (fConst15 * fRec47[1])));
			fRec26[0] = (double(Ftube(int(TUBE_TABLE_12AT7_250k), double((((0.92544984225177063 * (fRec27[0] + fRec27[2])) + (fRec47[0] + (1.8508996845035413 * fRec27[1]))) + -1.8873329999999999)))) + -124.17779999999999);
			fRec25[0] = ((0.025000000000000001 * ((fConst4 * fRec26[0]) + (fConst11 * fRec26[1]))) - (fConst12 * fRec25[1]));
			fRec19[0] = ((0.59999999999999998 * fRec20[0]) + fRec25[0]);
			fRec18[0] = ((0.93028479253239138 * (fRec19[0] + fRec19[1])) - (0.86056958506478287 * fRec18[1]));
			fRec17[0] = (fRec18[0] - ((1.8405051250752198 * fRec17[1]) + (0.86129424393186271 * fRec17[2])));
			fRec48[0] = (fConst9 * ((0.0082000000000000007 * (fRec16[1] + fRec16[2])) - (fConst10 * fRec48[1])));
			fRec16[0] = (double(Ftube(int(TUBE_TABLE_12AT7_250k), double((((0.92544984225177063 * (fRec17[0] + fRec17[2])) + (fRec48[0] + (1.8508996845035413 * fRec17[1]))) + -1.2569619999999999)))) + -96.711951219512201);
			fRec15[0] = ((0.025000000000000001 * ((fConst4 * fRec16[0]) + (fConst11 * fRec16[1]))) - (fConst12 * fRec15[1]));
			double fTemp2 = std::fabs(fRec15[0]);
			fRec49[0] = ((0.99990000000000001 * fRec49[1]) + (9.9999999999988987e-05 * fTemp2));
			double fTemp3 = std::max<double>(fRec49[0], fTemp2);
			fVec2[(IOTA & 32767)] = fTemp3;
			fRec51[0] = ((fTemp3 + fRec51[1]) - fVec2[((IOTA - iConst32) & 32767)]);
			fRec50[0] = ((0.999 * fRec50[1]) + (fConst31 * fRec51[0]));
			double fTemp4 = std::max<double>(-1.0, std::min<double>(-0.01, (fTemp3 + (-1.0 - (1.02 * fRec50[0])))));
			double fTemp5 = (fRec15[0] - fTemp4);
			double fTemp6 = (40.100000000000001 * fTemp5);
			double fTemp7 = std::max<double>(-600.0, fTemp6);
			double fTemp8 = (0.0 - (40.100000000000001 * fTemp4));
			double fTemp9 = std::max<double>(-600.0, fTemp8);
			double fTemp10 = (((std::fabs(fTemp6) > 0.0001)?((fTemp7 < -50.0)?(0.0 - (fTemp7 * std::exp(fTemp7))):(fTemp7 / (1.0 - std::exp((-1.0 * fTemp7))))):((fTemp5 * ((134.00083333333336 * fTemp5) + 20.050000000000001)) + 1.0)) - ((std::fabs(fTemp8) > 0.0001)?((fTemp9 < -50.0)?(0.0 - (fTemp9 * std::exp(fTemp9))):(fTemp9 / (1.0 - std::exp((-1.0 * fTemp9))))):((fTemp8 * ((0.083333333333333329 * fTemp8) + 0.5)) + 1.0)));
			fRec52[0] = (fSlow2 + (0.999 * fRec52[1]));
			double fTemp11 = (2.0 * (fRec52[0] + -0.5));
			fRec60[0] = ((0.024937655860349125 * fTemp10) - (fConst48 * ((fConst49 * fRec60[2]) + (fConst50 * fRec60[1]))));
			double fTemp12 = (fRec60[2] + (fRec60[0] + (2.0 * fRec60[1])));
			fVec3[0] = fTemp12;
			fRec59[0] = ((fConst48 * ((fConst4 * fTemp12) + (fConst11 * fVec3[1]))) - (fConst12 * fRec59[1]));
			fRec58[0] = (0.0 - (fConst44 * ((fConst45 * fRec58[1]) - (fRec59[0] + fRec59[1]))));
			fRec57[0] = (fRec58[0] - (fConst40 * ((fConst51 * fRec57[2]) + (fConst54 * fRec57[1]))));
			double fTemp13 = (fRec57[2] + (fRec57[0] + (2.0 * fRec57[1])));
			fVec4[0] = fTemp13;
			fRec56[0] = ((fConst40 * ((fConst42 * fTemp13) + (fConst55 * fVec4[1]))) - (fConst57 * fRec56[1]));
			fRec55[0] = (fRec56[0] - (fConst35 * ((fConst58 * fRec55[2]) + (fConst59 * fRec55[1]))));
			double fTemp14 = (fConst69 * fRec54[1]);
			fRec54[0] = ((fConst35 * (((fConst37 * fRec55[0]) + (fConst60 * fRec55[1])) + (fConst37 * fRec55[2]))) - (fConst64 * ((fConst66 * fRec54[2]) + fTemp14)));
			double fTemp15 = std::max<double>(-1.0, std::min<double>(1.0, ((fRec54[2] + (fConst64 * (fTemp14 + (fConst66 * fRec54[0])))) * std::pow(10.0, (1.2 * fRec52[0])))));
			fRec64[0] = ((fConst70 * fRec59[1]) - (fConst44 * ((fConst45 * fRec64[1]) - (fConst39 * fRec59[0]))));
			fRec63[0] = (fRec64[0] - (fConst40 * ((fConst51 * fRec63[2]) + (fConst54 * fRec63[1]))));
			double fTemp16 = (fConst59 * fRec62[1]);
			fRec62[0] = ((fConst40 * (((fConst53 * fRec63[0]) + (fConst71 * fRec63[1])) + (fConst53 * fRec63[2]))) - (fConst72 * ((fConst73 * fRec62[2]) + fTemp16)));
			double fTemp17 = (fConst69 * fRec61[1]);
			fRec61[0] = ((fRec62[2] + (fConst72 * (fTemp16 + (fConst73 * fRec62[0])))) - (fConst64 * ((fConst66 * fRec61[2]) + fTemp17)));
			double fTemp18 = std::max<double>(-1.0, std::min<double>(1.0, ((fRec61[2] + (fConst64 * (fTemp17 + (fConst66 * fRec61[0])))) * std::pow(10.0, (0.80000000000000004 * fRec52[0])))));
			fRec68[0] = (0.0 - (fConst76 * ((fConst56 * fRec68[1]) - (fConst40 * (fTemp13 + fVec4[1])))));
			fRec67[0] = (fRec68[0] - (fConst35 * ((fConst58 * fRec67[2]) + (fConst59 * fRec67[1]))));
			double fTemp19 = (fRec67[2] + (fRec67[0] + (2.0 * fRec67[1])));
			fVec5[0] = fTemp19;
			fRec66[0] = ((fConst35 * ((fConst75 * fTemp19) + (fConst77 * fVec5[1]))) - (fConst78 * fRec66[1]));
			fRec65[0] = (fRec66[0] - (fConst74 * ((fConst79 * fRec65[2]) + (fConst69 * fRec65[1]))));
			double fTemp20 = std::max<double>(-1.0, std::min<double>(1.0, (fConst74 * ((((fConst68 * fRec65[0]) + (fConst80 * fRec65[1])) + (fConst68 * fRec65[2])) * std::pow(10.0, (2.0 * fRec52[0]))))));
			fRec70[0] = (0.0 - (fConst81 * ((fConst65 * fRec70[1]) - (fConst35 * (fTemp19 + fVec5[1])))));
			fRec69[0] = (fRec70[0] - (fConst74 * ((fConst79 * fRec69[2]) + (fConst69 * fRec69[1]))));
			double fTemp21 = std::max<double>(-1.0, std::min<double>(1.0, (fConst74 * ((fRec69[2] + (fRec69[0] + (2.0 * fRec69[1]))) * std::pow(10.0, (0.90000000000000002 * fRec52[0]))))));
			double fTemp22 = (((1.333521432 * (fTemp15 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp15))))) + (1.584893192 * ((fTemp18 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp18)))) + (fTemp20 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp20))))))) + (1.2589412 * (fTemp21 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp21))))));
			fVec6[0] = fTemp22;
			fRec53[0] = (0.0 - (fConst6 * ((fConst7 * fRec53[1]) - (fTemp22 + fVec6[1]))));
			double fTemp23 = ((0.024937655860349125 * (fTemp10 * (1.0 - std::max<double>(0.0, fTemp11)))) + (fRec53[0] * (1.0 - std::max<double>(0.0, (-1.0 * fTemp11)))));
			fVec7[0] = fTemp23;
			fRec14[0] = (0.0 - (fConst6 * ((fConst7 * fRec14[1]) - (fTemp23 + fVec7[1]))));
			fRec71[0] = (fSlow3 + (0.999 * fRec71[1]));
			double fTemp24 = std::pow(10.0, (2.4239999999999999 * (fRec14[0] * (fRec71[0] + -0.01))));
			fVec8[0] = fTemp24;
			fRec13[0] = ((0.93028479253239138 * (fTemp24 + fVec8[1])) - (0.86056958506478287 * fRec13[1]));
			fRec12[0] = (fRec13[0] - ((1.8405051250752198 * fRec12[1]) + (0.86129424393186271 * fRec12[2])));
			double fTemp25 = (0.92544984225177063 * (fRec12[0] + fRec12[2]));
			fRec72[0] = (fConst6 * ((0.0041000000000000003 * (fRec11[1] + fRec11[2])) - (fConst7 * fRec72[1])));
			double fTemp26 = (1.8508996845035413 * fRec12[1]);
			fRec11[0] = (double(Ftube(int(TUBE_TABLE_6V6_250k), double(((fTemp25 + (fRec72[0] + fTemp26)) + -0.65976100000000004)))) + -89.08268292682925);
			fRec10[0] = ((0.025000000000000001 * ((fConst4 * fRec11[0]) + (fConst11 * fRec11[1]))) - (fConst12 * fRec10[1]));
			fRec75[0] = (fConst6 * ((0.0041000000000000003 * (fRec74[1] + fRec74[2])) - (fConst7 * fRec75[1])));
			fRec74[0] = (double(Ftube(int(TUBE_TABLE_6V6_68k), double(((fTemp25 + (fRec75[0] + fTemp26)) + -0.66454100000000005)))) + -87.916829268292673);
			fRec73[0] = ((0.025000000000000001 * ((fConst4 * fRec74[0]) + (fConst11 * fRec74[1]))) - (fConst12 * fRec73[1]));
			double fTemp27 = (std::min<double>(0.69999999999999996, fRec10[0]) + std::max<double>(-0.75, fRec73[0]));
			double fTemp28 = (0.5 * fRec2[1]);
			double fTemp29 = (0.40000000000000002 * fRec4[1]);
			double fTemp30 = (fTemp28 + ((0.29999999999999999 * fRec6[1]) + fTemp29));
			double fTemp31 = ((fTemp27 + (0.20000000000000001 * fRec8[1])) - fTemp30);
			fRec8[0] = fTemp31;
			double fRec9 = (0.0 - (0.20000000000000001 * fTemp31));
			fRec6[0] = (fRec9 + fRec8[1]);
			double fRec7 = (0.29999999999999999 * (fTemp27 - fTemp30));
			fRec4[0] = (fRec7 + fRec6[1]);
			double fRec5 = (0.40000000000000002 * (fTemp27 - (fTemp29 + fTemp28)));
			fRec2[0] = (fRec5 + fRec4[1]);
			double fRec3 = (0.5 * (fTemp27 - fTemp28));
			output0[i] = FAUSTFLOAT((fRec0[0] * (fRec3 + fRec2[1])));
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fRec23[1] = fRec23[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fRec24[1] = fRec24[0];
			fRec21[2] = fRec21[1];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fRec34[1] = fRec34[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fRec35[1] = fRec35[0];
			fRec32[2] = fRec32[1];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fVec0[1] = fVec0[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fRec43[2] = fRec43[1];
			fRec43[1] = fRec43[0];
			fRec42[2] = fRec42[1];
			fRec42[1] = fRec42[0];
			fVec1[1] = fVec1[0];
			fRec39[1] = fRec39[0];
			fRec38[2] = fRec38[1];
			fRec38[1] = fRec38[0];
			fRec46[1] = fRec46[0];
			fRec37[2] = fRec37[1];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fRec30[2] = fRec30[1];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			fRec47[1] = fRec47[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fRec25[1] = fRec25[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec48[1] = fRec48[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec15[1] = fRec15[0];
			fRec49[1] = fRec49[0];
			IOTA = (IOTA + 1);
			fRec51[1] = fRec51[0];
			fRec50[1] = fRec50[0];
			fRec52[1] = fRec52[0];
			fRec60[2] = fRec60[1];
			fRec60[1] = fRec60[0];
			fVec3[1] = fVec3[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fRec57[2] = fRec57[1];
			fRec57[1] = fRec57[0];
			fVec4[1] = fVec4[0];
			fRec56[1] = fRec56[0];
			fRec55[2] = fRec55[1];
			fRec55[1] = fRec55[0];
			fRec54[2] = fRec54[1];
			fRec54[1] = fRec54[0];
			fRec64[1] = fRec64[0];
			fRec63[2] = fRec63[1];
			fRec63[1] = fRec63[0];
			fRec62[2] = fRec62[1];
			fRec62[1] = fRec62[0];
			fRec61[2] = fRec61[1];
			fRec61[1] = fRec61[0];
			fRec68[1] = fRec68[0];
			fRec67[2] = fRec67[1];
			fRec67[1] = fRec67[0];
			fVec5[1] = fVec5[0];
			fRec66[1] = fRec66[0];
			fRec65[2] = fRec65[1];
			fRec65[1] = fRec65[0];
			fRec70[1] = fRec70[0];
			fRec69[2] = fRec69[1];
			fRec69[1] = fRec69[0];
			fVec6[1] = fVec6[0];
			fRec53[1] = fRec53[0];
			fVec7[1] = fVec7[0];
			fRec14[1] = fRec14[0];
			fRec71[1] = fRec71[0];
			fVec8[1] = fVec8[0];
			fRec13[1] = fRec13[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec72[1] = fRec72[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			fRec75[1] = fRec75[0];
			fRec74[2] = fRec74[1];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fRec8[1] = fRec8[0];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec2[1] = fRec2[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace gxsim_pre_12at7_pp_6v6 */

