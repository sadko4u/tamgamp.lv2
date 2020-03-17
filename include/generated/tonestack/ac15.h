namespace tonestack_ac15 {

/* ------------------------------------------------------------
name: "AC-15"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */




static double module_faustpower2_f(double value) {
	return (value * value);
	
}


class module : public dsp {
	
 private:
	
	int fSamplingFreq;
	double fConst0;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	double fConst1;
	FAUSTFLOAT fVslider2;
	double fConst2;
	double fRec0[4];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("filename", "ac15");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "AC-15");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "AC-15");
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
		fConst0 = (2.0 * std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq))));
		fConst1 = module_faustpower2_f(fConst0);
		fConst2 = (3.0 * fConst0);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.5);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 4); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
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
		ui_interface->openVerticalBox("AC-15");
		ui_interface->addVerticalSlider(".ts.bass", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".ts.middle", &fVslider0, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".ts.treble", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = double(fVslider0);
		double fSlow1 = (0.01034 * fSlow0);
		double fSlow2 = std::exp((3.3999999999999999 * (double(fVslider1) + -1.0)));
		double fSlow3 = (fConst0 * ((fSlow1 + (0.022103400000000002 * fSlow2)) + 0.036906800000000003));
		double fSlow4 = (0.00022854915600000004 * fSlow0);
		double fSlow5 = ((((((0.00022854915600000004 * fSlow2) + 0.00012621831200000002) - fSlow4) * fSlow0) + (0.00010719478000000002 * fSlow2)) + 0.00010871476000000002);
		double fSlow6 = (fSlow2 - fSlow0);
		double fSlow7 = (fSlow2 + 1.0);
		double fSlow8 = ((((3.4212992000000007e-08 * fSlow6) + 2.3521432000000005e-08) * fSlow0) + (1.0691560000000003e-08 * fSlow7));
		double fSlow9 = (fConst0 * fSlow8);
		double fSlow10 = (1.0 / (-1.0 - (fSlow3 + (fConst1 * (fSlow5 + fSlow9)))));
		double fSlow11 = double(fVslider2);
		double fSlow12 = (fConst0 * ((0.00010340000000000001 * fSlow11) + (fSlow1 + (0.022103400000000002 * fSlow7))));
		double fSlow13 = (((1.5199800000000001e-06 * fSlow11) + (((0.00022961831200000004 - fSlow4) * fSlow0) + (fSlow2 * (fSlow4 + 3.7947800000000004e-06)))) + 3.7947800000000004e-06);
		double fSlow14 = ((3.4212992000000007e-08 * ((fSlow6 + 1.0) * fSlow0)) - (1.0691560000000003e-08 * (((fSlow0 + -1.0) - fSlow2) * fSlow11)));
		double fSlow15 = (fConst0 * fSlow14);
		double fSlow16 = (0.0 - (fSlow12 + (fConst1 * (fSlow13 + fSlow15))));
		double fSlow17 = (fConst2 * fSlow8);
		double fSlow18 = ((fConst1 * (fSlow5 + fSlow17)) + (-3.0 - fSlow3));
		double fSlow19 = ((fSlow3 + (fConst1 * (fSlow5 - fSlow17))) + -3.0);
		double fSlow20 = (fSlow3 + (-1.0 - (fConst1 * (fSlow5 - fSlow9))));
		double fSlow21 = (fConst2 * fSlow14);
		double fSlow22 = ((fConst1 * (fSlow13 + fSlow21)) - fSlow12);
		double fSlow23 = (fSlow12 + (fConst1 * (fSlow13 - fSlow21)));
		double fSlow24 = (fSlow12 - (fConst1 * (fSlow13 - fSlow15)));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (double(input0[i]) - (fSlow10 * (((fSlow18 * fRec0[1]) + (fSlow19 * fRec0[2])) + (fSlow20 * fRec0[3]))));
			output0[i] = FAUSTFLOAT((fSlow10 * ((((fSlow16 * fRec0[0]) + (fSlow22 * fRec0[1])) + (fSlow23 * fRec0[2])) + (fSlow24 * fRec0[3]))));
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec0[j0] = fRec0[(j0 - 1)];
				
			}
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace tonestack_ac15 */

