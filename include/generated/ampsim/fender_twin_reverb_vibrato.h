namespace ampsim_fender_twin_reverb_vibrato {

#include <generated/stage/fender_twin_reverb_vibrato/s01_stage1_neg_table.h>
#include <generated/stage/fender_twin_reverb_vibrato/s01_stage1_table.h>
#include <generated/stage/fender_twin_reverb_vibrato/s03_stage2_neg_table.h>
#include <generated/stage/fender_twin_reverb_vibrato/s03_stage2_table.h>
#include <generated/stage/fender_twin_reverb_vibrato/s04_stage3_neg_table.h>
#include <generated/stage/fender_twin_reverb_vibrato/s04_stage3_table.h>
#include <generated/stage/fender_twin_reverb_vibrato/s05_stage4_neg_table.h>
#include <generated/stage/fender_twin_reverb_vibrato/s05_stage4_table.h>
/* ------------------------------------------------------------
name: "fender_twin_reverb_vibrato"
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
	double fConst10;
	FAUSTFLOAT fVslider1;
	double fRec3[2];
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	FAUSTFLOAT fVslider2;
	double fRec7[2];
	double fConst17;
	double fRec6[2];
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	FAUSTFLOAT fVslider3;
	double fRec8[2];
	FAUSTFLOAT fVslider4;
	double fRec9[2];
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
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fRec5[4];
	double fConst41;
	double fConst42;
	FAUSTFLOAT fVslider5;
	double fRec10[2];
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
	double fRec4[3];
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fRec2[3];
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fRec1[5];
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "fender_twin_reverb_vibrato");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "fender_twin_reverb_vibrato");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "fender_twin_reverb_vibrato");
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
		fConst2 = (1.8725645936446101e-19 * fConst0);
		fConst3 = (((((((fConst2 + 5.3899375323317501e-17) * fConst0) + 1.72508035993432e-15) * fConst0) + 1.4696419924380201e-14) * fConst0) + 1.08177249568012e-14);
		fConst4 = (fConst1 / fConst3);
		fConst5 = (3.7424711166569204e-18 * fConst0);
		fConst6 = (((-5.17684011327779e-17 - fConst5) * fConst0) + -3.4215978904890997e-17);
		fConst7 = (7.1678031938332696e-11 * fConst0);
		fConst8 = (1.0 / (((fConst7 + 1.7379185789289698e-05) * fConst0) + 0.00065289652817628703));
		fConst9 = (4.6784940395566199e-09 * fConst0);
		fConst10 = (((-7.1000382937336305e-05 - fConst9) * fConst0) + -0.0017289334957711099);
		fConst11 = (0.019 * fConst0);
		fConst12 = (2.0822119751855701e-05 * fConst0);
		fConst13 = (fConst12 + 0.00053825191092610701);
		fConst14 = (1.0 / fConst13);
		fConst15 = (0.0012901442014419701 * fConst0);
		fConst16 = (-0.017201922685893 - fConst15);
		fConst17 = ((0.00053825191092610701 - fConst12) / fConst13);
		fConst18 = (fConst15 + -0.017201922685893);
		fConst19 = (9.0343455639941396e-13 * fConst0);
		fConst20 = (7.25820551773951e-09 - fConst19);
		fConst21 = (4.3327983827318802e-14 * fConst0);
		fConst22 = (((-1.17981178089793e-10 - fConst21) * fConst0) + 1.23223556842233e-08);
		fConst23 = (1.2648083789591799e-13 * fConst0);
		fConst24 = (7.2397680778129901e-10 - fConst23);
		fConst25 = (6.0659177358246399e-15 * fConst0);
		fConst26 = ((-1.1583014343169901e-11 - fConst25) * fConst0);
		fConst27 = (-7.25820551773951e-09 - fConst19);
		fConst28 = (((fConst21 + -1.17981178089793e-10) * fConst0) + -1.23223556842233e-08);
		fConst29 = (-7.2397680778129901e-10 - fConst23);
		fConst30 = ((fConst25 + -1.1583014343169901e-11) * fConst0);
		fConst31 = (fConst19 + -7.25820551773951e-09);
		fConst32 = (1.4442661275772902e-14 * fConst0);
		fConst33 = (((1.17981178089793e-10 - fConst32) * fConst0) + -1.23223556842233e-08);
		fConst34 = (fConst23 + -7.2397680778129901e-10);
		fConst35 = (2.0219725786082099e-15 * fConst0);
		fConst36 = ((1.1583014343169901e-11 - fConst35) * fConst0);
		fConst37 = (fConst19 + 7.25820551773951e-09);
		fConst38 = (((fConst32 + 1.17981178089793e-10) * fConst0) + 1.23223556842233e-08);
		fConst39 = (fConst23 + 7.2397680778129901e-10);
		fConst40 = ((fConst35 + 1.1583014343169901e-11) * fConst0);
		fConst41 = (2.4398878836092999e-12 * fConst0);
		fConst42 = (fConst41 + 1.23223556842233e-08);
		fConst43 = (fConst19 + 3.0729066544197702e-11);
		fConst44 = (1.4442661275772902e-14 * fConst1);
		fConst45 = (1.23223556842233e-08 - fConst41);
		fConst46 = (3.0729066544197702e-11 - fConst19);
		fConst47 = (-1.23223556842233e-08 - fConst41);
		fConst48 = (-3.0729066544197702e-11 - fConst19);
		fConst49 = (4.3327983827318802e-14 * fConst1);
		fConst50 = (fConst41 + -1.23223556842233e-08);
		fConst51 = (fConst19 + -3.0729066544197702e-11);
		fConst52 = (2.5753036854619702e-09 * fConst1);
		fConst53 = (1.2876518427309901e-09 * fConst0);
		fConst54 = (fConst53 + -4.8381652005475602e-08);
		fConst55 = (4.8381652005475602e-08 - fConst53);
		fConst56 = (fConst53 + 4.8381652005475602e-08);
		fConst57 = (-4.8381652005475602e-08 - fConst53);
		fConst58 = (8.4046273430384198e-08 * fConst0);
		fConst59 = (-0.00035224271506799202 - fConst58);
		fConst60 = (fConst58 + 2.0499091080581501e-06);
		fConst61 = (1.68092546860768e-07 * fConst1);
		fConst62 = (0.0 - fConst61);
		fConst63 = (0.00035224271506799202 - fConst58);
		fConst64 = (fConst58 + -2.0499091080581501e-06);
		fConst65 = (0.0013057930563525699 - (1.43356063876665e-10 * fConst1));
		fConst66 = (((fConst7 + -1.7379185789289698e-05) * fConst0) + 0.00065289652817628703);
		fConst67 = ((9.3569880791132397e-09 * fConst1) + -0.0034578669915422298);
		fConst68 = (((7.1000382937336305e-05 - fConst9) * fConst0) + -0.0017289334957711099);
		fConst69 = (1.0 / fConst3);
		fConst70 = (7.49025837457845e-19 * fConst0);
		fConst71 = (((((-1.07798750646635e-16 - fConst70) * fConst1) + 2.9392839848760497e-14) * fConst0) + 4.3270899827204598e-14);
		fConst72 = ((((1.1235387561867701e-18 * fConst1) + -3.45016071986864e-15) * fConst1) + 6.4906349740807e-14);
		fConst73 = (((((1.07798750646635e-16 - fConst70) * fConst1) + -2.9392839848760497e-14) * fConst0) + 4.3270899827204598e-14);
		fConst74 = (((((((fConst2 + -5.3899375323317501e-17) * fConst0) + 1.72508035993432e-15) * fConst0) + -1.4696419924380201e-14) * fConst0) + 1.08177249568012e-14);
		fConst75 = (1.49698844666277e-17 * fConst0);
		fConst76 = ((fConst75 + 1.03536802265556e-16) * fConst0);
		fConst77 = (6.8431957809781994e-17 - (2.2454826699941501e-17 * fConst1));
		fConst78 = ((fConst75 + -1.03536802265556e-16) * fConst0);
		fConst79 = (((5.17684011327779e-17 - fConst5) * fConst0) + -3.4215978904890997e-17);
		
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
			fRec3[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec7[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec6[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec8[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec9[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 4); l6 = (l6 + 1)) {
			fRec5[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec10[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			fRec4[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) {
			fRec2[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 5); l10 = (l10 + 1)) {
			fRec1[l10] = 0.0;
			
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
		ui_interface->openVerticalBox("fender_twin_reverb_vibrato");
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
		double fSlow5 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider5))) + -1.0));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec3[0] = (fSlow1 + (0.999 * fRec3[1]));
			fRec7[0] = (fSlow2 + (0.999 * fRec7[1]));
			fRec6[0] = ((0.043999999999999997 * (fRec7[0] * double(input0[i]))) - (fConst17 * fRec6[1]));
			double fTemp0 = (fConst14 * ((fConst16 * fRec6[0]) + (fConst18 * fRec6[1])));
			fRec8[0] = (fSlow3 + (0.999 * fRec8[1]));
			fRec9[0] = (fSlow4 + (0.999 * fRec9[1]));
			double fTemp1 = (fRec9[0] * (fConst24 + (fConst26 * fRec8[0])));
			double fTemp2 = (fRec9[0] * (fConst29 + (fConst30 * fRec8[0])));
			double fTemp3 = (fRec9[0] * (fConst34 + (fConst36 * fRec8[0])));
			double fTemp4 = (fRec9[0] * (fConst39 + (fConst40 * fRec8[0])));
			double fTemp5 = ((fConst0 * ((fConst37 + (fConst38 * fRec8[0])) + fTemp4)) + 2.4583253235358199e-07);
			fRec5[0] = ((int(signbit(double(fTemp0)))?double(s01_stage1_negclip(double(fTemp0))):double(s01_stage1clip(double(fTemp0)))) - ((((fRec5[1] * ((fConst0 * ((fConst20 + (fConst22 * fRec8[0])) + fTemp1)) + 7.3749759706074602e-07)) + (fRec5[2] * ((fConst0 * ((fConst27 + (fConst28 * fRec8[0])) + fTemp2)) + 7.3749759706074602e-07))) + (fRec5[3] * ((fConst0 * ((fConst31 + (fConst33 * fRec8[0])) + fTemp3)) + 2.4583253235358199e-07))) / fTemp5));
			fRec10[0] = (fSlow5 + (0.999 * fRec10[1]));
			double fTemp6 = ((fConst0 * ((fRec3[0] * (fConst56 + (fConst57 * fRec3[0]))) + 5.3652160113791104e-06)) + 0.000201590216689482);
			fRec4[0] = ((fConst11 * (((((fRec5[0] * ((fTemp4 + (fConst42 * fRec8[0])) + (fRec10[0] * (fConst43 + (fConst44 * fRec8[0]))))) + (fRec5[1] * ((fTemp1 + (fConst45 * fRec8[0])) + (fRec10[0] * (fConst46 + (fConst1 * (0.0 - (4.3327983827318802e-14 * fRec8[0])))))))) + (fRec5[2] * ((fTemp2 + (fConst47 * fRec8[0])) + (fRec10[0] * (fConst48 + (fConst49 * fRec8[0])))))) + (fRec5[3] * ((fTemp3 + (fConst50 * fRec8[0])) + (fRec10[0] * (fConst51 + (fConst1 * (0.0 - (1.4442661275772902e-14 * fRec8[0])))))))) / fTemp5)) - (((fRec4[1] * ((fRec3[0] * (0.0 - (fConst52 * (1.0 - fRec3[0])))) + 0.00040318043337896401)) + (fRec4[2] * ((fConst0 * ((fRec3[0] * (fConst54 + (fConst55 * fRec3[0]))) + -5.3652160113791104e-06)) + 0.000201590216689482))) / fTemp6));
			double fTemp7 = ((fRec3[0] * (((fRec4[0] * ((fConst0 * (fConst59 + (fConst60 * fRec3[0]))) + -0.0085412879502422892)) + (fRec4[1] * (fConst61 + ((fConst62 * fRec3[0]) + -0.017082575900484599)))) + (fRec4[2] * ((fConst0 * (fConst63 + (fConst64 * fRec3[0]))) + -0.0085412879502422892)))) / fTemp6);
			fRec2[0] = ((0.050000000000000003 * (int(signbit(double(fTemp7)))?double(s03_stage2_negclip(double(fTemp7))):double(s03_stage2clip(double(fTemp7))))) - (fConst8 * ((fConst65 * fRec2[1]) + (fConst66 * fRec2[2]))));
			double fTemp8 = (fConst8 * (((fConst10 * fRec2[0]) + (fConst67 * fRec2[1])) + (fConst68 * fRec2[2])));
			fRec1[0] = ((0.14999999999999999 * (int(signbit(double(fTemp8)))?double(s04_stage3_negclip(double(fTemp8))):double(s04_stage3clip(double(fTemp8))))) - (fConst69 * ((((fConst71 * fRec1[1]) + (fConst72 * fRec1[2])) + (fConst73 * fRec1[3])) + (fConst74 * fRec1[4]))));
			double fTemp9 = (fConst4 * (((((fConst6 * fRec1[0]) + (fConst76 * fRec1[1])) + (fConst77 * fRec1[2])) + (fConst78 * fRec1[3])) + (fConst79 * fRec1[4])));
			output0[i] = FAUSTFLOAT((70.0 * (fRec0[0] * (int(signbit(double(fTemp9)))?double(s05_stage4_negclip(double(fTemp9))):double(s05_stage4clip(double(fTemp9)))))));
			fRec0[1] = fRec0[0];
			fRec3[1] = fRec3[0];
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			fRec8[1] = fRec8[0];
			fRec9[1] = fRec9[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec5[j0] = fRec5[(j0 - 1)];
				
			}
			fRec10[1] = fRec10[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
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
} /* namespace ampsim_fender_twin_reverb_vibrato */

