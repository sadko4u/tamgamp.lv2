namespace tonestack_default {

/* ------------------------------------------------------------
name: "default"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */






class module : public dsp {
	
 private:
	
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	int fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	FAUSTFLOAT fVslider2;
	double fVec0[3];
	double fRec3[3];
	double fRec2[3];
	double fRec1[3];
	double fRec0[3];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("filename", "default");
		m->declare("id", "default");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "default");
		m->declare("tone.dsp/author", "Hermann Meyer");
		m->declare("tone.dsp/copyright", "(C) Hermann Meyer 2008");
		m->declare("tone.dsp/id", "tone");
		m->declare("tone.dsp/license", "BSD");
		m->declare("tone.dsp/version", "0.01");
		m->declare("tonestack.dsp/id", "tonestack");
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
		fConst1 = (15079.644737231007 / fConst0);
		fConst2 = (1.4142135623730951 * std::sin(fConst1));
		fConst3 = std::cos(fConst1);
		fConst4 = (3769.9111843077517 / fConst0);
		fConst5 = (1.4142135623730951 * std::sin(fConst4));
		fConst6 = std::cos(fConst4);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 3); l0 = (l0 + 1)) {
			fVec0[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 3); l1 = (l1 + 1)) {
			fRec3[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 3); l2 = (l2 + 1)) {
			fRec2[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) {
			fRec1[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) {
			fRec0[l4] = 0.0;
			
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
		ui_interface->openVerticalBox("default");
		ui_interface->addVerticalSlider(".ts.bass", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".ts.middle", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".ts.treble", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (double(fVslider1) + -0.5);
		double fSlow1 = (10.0 * fSlow0);
		double fSlow2 = std::pow(10.0, (0.025000000000000001 * ((20.0 * (double(fVslider0) + -0.5)) - fSlow1)));
		double fSlow3 = (fConst2 * std::sqrt(fSlow2));
		double fSlow4 = (fConst3 * (fSlow2 + -1.0));
		double fSlow5 = (1.0 / ((fSlow2 + fSlow3) + (1.0 - fSlow4)));
		double fSlow6 = (fSlow2 + (1.0 - (fSlow4 + fSlow3)));
		double fSlow7 = (fConst3 * (fSlow2 + 1.0));
		double fSlow8 = (2.0 * (fSlow2 + (-1.0 - fSlow7)));
		double fSlow9 = (fSlow2 + fSlow4);
		double fSlow10 = (fSlow2 * ((fSlow3 + fSlow9) + 1.0));
		double fSlow11 = std::pow(10.0, (0.25 * fSlow0));
		double fSlow12 = std::sqrt(fSlow11);
		double fSlow13 = (fConst5 * fSlow12);
		double fSlow14 = (fSlow11 + -1.0);
		double fSlow15 = (fConst6 * fSlow14);
		double fSlow16 = (1.0 / ((fSlow11 + fSlow13) + (1.0 - fSlow15)));
		double fSlow17 = (fSlow11 + (1.0 - (fSlow15 + fSlow13)));
		double fSlow18 = (fSlow11 + 1.0);
		double fSlow19 = (fConst6 * fSlow18);
		double fSlow20 = (2.0 * (fSlow11 + (-1.0 - fSlow19)));
		double fSlow21 = (fSlow15 + fSlow11);
		double fSlow22 = (((fSlow21 + fSlow13) + 1.0) * fSlow11);
		double fSlow23 = (fConst3 * fSlow14);
		double fSlow24 = (fSlow23 + fSlow11);
		double fSlow25 = (fConst2 * fSlow12);
		double fSlow26 = (1.0 / ((fSlow24 + fSlow25) + 1.0));
		double fSlow27 = (fConst3 * fSlow18);
		double fSlow28 = (0.0 - (2.0 * ((fSlow27 + fSlow11) + -1.0)));
		double fSlow29 = (fSlow24 + (1.0 - fSlow25));
		double fSlow30 = ((fSlow11 + fSlow25) + (1.0 - fSlow23));
		double fSlow31 = std::pow(10.0, (0.025000000000000001 * ((20.0 * (std::exp((3.3999999999999999 * (double(fVslider2) + -1.0))) + -0.5)) - fSlow1)));
		double fSlow32 = (fConst6 * (fSlow31 + -1.0));
		double fSlow33 = (fSlow31 + fSlow32);
		double fSlow34 = (fConst5 * std::sqrt(fSlow31));
		double fSlow35 = (1.0 / ((fSlow33 + fSlow34) + 1.0));
		double fSlow36 = (fConst6 * (fSlow31 + 1.0));
		double fSlow37 = (0.0 - (2.0 * ((fSlow31 + fSlow36) + -1.0)));
		double fSlow38 = (fSlow33 + (1.0 - fSlow34));
		double fSlow39 = ((fSlow31 + fSlow34) + (1.0 - fSlow32));
		double fSlow40 = (2.0 * (fSlow31 + (-1.0 - fSlow36)));
		double fSlow41 = (fSlow31 + (1.0 - (fSlow32 + fSlow34)));
		double fSlow42 = (2.0 * (fSlow11 + (-1.0 - fSlow27)));
		double fSlow43 = (fSlow11 + (1.0 - (fSlow23 + fSlow25)));
		double fSlow44 = ((0.0 - (2.0 * fSlow11)) * ((fSlow19 + fSlow11) + -1.0));
		double fSlow45 = ((fSlow21 + (1.0 - fSlow13)) * fSlow11);
		double fSlow46 = ((0.0 - (2.0 * fSlow2)) * ((fSlow2 + fSlow7) + -1.0));
		double fSlow47 = (fSlow2 * (fSlow9 + (1.0 - fSlow3)));
		for (int i = 0; (i < count); i = (i + 1)) {
			double fTemp0 = double(input0[i]);
			fVec0[0] = fTemp0;
			fRec3[0] = (0.0 - (fSlow35 * (((fSlow37 * fRec3[1]) + (fSlow38 * fRec3[2])) - (fSlow31 * (((fSlow39 * fTemp0) + (fSlow40 * fVec0[1])) + (fSlow41 * fVec0[2]))))));
			fRec2[0] = (0.0 - (fSlow26 * (((fSlow28 * fRec2[1]) + (fSlow29 * fRec2[2])) - (fSlow11 * (((fSlow30 * fRec3[0]) + (fSlow42 * fRec3[1])) + (fSlow43 * fRec3[2]))))));
			fRec1[0] = (fSlow16 * ((0.0 - ((fSlow17 * fRec1[2]) + (fSlow20 * fRec1[1]))) + (((fSlow22 * fRec2[0]) + (fSlow44 * fRec2[1])) + (fSlow45 * fRec2[2]))));
			fRec0[0] = (fSlow5 * ((0.0 - ((fSlow6 * fRec0[2]) + (fSlow8 * fRec0[1]))) + (((fSlow10 * fRec1[0]) + (fSlow46 * fRec1[1])) + (fSlow47 * fRec1[2]))));
			output0[i] = FAUSTFLOAT(fRec0[0]);
			fVec0[2] = fVec0[1];
			fVec0[1] = fVec0[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace tonestack_default */

