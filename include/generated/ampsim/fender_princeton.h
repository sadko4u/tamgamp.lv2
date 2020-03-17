namespace ampsim_fender_princeton {

#include <generated/stage/fender_princeton/s01_stage1_neg_table.h>
#include <generated/stage/fender_princeton/s01_stage1_table.h>
#include <generated/stage/fender_princeton/s03_stage2_neg_table.h>
#include <generated/stage/fender_princeton/s03_stage2_table.h>
#include <generated/stage/fender_princeton/s04_stage3_neg_table.h>
#include <generated/stage/fender_princeton/s04_stage3_table.h>
#include <generated/stage/fender_princeton/s05_stage4_neg_table.h>
#include <generated/stage/fender_princeton/s05_stage4_table.h>
/* ------------------------------------------------------------
name: "fender_princeton"
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
	FAUSTFLOAT fVslider1;
	double fRec2[2];
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	FAUSTFLOAT fVslider2;
	double fRec6[2];
	double fConst15;
	double fRec5[2];
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	FAUSTFLOAT fVslider3;
	double fRec7[2];
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fRec4[4];
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	FAUSTFLOAT fVslider4;
	double fRec8[2];
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
	double fRec3[3];
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
	double fRec1[3];
	double fConst53;
	double fConst54;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "fender_princeton");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "fender_princeton");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "fender_princeton");
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
		fConst1 = (1.2282113275640001e-10 * fConst0);
		fConst2 = (1.0 / (((fConst1 + 1.49300944816928e-05) * fConst0) + 0.000375575007998186));
		fConst3 = (7.18566052160675e-09 * fConst0);
		fConst4 = (((-0.000108969453073724 - fConst3) * fConst0) + -0.0014516485902235699);
		fConst5 = (4.2507885190036101e-10 * fConst0);
		fConst6 = (1.0 / (((fConst5 + 4.29329117862591e-07) * fConst0) + 1.05275641642752e-05));
		fConst7 = (2.39054193785811e-08 * fConst0);
		fConst8 = (((-2.42241583036289e-05 - fConst7) * fConst0) + -0.00031873892504774402);
		fConst9 = (0.34999999999999998 * fConst0);
		fConst10 = (2.0822416960243701e-05 * fConst0);
		fConst11 = (fConst10 + 0.00052398590830409397);
		fConst12 = (1.0 / fConst11);
		fConst13 = (0.00121958463123679 * fConst0);
		fConst14 = (-0.016261128416490401 - fConst13);
		fConst15 = ((0.00052398590830409397 - fConst10) / fConst11);
		fConst16 = (fConst13 + -0.016261128416490401);
		fConst17 = (9.6758776087024905e-13 * fConst0);
		fConst18 = (7.5793244708170899e-09 - fConst17);
		fConst19 = (4.6404719143777302e-14 * fConst0);
		fConst20 = (((-1.2307781419357701e-10 - fConst19) * fConst0) + 1.2050192183981899e-08);
		fConst21 = (-7.5793244708170899e-09 - fConst17);
		fConst22 = (((fConst19 + -1.2307781419357701e-10) * fConst0) + -1.2050192183981899e-08);
		fConst23 = (fConst17 + -7.5793244708170899e-09);
		fConst24 = (1.54682397145924e-14 * fConst0);
		fConst25 = (((1.2307781419357701e-10 - fConst24) * fConst0) + -1.2050192183981899e-08);
		fConst26 = (fConst17 + 7.5793244708170899e-09);
		fConst27 = (((fConst24 + 1.2307781419357701e-10) * fConst0) + 1.2050192183981899e-08);
		fConst28 = (8.4107336408736105e-14 * fConst0);
		fConst29 = (fConst28 + 4.8143072055146297e-10);
		fConst30 = (1.3445730650376199e-15 * fConst0);
		fConst31 = (((fConst30 + 1.00884809971388e-11) * fConst0) + 1.2050192183981899e-08);
		fConst32 = (8.8348042446151303e-13 * fConst0);
		fConst33 = (fConst32 + 3.0050354573520902e-11);
		fConst34 = module_faustpower2_f(fConst0);
		fConst35 = (1.41236666495548e-14 * fConst34);
		fConst36 = (4.8143072055146297e-10 - fConst28);
		fConst37 = (4.0337191951128502e-15 * fConst0);
		fConst38 = (((-1.00884809971388e-11 - fConst37) * fConst0) + 1.2050192183981899e-08);
		fConst39 = (3.0050354573520902e-11 - fConst32);
		fConst40 = (-4.8143072055146297e-10 - fConst28);
		fConst41 = (((fConst37 + -1.00884809971388e-11) * fConst0) + -1.2050192183981899e-08);
		fConst42 = (-3.0050354573520902e-11 - fConst32);
		fConst43 = (4.23709999486644e-14 * fConst34);
		fConst44 = (fConst28 + -4.8143072055146297e-10);
		fConst45 = (((1.00884809971388e-11 - fConst30) * fConst0) + -1.2050192183981899e-08);
		fConst46 = (fConst32 + -3.0050354573520902e-11);
		fConst47 = (2.10551283285504e-05 - (8.5015770380072098e-10 * fConst34));
		fConst48 = (((fConst5 + -4.29329117862591e-07) * fConst0) + 1.05275641642752e-05);
		fConst49 = ((4.7810838757162201e-08 * fConst34) + -0.00063747785009548804);
		fConst50 = (((2.42241583036289e-05 - fConst7) * fConst0) + -0.00031873892504774402);
		fConst51 = (0.00075115001599637297 - (2.4564226551280002e-10 * fConst34));
		fConst52 = (((fConst1 + -1.49300944816928e-05) * fConst0) + 0.000375575007998186);
		fConst53 = ((1.43713210432135e-08 * fConst34) + -0.0029032971804471498);
		fConst54 = (((0.000108969453073724 - fConst3) * fConst0) + -0.0014516485902235699);
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(1.0);
		fVslider3 = FAUSTFLOAT(0.5);
		fVslider4 = FAUSTFLOAT(0.5);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
			
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec2[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec6[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec5[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec7[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 4); l5 = (l5 + 1)) {
			fRec4[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec8[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 3); l7 = (l7 + 1)) {
			fRec3[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			fRec1[l8] = 0.0;
			
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
		ui_interface->openVerticalBox("fender_princeton");
		ui_interface->addVerticalSlider(".amp.bass", &fVslider3, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.gain", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider2, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.treble", &fVslider4, 0.5, 0.0, 1.0, 0.01);
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
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec2[0] = (fSlow1 + (0.999 * fRec2[1]));
			fRec6[0] = (fSlow2 + (0.999 * fRec6[1]));
			fRec5[0] = ((0.059999999999999998 * (fRec6[0] * double(input0[i]))) - (fConst15 * fRec5[1]));
			double fTemp0 = (fConst12 * ((fConst14 * fRec5[0]) + (fConst16 * fRec5[1])));
			fRec7[0] = (fSlow3 + (0.999 * fRec7[1]));
			double fTemp1 = ((fConst0 * (fConst26 + (fConst27 * fRec7[0]))) + 2.40402836588167e-07);
			fRec4[0] = ((int(signbit(double(fTemp0)))?double(s01_stage1_negclip(double(fTemp0))):double(s01_stage1clip(double(fTemp0)))) - ((((fRec4[1] * ((fConst0 * (fConst18 + (fConst20 * fRec7[0]))) + 7.2120850976450105e-07)) + (fRec4[2] * ((fConst0 * (fConst21 + (fConst22 * fRec7[0]))) + 7.2120850976450105e-07))) + (fRec4[3] * ((fConst0 * (fConst23 + (fConst25 * fRec7[0]))) + 2.40402836588167e-07))) / fTemp1));
			fRec8[0] = (fSlow4 + (0.999 * fRec8[1]));
			fRec3[0] = ((fConst9 * (((((fRec4[0] * ((fConst29 + (fConst31 * fRec7[0])) + (fRec8[0] * (fConst33 + (fConst35 * fRec7[0]))))) + (fRec4[1] * ((fConst36 + (fConst38 * fRec7[0])) + (fRec8[0] * (fConst39 + (fConst34 * (0.0 - (4.23709999486644e-14 * fRec7[0])))))))) + (fRec4[2] * ((fConst40 + (fConst41 * fRec7[0])) + (fRec8[0] * (fConst42 + (fConst43 * fRec7[0])))))) + (fRec4[3] * ((fConst44 + (fConst45 * fRec7[0])) + (fRec8[0] * (fConst46 + (fConst34 * (0.0 - (1.41236666495548e-14 * fRec7[0])))))))) / fTemp1)) - (fConst6 * ((fConst47 * fRec3[1]) + (fConst48 * fRec3[2]))));
			double fTemp2 = (fConst6 * (fRec2[0] * (((fConst8 * fRec3[0]) + (fConst49 * fRec3[1])) + (fConst50 * fRec3[2]))));
			fRec1[0] = ((0.65000000000000002 * (int(signbit(double(fTemp2)))?double(s03_stage2_negclip(double(fTemp2))):double(s03_stage2clip(double(fTemp2))))) - (fConst2 * ((fConst51 * fRec1[1]) + (fConst52 * fRec1[2]))));
			double fTemp3 = (fConst2 * (((fConst4 * fRec1[0]) + (fConst53 * fRec1[1])) + (fConst54 * fRec1[2])));
			double fTemp4 = (32.0 * (int(signbit(double(fTemp3)))?double(s04_stage3_negclip(double(fTemp3))):double(s04_stage3clip(double(fTemp3)))));
			output0[i] = FAUSTFLOAT((12.0 * (fRec0[0] * (int(signbit(double(fTemp4)))?double(s05_stage4_negclip(double(fTemp4))):double(s05_stage4clip(double(fTemp4)))))));
			fRec0[1] = fRec0[0];
			fRec2[1] = fRec2[0];
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			fRec7[1] = fRec7[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec4[j0] = fRec4[(j0 - 1)];
				
			}
			fRec8[1] = fRec8[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_fender_princeton */

