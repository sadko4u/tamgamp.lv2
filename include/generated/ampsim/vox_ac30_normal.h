namespace ampsim_vox_ac30_normal {

#include <generated/stage/vox_ac30_normal/s01_stage1_neg_table.h>
#include <generated/stage/vox_ac30_normal/s01_stage1_table.h>
#include <generated/stage/vox_ac30_normal/s02_stage2_neg_table.h>
#include <generated/stage/vox_ac30_normal/s02_stage2_table.h>
/* ------------------------------------------------------------
name: "vox_ac30_normal"
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
	double fRec2[2];
	double fConst10;
	double fConst11;
	FAUSTFLOAT fVslider2;
	double fRec4[2];
	double fConst12;
	double fConst13;
	double fConst14;
	double fRec3[3];
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fRec1[4];
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "vox_ac30_normal");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "vox_ac30_normal");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "vox_ac30_normal");
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
		fConst1 = module_faustpower2_f(fConst0);
		fConst2 = (9.0371261028875497e-15 * fConst0);
		fConst3 = (((((fConst2 + 2.4569108774869299e-13) * fConst0) + 1.6200511205925999e-12) * fConst0) + 8.3278935531067195e-13);
		fConst4 = (fConst1 / fConst3);
		fConst5 = (1.66051214997777e-13 * fConst0);
		fConst6 = (fConst5 + 6.2690930707081606e-14);
		fConst7 = (4.3364938229044102e-10 * fConst0);
		fConst8 = (((fConst7 + 1.8159427778989898e-08) * fConst0) + 1.7066943322007e-07);
		fConst9 = (fConst0 / fConst8);
		fConst10 = (2.9542631913275301e-08 * fConst0);
		fConst11 = (-3.9390175884366702e-07 - fConst10);
		fConst12 = (1.0 / fConst8);
		fConst13 = (3.4133886644014e-07 - (8.67298764580881e-10 * fConst1));
		fConst14 = (((fConst7 + -1.8159427778989898e-08) * fConst0) + 1.7066943322007e-07);
		fConst15 = (5.9085263826550702e-08 * fConst0);
		fConst16 = (3.9390175884366702e-07 - fConst10);
		fConst17 = (1.0 / fConst3);
		fConst18 = (2.7111378308662701e-14 * fConst0);
		fConst19 = (((((-2.4569108774869299e-13 - fConst18) * fConst0) + 1.6200511205925999e-12) * fConst0) + 2.4983680659320201e-12);
		fConst20 = (((((fConst18 + -2.4569108774869299e-13) * fConst0) + -1.6200511205925999e-12) * fConst0) + 2.4983680659320201e-12);
		fConst21 = (((((2.4569108774869299e-13 - fConst2) * fConst0) + -1.6200511205925999e-12) * fConst0) + 8.3278935531067195e-13);
		fConst22 = (4.9815364499333005e-13 * fConst0);
		fConst23 = (-6.2690930707081606e-14 - fConst22);
		fConst24 = (fConst22 + -6.2690930707081606e-14);
		fConst25 = (6.2690930707081606e-14 - fConst5);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(1.0);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec2[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec4[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) {
			fRec3[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 4); l4 = (l4 + 1)) {
			fRec1[l4] = 0.0;
			
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
		ui_interface->openVerticalBox("vox_ac30_normal");
		ui_interface->addVerticalSlider(".amp.gain", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider2, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0010000000000000009 * double(fVslider0));
		double fSlow1 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider1))) + -1.0));
		double fSlow2 = (0.0010000000000000009 * double(fVslider2));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec2[0] = (fSlow1 + (0.999 * fRec2[1]));
			fRec4[0] = (fSlow2 + (0.999 * fRec4[1]));
			fRec3[0] = ((0.12 * (fRec4[0] * double(input0[i]))) - (fConst12 * ((fConst13 * fRec3[1]) + (fConst14 * fRec3[2]))));
			double fTemp0 = (fConst9 * (fRec2[0] * (((fConst11 * fRec3[0]) + (fConst15 * fRec3[1])) + (fConst16 * fRec3[2]))));
			fRec1[0] = ((0.89000000000000001 * (int(signbit(double(fTemp0)))?double(s01_stage1_negclip(double(fTemp0))):double(s01_stage1clip(double(fTemp0))))) - (fConst17 * (((fConst19 * fRec1[1]) + (fConst20 * fRec1[2])) + (fConst21 * fRec1[3]))));
			double fTemp1 = (fConst4 * ((((fConst6 * fRec1[0]) + (fConst23 * fRec1[1])) + (fConst24 * fRec1[2])) + (fConst25 * fRec1[3])));
			output0[i] = FAUSTFLOAT((fRec0[0] * (int(signbit(double(fTemp1)))?double(s02_stage2_negclip(double(fTemp1))):double(s02_stage2clip(double(fTemp1))))));
			fRec0[1] = fRec0[0];
			fRec2[1] = fRec2[0];
			fRec4[1] = fRec4[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec1[j0] = fRec1[(j0 - 1)];
				
			}
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_vox_ac30_normal */

