namespace gxsim_pre_6dj8_master_6v6 {

#include <resources/valve.h>
/* ------------------------------------------------------------
name: "pre 6DJ8/ master 6V6"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */



/* link with : "" */

static double module_faustpower2_f(double value) {
	return (value * value);
	
}


class module : public dsp {
	
 private:
	
	int fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	FAUSTFLOAT fVslider0;
	double fRec19[2];
	double fRec18[2];
	double fVec0[2];
	double fRec17[2];
	double fRec16[3];
	double fConst8;
	double fConst9;
	double fConst10;
	double fRec20[2];
	double fRec15[3];
	double fConst11;
	double fConst12;
	double fRec14[2];
	double fRec13[2];
	double fRec12[2];
	double fRec11[3];
	double fConst13;
	double fConst14;
	double fConst15;
	double fRec21[2];
	double fRec10[3];
	double fRec9[2];
	double fRec8[2];
	double fRec7[3];
	double fConst16;
	double fConst17;
	double fConst18;
	double fRec22[2];
	double fRec6[3];
	double fRec5[2];
	FAUSTFLOAT fVslider1;
	double fRec23[2];
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
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fRec31[3];
	double fVec1[2];
	double fRec30[2];
	double fRec29[2];
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fRec28[3];
	double fVec2[2];
	double fConst41;
	double fConst42;
	double fConst43;
	double fRec27[2];
	double fConst44;
	double fConst45;
	double fRec26[3];
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
	double fRec25[3];
	double fConst56;
	double fRec35[2];
	double fRec34[3];
	double fConst57;
	double fConst58;
	double fConst59;
	double fRec33[3];
	double fRec32[3];
	double fConst60;
	double fConst61;
	double fConst62;
	double fRec39[2];
	double fRec38[3];
	double fVec3[2];
	double fConst63;
	double fConst64;
	double fRec37[2];
	double fConst65;
	double fRec36[3];
	double fConst66;
	double fConst67;
	double fRec41[2];
	double fRec40[3];
	double fVec4[2];
	double fRec24[2];
	FAUSTFLOAT fVslider2;
	double fRec42[2];
	double fVec5[2];
	double fRec4[2];
	double fRec3[2];
	double fRec2[3];
	double fRec43[2];
	double fRec1[3];
	double fRec0[2];
	double fRec46[2];
	double fRec45[3];
	double fRec44[2];
	FAUSTFLOAT fVslider3;
	double fRec48[2];
	double fRec47[2];
	
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
		m->declare("filename", "pre_6dj8_master_6v6");
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
		m->declare("id", "pre 6DJ8/ master 6V6");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("misceffects.lib/name", "Faust Math Library");
		m->declare("misceffects.lib/version", "2.0");
		m->declare("name", "pre 6DJ8/ master 6V6");
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
		fConst8 = (1.0 / std::tan((270.1769682087222 / fConst0)));
		fConst9 = (1.0 / (fConst8 + 1.0));
		fConst10 = (1.0 - fConst8);
		fConst11 = (0.0 - fConst4);
		fConst12 = ((1.0 - fConst2) / fConst3);
		fConst13 = (1.0 / std::tan((414.69023027385271 / fConst0)));
		fConst14 = (1.0 / (fConst13 + 1.0));
		fConst15 = (1.0 - fConst13);
		fConst16 = (1.0 / std::tan((609.46897479641984 / fConst0)));
		fConst17 = (1.0 / (fConst16 + 1.0));
		fConst18 = (1.0 - fConst16);
		fConst19 = std::tan((3769.9111843077517 / fConst0));
		fConst20 = (1.0 / fConst19);
		fConst21 = (1.0 / (((fConst20 + 1.0000000000000004) / fConst19) + 1.0));
		fConst22 = module_faustpower2_f(fConst19);
		fConst23 = (1.0 / fConst22);
		fConst24 = std::tan((10053.096491487338 / fConst0));
		fConst25 = (1.0 / fConst24);
		fConst26 = (1.0 / (((fConst25 + 1.0000000000000004) / fConst24) + 1.0));
		fConst27 = (fConst20 + 1.0);
		fConst28 = (1.0 / (fConst19 * fConst27));
		fConst29 = (fConst25 + 1.0);
		fConst30 = (1.0 / fConst29);
		fConst31 = (1.0 - fConst25);
		fConst32 = std::tan((47123.889803846898 / fConst0));
		fConst33 = (1.0 / fConst32);
		fConst34 = (1.0 / (((fConst33 + 1.4142135623730949) / fConst32) + 1.0));
		fConst35 = (((fConst33 + -1.4142135623730949) / fConst32) + 1.0);
		fConst36 = (2.0 * (1.0 - (1.0 / module_faustpower2_f(fConst32))));
		fConst37 = (((fConst25 + -1.0000000000000004) / fConst24) + 1.0);
		fConst38 = module_faustpower2_f(fConst24);
		fConst39 = (1.0 / fConst38);
		fConst40 = (2.0 * (1.0 - fConst39));
		fConst41 = (0.0 - fConst28);
		fConst42 = (1.0 - fConst20);
		fConst43 = (fConst42 / fConst27);
		fConst44 = (((fConst20 + -1.0000000000000004) / fConst19) + 1.0);
		fConst45 = (2.0 * (1.0 - fConst23));
		fConst46 = (0.0 - (2.0 / fConst22));
		fConst47 = std::tan((942.47779607693792 / fConst0));
		fConst48 = (1.0 / fConst47);
		fConst49 = (fConst48 + 1.0);
		fConst50 = (1.0 / ((fConst49 / fConst47) + 1.0));
		fConst51 = (1.0 - fConst48);
		fConst52 = (1.0 - (fConst51 / fConst47));
		fConst53 = module_faustpower2_f(fConst47);
		fConst54 = (1.0 / fConst53);
		fConst55 = (2.0 * (1.0 - fConst54));
		fConst56 = (0.0 - (1.0 / (fConst29 * fConst24)));
		fConst57 = (0.0 - (2.0 / fConst38));
		fConst58 = (1.0 / ((fConst27 / fConst19) + 1.0));
		fConst59 = (1.0 - (fConst42 / fConst19));
		fConst60 = (1.0 / (((fConst48 + 1.0000000000000004) / fConst47) + 1.0));
		fConst61 = (1.0 / (fConst47 * fConst49));
		fConst62 = (1.0 / fConst27);
		fConst63 = (0.0 - fConst61);
		fConst64 = (fConst51 / fConst49);
		fConst65 = (((fConst48 + -1.0000000000000004) / fConst47) + 1.0);
		fConst66 = (0.0 - (2.0 / fConst53));
		fConst67 = (1.0 / fConst49);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		fVslider3 = FAUSTFLOAT(1.0);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec19[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec18[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fVec0[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec17[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) {
			fRec16[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec20[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) {
			fRec15[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec14[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec13[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			fRec12[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) {
			fRec11[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec21[l11] = 0.0;
			
		}
		for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) {
			fRec10[l12] = 0.0;
			
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec9[l13] = 0.0;
			
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			fRec8[l14] = 0.0;
			
		}
		for (int l15 = 0; (l15 < 3); l15 = (l15 + 1)) {
			fRec7[l15] = 0.0;
			
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec22[l16] = 0.0;
			
		}
		for (int l17 = 0; (l17 < 3); l17 = (l17 + 1)) {
			fRec6[l17] = 0.0;
			
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec5[l18] = 0.0;
			
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fRec23[l19] = 0.0;
			
		}
		for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) {
			fRec31[l20] = 0.0;
			
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fVec1[l21] = 0.0;
			
		}
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec30[l22] = 0.0;
			
		}
		for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			fRec29[l23] = 0.0;
			
		}
		for (int l24 = 0; (l24 < 3); l24 = (l24 + 1)) {
			fRec28[l24] = 0.0;
			
		}
		for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			fVec2[l25] = 0.0;
			
		}
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fRec27[l26] = 0.0;
			
		}
		for (int l27 = 0; (l27 < 3); l27 = (l27 + 1)) {
			fRec26[l27] = 0.0;
			
		}
		for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) {
			fRec25[l28] = 0.0;
			
		}
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec35[l29] = 0.0;
			
		}
		for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) {
			fRec34[l30] = 0.0;
			
		}
		for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) {
			fRec33[l31] = 0.0;
			
		}
		for (int l32 = 0; (l32 < 3); l32 = (l32 + 1)) {
			fRec32[l32] = 0.0;
			
		}
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fRec39[l33] = 0.0;
			
		}
		for (int l34 = 0; (l34 < 3); l34 = (l34 + 1)) {
			fRec38[l34] = 0.0;
			
		}
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fVec3[l35] = 0.0;
			
		}
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			fRec37[l36] = 0.0;
			
		}
		for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) {
			fRec36[l37] = 0.0;
			
		}
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec41[l38] = 0.0;
			
		}
		for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) {
			fRec40[l39] = 0.0;
			
		}
		for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			fVec4[l40] = 0.0;
			
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fRec24[l41] = 0.0;
			
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			fRec42[l42] = 0.0;
			
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fVec5[l43] = 0.0;
			
		}
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			fRec4[l44] = 0.0;
			
		}
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fRec3[l45] = 0.0;
			
		}
		for (int l46 = 0; (l46 < 3); l46 = (l46 + 1)) {
			fRec2[l46] = 0.0;
			
		}
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fRec43[l47] = 0.0;
			
		}
		for (int l48 = 0; (l48 < 3); l48 = (l48 + 1)) {
			fRec1[l48] = 0.0;
			
		}
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec0[l49] = 0.0;
			
		}
		for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			fRec46[l50] = 0.0;
			
		}
		for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) {
			fRec45[l51] = 0.0;
			
		}
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			fRec44[l52] = 0.0;
			
		}
		for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			fRec48[l53] = 0.0;
			
		}
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			fRec47[l54] = 0.0;
			
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
		ui_interface->openVerticalBox("pre 6DJ8/ master 6V6");
		ui_interface->addVerticalSlider(".amp.gain", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.master", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider3, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
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
			fRec19[0] = (fSlow0 + (0.999 * fRec19[1]));
			fRec18[0] = ((0.999 * fRec18[1]) + (0.0010000000000000009 * fRec19[0]));
			double fTemp0 = (fRec18[0] * double(input0[i]));
			fVec0[0] = fTemp0;
			fRec17[0] = ((0.93028479253239138 * (fTemp0 + fVec0[1])) - (0.86056958506478287 * fRec17[1]));
			fRec16[0] = (fRec17[0] - ((1.8405051250752198 * fRec16[1]) + (0.86129424393186271 * fRec16[2])));
			fRec20[0] = (fConst9 * ((0.027 * (fRec15[1] + fRec15[2])) - (fConst10 * fRec20[1])));
			fRec15[0] = (double(Ftube(int(TUBE_TABLE_6DJ8_68k), double((((0.92544984225177063 * (fRec16[0] + fRec16[2])) + (fRec20[0] + (1.8508996845035413 * fRec16[1]))) + -1.8639460000000001)))) + -60.964962962962957);
			fRec14[0] = ((0.050000000000000003 * ((fConst4 * fRec15[0]) + (fConst11 * fRec15[1]))) - (fConst12 * fRec14[1]));
			fRec13[0] = (0.0 - (fConst6 * ((fConst7 * fRec13[1]) - (fRec14[0] + fRec14[1]))));
			fRec12[0] = ((0.93028479253239138 * (fRec13[0] + fRec13[1])) - (0.86056958506478287 * fRec12[1]));
			fRec11[0] = (fRec12[0] - ((1.8405051250752198 * fRec11[1]) + (0.86129424393186271 * fRec11[2])));
			fRec21[0] = (fConst14 * ((0.014999999999999999 * (fRec10[1] + fRec10[2])) - (fConst15 * fRec21[1])));
			fRec10[0] = (double(Ftube(int(TUBE_TABLE_6DJ8_250k), double((((0.92544984225177063 * (fRec11[0] + fRec11[2])) + (fRec21[0] + (1.8508996845035413 * fRec11[1]))) + -1.271609)))) + -45.226066666666668);
			fRec9[0] = ((0.050000000000000003 * ((fConst4 * fRec10[0]) + (fConst11 * fRec10[1]))) - (fConst12 * fRec9[1]));
			fRec8[0] = ((0.93028479253239138 * (fRec9[0] + fRec9[1])) - (0.86056958506478287 * fRec8[1]));
			fRec7[0] = (fRec8[0] - ((1.8405051250752198 * fRec7[1]) + (0.86129424393186271 * fRec7[2])));
			fRec22[0] = (fConst17 * ((0.0082000000000000007 * (fRec6[1] + fRec6[2])) - (fConst18 * fRec22[1])));
			fRec6[0] = (double(Ftube(int(TUBE_TABLE_6DJ8_250k), double((((0.92544984225177063 * (fRec7[0] + fRec7[2])) + (fRec22[0] + (1.8508996845035413 * fRec7[1]))) + -0.79704299999999995)))) + -32.799634146341475);
			fRec5[0] = ((0.050000000000000003 * ((fConst4 * fRec6[0]) + (fConst11 * fRec6[1]))) - (fConst12 * fRec5[1]));
			fRec23[0] = (fSlow1 + (0.999 * fRec23[1]));
			double fTemp1 = (2.0 * (fRec23[0] + -0.5));
			fRec31[0] = (fRec5[0] - (fConst34 * ((fConst35 * fRec31[2]) + (fConst36 * fRec31[1]))));
			double fTemp2 = (fRec31[2] + (fRec31[0] + (2.0 * fRec31[1])));
			fVec1[0] = fTemp2;
			fRec30[0] = ((fConst34 * ((fConst4 * fTemp2) + (fConst11 * fVec1[1]))) - (fConst12 * fRec30[1]));
			fRec29[0] = (0.0 - (fConst30 * ((fConst31 * fRec29[1]) - (fRec30[0] + fRec30[1]))));
			fRec28[0] = (fRec29[0] - (fConst26 * ((fConst37 * fRec28[2]) + (fConst40 * fRec28[1]))));
			double fTemp3 = (fRec28[2] + (fRec28[0] + (2.0 * fRec28[1])));
			fVec2[0] = fTemp3;
			fRec27[0] = ((fConst26 * ((fConst28 * fTemp3) + (fConst41 * fVec2[1]))) - (fConst43 * fRec27[1]));
			fRec26[0] = (fRec27[0] - (fConst21 * ((fConst44 * fRec26[2]) + (fConst45 * fRec26[1]))));
			double fTemp4 = (fConst55 * fRec25[1]);
			fRec25[0] = ((fConst21 * (((fConst23 * fRec26[0]) + (fConst46 * fRec26[1])) + (fConst23 * fRec26[2]))) - (fConst50 * ((fConst52 * fRec25[2]) + fTemp4)));
			double fTemp5 = std::max<double>(-1.0, std::min<double>(1.0, ((fRec25[2] + (fConst50 * (fTemp4 + (fConst52 * fRec25[0])))) * std::pow(10.0, (1.2 * fRec23[0])))));
			fRec35[0] = ((fConst56 * fRec30[1]) - (fConst30 * ((fConst31 * fRec35[1]) - (fConst25 * fRec30[0]))));
			fRec34[0] = (fRec35[0] - (fConst26 * ((fConst37 * fRec34[2]) + (fConst40 * fRec34[1]))));
			double fTemp6 = (fConst45 * fRec33[1]);
			fRec33[0] = ((fConst26 * (((fConst39 * fRec34[0]) + (fConst57 * fRec34[1])) + (fConst39 * fRec34[2]))) - (fConst58 * ((fConst59 * fRec33[2]) + fTemp6)));
			double fTemp7 = (fConst55 * fRec32[1]);
			fRec32[0] = ((fRec33[2] + (fConst58 * (fTemp6 + (fConst59 * fRec33[0])))) - (fConst50 * ((fConst52 * fRec32[2]) + fTemp7)));
			double fTemp8 = std::max<double>(-1.0, std::min<double>(1.0, ((fRec32[2] + (fConst50 * (fTemp7 + (fConst52 * fRec32[0])))) * std::pow(10.0, (0.80000000000000004 * fRec23[0])))));
			fRec39[0] = (0.0 - (fConst62 * ((fConst42 * fRec39[1]) - (fConst26 * (fTemp3 + fVec2[1])))));
			fRec38[0] = (fRec39[0] - (fConst21 * ((fConst44 * fRec38[2]) + (fConst45 * fRec38[1]))));
			double fTemp9 = (fRec38[2] + (fRec38[0] + (2.0 * fRec38[1])));
			fVec3[0] = fTemp9;
			fRec37[0] = ((fConst21 * ((fConst61 * fTemp9) + (fConst63 * fVec3[1]))) - (fConst64 * fRec37[1]));
			fRec36[0] = (fRec37[0] - (fConst60 * ((fConst65 * fRec36[2]) + (fConst55 * fRec36[1]))));
			double fTemp10 = std::max<double>(-1.0, std::min<double>(1.0, (fConst60 * ((((fConst54 * fRec36[0]) + (fConst66 * fRec36[1])) + (fConst54 * fRec36[2])) * std::pow(10.0, (2.0 * fRec23[0]))))));
			fRec41[0] = (0.0 - (fConst67 * ((fConst51 * fRec41[1]) - (fConst21 * (fTemp9 + fVec3[1])))));
			fRec40[0] = (fRec41[0] - (fConst60 * ((fConst65 * fRec40[2]) + (fConst55 * fRec40[1]))));
			double fTemp11 = std::max<double>(-1.0, std::min<double>(1.0, (fConst60 * ((fRec40[2] + (fRec40[0] + (2.0 * fRec40[1]))) * std::pow(10.0, (0.90000000000000002 * fRec23[0]))))));
			double fTemp12 = (((1.333521432 * (fTemp5 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp5))))) + (1.584893192 * ((fTemp8 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp8)))) + (fTemp10 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp10))))))) + (1.2589412 * (fTemp11 * (1.0 - (0.33333333333333331 * module_faustpower2_f(fTemp11))))));
			fVec4[0] = fTemp12;
			fRec24[0] = (0.0 - (fConst6 * ((fConst7 * fRec24[1]) - (fTemp12 + fVec4[1]))));
			fRec42[0] = (fSlow2 + (0.999 * fRec42[1]));
			double fTemp13 = std::pow(10.0, (2.4239999999999999 * (((fRec5[0] * (1.0 - std::max<double>(0.0, fTemp1))) + (fRec24[0] * (1.0 - std::max<double>(0.0, (-1.0 * fTemp1))))) * (fRec42[0] + -0.01))));
			fVec5[0] = fTemp13;
			fRec4[0] = (0.0 - (fConst6 * ((fConst7 * fRec4[1]) - (fTemp13 + fVec5[1]))));
			fRec3[0] = ((0.93028479253239138 * (fRec4[0] + fRec4[1])) - (0.86056958506478287 * fRec3[1]));
			fRec2[0] = (fRec3[0] - ((1.8405051250752198 * fRec2[1]) + (0.86129424393186271 * fRec2[2])));
			double fTemp14 = (0.92544984225177063 * (fRec2[0] + fRec2[2]));
			fRec43[0] = (fConst6 * ((0.0082000000000000007 * (fRec1[1] + fRec1[2])) - (fConst7 * fRec43[1])));
			double fTemp15 = (1.8508996845035413 * fRec2[1]);
			fRec1[0] = (double(Ftube(int(TUBE_TABLE_6V6_250k), double(((fTemp14 + (fRec43[0] + fTemp15)) + -1.1304620000000001)))) + -112.13878048780487);
			fRec0[0] = ((0.025000000000000001 * ((fConst4 * fRec1[0]) + (fConst11 * fRec1[1]))) - (fConst12 * fRec0[1]));
			fRec46[0] = (fConst6 * ((0.0082000000000000007 * (fRec45[1] + fRec45[2])) - (fConst7 * fRec46[1])));
			fRec45[0] = (double(Ftube(int(TUBE_TABLE_6V6_68k), double(((fTemp14 + (fRec46[0] + fTemp15)) + -1.1307400000000001)))) + -112.10487804878048);
			fRec44[0] = ((0.025000000000000001 * ((fConst4 * fRec45[0]) + (fConst11 * fRec45[1]))) - (fConst12 * fRec44[1]));
			fRec48[0] = (fSlow3 + (0.999 * fRec48[1]));
			fRec47[0] = ((0.999 * fRec47[1]) + (6.3100000000000057e-05 * fRec48[0]));
			output0[i] = FAUSTFLOAT(((fRec0[0] + fRec44[0]) * fRec47[0]));
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fVec0[1] = fVec0[0];
			fRec17[1] = fRec17[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec20[1] = fRec20[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fRec21[1] = fRec21[0];
			fRec10[2] = fRec10[1];
			fRec10[1] = fRec10[0];
			fRec9[1] = fRec9[0];
			fRec8[1] = fRec8[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec22[1] = fRec22[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			fRec23[1] = fRec23[0];
			fRec31[2] = fRec31[1];
			fRec31[1] = fRec31[0];
			fVec1[1] = fVec1[0];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fVec2[1] = fVec2[0];
			fRec27[1] = fRec27[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fRec25[2] = fRec25[1];
			fRec25[1] = fRec25[0];
			fRec35[1] = fRec35[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fRec32[2] = fRec32[1];
			fRec32[1] = fRec32[0];
			fRec39[1] = fRec39[0];
			fRec38[2] = fRec38[1];
			fRec38[1] = fRec38[0];
			fVec3[1] = fVec3[0];
			fRec37[1] = fRec37[0];
			fRec36[2] = fRec36[1];
			fRec36[1] = fRec36[0];
			fRec41[1] = fRec41[0];
			fRec40[2] = fRec40[1];
			fRec40[1] = fRec40[0];
			fVec4[1] = fVec4[0];
			fRec24[1] = fRec24[0];
			fRec42[1] = fRec42[0];
			fVec5[1] = fVec5[0];
			fRec4[1] = fRec4[0];
			fRec3[1] = fRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec43[1] = fRec43[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fRec46[1] = fRec46[0];
			fRec45[2] = fRec45[1];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace gxsim_pre_6dj8_master_6v6 */

