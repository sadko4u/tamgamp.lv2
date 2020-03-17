namespace ampsim_vox_ac30_brilliant {

#include <generated/stage/vox_ac30_brilliant/s01_stage1_neg_table.h>
#include <generated/stage/vox_ac30_brilliant/s01_stage1_table.h>
#include <generated/stage/vox_ac30_brilliant/s02_stage2_neg_table.h>
#include <generated/stage/vox_ac30_brilliant/s02_stage2_table.h>
#include <generated/stage/vox_ac30_brilliant/s03_stage3_neg_table.h>
#include <generated/stage/vox_ac30_brilliant/s03_stage3_table.h>
/* ------------------------------------------------------------
name: "vox_ac30_brilliant"
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
	double fRec3[2];
	FAUSTFLOAT fVslider2;
	double fRec5[2];
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
	double fRec4[4];
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
	FAUSTFLOAT fVslider3;
	double fRec6[2];
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
	double fRec2[5];
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	FAUSTFLOAT fVslider4;
	double fRec7[2];
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
	double fRec1[4];
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "vox_ac30_brilliant");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "vox_ac30_brilliant");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "vox_ac30_brilliant");
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
		fConst7 = (4.4027739817202497e-15 * fConst0);
		fConst8 = (((-2.1148648363495899e-10 - fConst7) * fConst0) + 3.32555682503344e-07);
		fConst9 = (4.4782676937647201e-14 * fConst0);
		fConst10 = (((3.2528649837720702e-11 - fConst9) * fConst0) + -6.6083492055786196e-10);
		fConst11 = (4.9185450919367398e-14 * fConst0);
		fConst12 = ((fConst11 + 3.3041746027893102e-13) * fConst0);
		fConst13 = (((fConst7 + -2.1148648363495899e-10) * fConst0) + -3.32555682503344e-07);
		fConst14 = (((fConst9 + 3.2528649837720702e-11) * fConst0) + 6.6083492055786196e-10);
		fConst15 = ((3.3041746027893102e-13 - fConst11) * fConst0);
		fConst16 = (1.46759132724008e-15 * fConst0);
		fConst17 = (((2.1148648363495899e-10 - fConst16) * fConst0) + -3.32555682503344e-07);
		fConst18 = (1.4927558979215699e-14 * fConst0);
		fConst19 = (((-3.2528649837720702e-11 - fConst18) * fConst0) + 6.6083492055786196e-10);
		fConst20 = (1.6395150306455802e-14 * fConst0);
		fConst21 = ((fConst20 + -3.3041746027893102e-13) * fConst0);
		fConst22 = (((fConst16 + 2.1148648363495899e-10) * fConst0) + 3.32555682503344e-07);
		fConst23 = (((fConst18 + -3.2528649837720702e-11) * fConst0) + -6.6083492055786196e-10);
		fConst24 = ((-3.3041746027893102e-13 - fConst20) * fConst0);
		fConst25 = (1.21691030264956e-12 * fConst0);
		fConst26 = (((-1.21853284971976e-08 - fConst25) * fConst0) + -1.6225470701994301e-07);
		fConst27 = ((fConst25 + 1.6225470701994301e-11) * fConst0);
		fConst28 = (3.6507309079486704e-12 * fConst0);
		fConst29 = (((fConst28 + 1.21853284971976e-08) * fConst0) + -1.6225470701994301e-07);
		fConst30 = ((-1.6225470701994301e-11 - fConst28) * fConst0);
		fConst31 = (((1.21853284971976e-08 - fConst28) * fConst0) + 1.6225470701994301e-07);
		fConst32 = ((fConst28 + -1.6225470701994301e-11) * fConst0);
		fConst33 = (((fConst25 + -1.21853284971976e-08) * fConst0) + 1.6225470701994301e-07);
		fConst34 = ((1.6225470701994301e-11 - fConst25) * fConst0);
		fConst35 = (5.5283860578378502e-17 * fConst1);
		fConst36 = ((7.6258830017880104e-11 - fConst35) * fConst0);
		fConst37 = (2.4324898654486498e-18 * fConst0);
		fConst38 = (((-1.3062626037579199e-14 - fConst37) * fConst1) + 1.47654625402069e-12);
		fConst39 = (2.4106918781546098e-18 * fConst0);
		fConst40 = (((fConst39 + 1.2998651482078101e-14) * fConst1) + -7.6233087050691705e-11);
		fConst41 = ((3.6487347981729799e-18 * fConst1) + -2.3865408641023399e-12);
		fConst42 = (2.9406548982098701e-12 - (3.6160378172319097e-18 * fConst1));
		fConst43 = (5.8850739175238204e-13 * fConst1);
		fConst44 = ((fConst35 + -7.6258830017880104e-11) * fConst0);
		fConst45 = (((1.3062626037579199e-14 - fConst37) * fConst1) + -1.47654625402069e-12);
		fConst46 = (((fConst39 + -1.2998651482078101e-14) * fConst1) + 7.6233087050691705e-11);
		fConst47 = (2.7641930289189199e-17 * fConst0);
		fConst48 = ((((2.9425369587619102e-13 - fConst47) * fConst0) + -3.812941500894e-11) * fConst0);
		fConst49 = (6.0812246636216303e-19 * fConst0);
		fConst50 = (((((fConst49 + -6.5313130187895902e-15) * fConst0) + 1.1932704320511699e-12) * fConst0) + -7.3827312701034397e-13);
		fConst51 = (6.0267296953865197e-19 * fConst0);
		fConst52 = (((((6.4993257410390298e-15 - fConst51) * fConst0) + -1.4703274491049401e-12) * fConst0) + 3.8116543525345801e-11);
		fConst53 = ((((fConst47 + 2.9425369587619102e-13) * fConst0) + 3.812941500894e-11) * fConst0);
		fConst54 = (((((fConst49 + 6.5313130187895902e-15) * fConst0) + 1.1932704320511699e-12) * fConst0) + 7.3827312701034397e-13);
		fConst55 = (((((-6.4993257410390298e-15 - fConst51) * fConst0) + -1.4703274491049401e-12) * fConst0) + -3.8116543525345801e-11);
		fConst56 = (1.5289897356948601e-16 * fConst0);
		fConst57 = (((-1.4826096634268e-12 - fConst56) * fConst0) + -2.24286820047292e-11);
		fConst58 = (3.3637774185287002e-18 * fConst0);
		fConst59 = (((((-4.0922606841550202e-14 - fConst58) * fConst0) + -7.3973537899982003e-11) * fConst0) + -1.1114283427185101e-09);
		fConst60 = (((((fConst58 + 4.0992106374990897e-14) * fConst0) + 7.4713947661946494e-11) * fConst0) + 1.1226307175477699e-09);
		fConst61 = (3.0579794713897297e-17 * fConst0);
		fConst62 = ((fConst61 + 4.6333022293784298e-16) * fConst1);
		fConst63 = (3.0885592661036198e-17 * fConst0);
		fConst64 = (((((9.2202714364629007e-16 - fConst63) * fConst0) + 1.79013949771437e-13) * fConst0) + 2.39323462261283e-12);
		fConst65 = (1.40389057550165e-15 * fConst0);
		fConst66 = (((-1.8080408926915201e-13 - fConst65) * fConst0) + -2.4171669688389501e-12);
		fConst67 = (3.0579794713897301e-16 * fConst1);
		fConst68 = (fConst67 + -4.4857364009458401e-11);
		fConst69 = (1.3455109674114801e-17 * fConst0);
		fConst70 = (((fConst69 + 8.1845213683100504e-14) * fConst1) + -2.2228566854370301e-09);
		fConst71 = (((-8.1984212749981795e-14 - fConst69) * fConst1) + 2.2452614350955299e-09);
		fConst72 = (1.2231917885558899e-16 * fConst0);
		fConst73 = ((-9.2666044587568597e-16 - fConst72) * fConst1);
		fConst74 = (1.2354237064414501e-16 * fConst0);
		fConst75 = (((fConst74 + -1.8440542872925801e-15) * fConst1) + 4.7864692452256503e-12);
		fConst76 = (2.8077811510032901e-15 * fConst1);
		fConst77 = (fConst76 + -4.83433393767791e-12);
		fConst78 = (2.0182664511172199e-17 * fConst1);
		fConst79 = (1.4794707579996401e-10 - fConst78);
		fConst80 = (fConst78 + -1.4942789532389299e-10);
		fConst81 = (1.8347876828338399e-16 * fConst1);
		fConst82 = (-3.5802789954287501e-13 - (1.85313555966217e-16 * fConst1));
		fConst83 = (4.4857364009458401e-11 - fConst67);
		fConst84 = (((fConst69 + -8.1845213683100504e-14) * fConst1) + 2.2228566854370301e-09);
		fConst85 = (((8.1984212749981795e-14 - fConst69) * fConst1) + -2.2452614350955299e-09);
		fConst86 = ((9.2666044587568597e-16 - fConst72) * fConst1);
		fConst87 = (((fConst74 + 1.8440542872925801e-15) * fConst1) + -4.7864692452256503e-12);
		fConst88 = (4.83433393767791e-12 - fConst76);
		fConst89 = (((fConst56 + -1.4826096634268e-12) * fConst0) + 2.24286820047292e-11);
		fConst90 = (((((4.0922606841550202e-14 - fConst58) * fConst0) + -7.3973537899982003e-11) * fConst0) + 1.1114283427185101e-09);
		fConst91 = (((((fConst58 + -4.0992106374990897e-14) * fConst0) + 7.4713947661946494e-11) * fConst0) + -1.1226307175477699e-09);
		fConst92 = ((fConst61 + -4.6333022293784298e-16) * fConst1);
		fConst93 = (((((-9.2202714364629007e-16 - fConst63) * fConst0) + 1.79013949771437e-13) * fConst0) + -2.39323462261283e-12);
		fConst94 = (((fConst65 + -1.8080408926915201e-13) * fConst0) + 2.4171669688389501e-12);
		fConst95 = (1.0 / fConst3);
		fConst96 = (2.7111378308662701e-14 * fConst0);
		fConst97 = (((((-2.4569108774869299e-13 - fConst96) * fConst0) + 1.6200511205925999e-12) * fConst0) + 2.4983680659320201e-12);
		fConst98 = (((((fConst96 + -2.4569108774869299e-13) * fConst0) + -1.6200511205925999e-12) * fConst0) + 2.4983680659320201e-12);
		fConst99 = (((((2.4569108774869299e-13 - fConst2) * fConst0) + -1.6200511205925999e-12) * fConst0) + 8.3278935531067195e-13);
		fConst100 = (4.9815364499333005e-13 * fConst0);
		fConst101 = (-6.2690930707081606e-14 - fConst100);
		fConst102 = (fConst100 + -6.2690930707081606e-14);
		fConst103 = (6.2690930707081606e-14 - fConst5);
		
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
			fRec3[l1] = 0.0;
			
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			fRec5[l2] = 0.0;
			
		}
		for (int l3 = 0; (l3 < 4); l3 = (l3 + 1)) {
			fRec4[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec6[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 5); l5 = (l5 + 1)) {
			fRec2[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec7[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 4); l7 = (l7 + 1)) {
			fRec1[l7] = 0.0;
			
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
		ui_interface->openVerticalBox("vox_ac30_brilliant");
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
			fRec3[0] = (fSlow1 + (0.999 * fRec3[1]));
			fRec5[0] = (fSlow2 + (0.999 * fRec5[1]));
			double fTemp0 = ((fConst0 * (fConst22 + (fRec3[0] * (fConst23 + (fConst24 * fRec3[0]))))) + 6.6083492055786196e-06);
			fRec4[0] = ((0.13 * (fRec5[0] * double(input0[i]))) - ((((fRec4[1] * ((fConst0 * (fConst8 + (fRec3[0] * (fConst10 + (fConst12 * fRec3[0]))))) + 1.98250476167359e-05)) + (fRec4[2] * ((fConst0 * (fConst13 + (fRec3[0] * (fConst14 + (fConst15 * fRec3[0]))))) + 1.98250476167359e-05))) + (fRec4[3] * ((fConst0 * (fConst17 + (fRec3[0] * (fConst19 + (fConst21 * fRec3[0]))))) + 6.6083492055786196e-06))) / fTemp0));
			double fTemp1 = (fConst0 * ((fRec3[0] * ((((fRec4[0] * (fConst26 + (fConst27 * fRec3[0]))) + (fRec4[1] * (fConst29 + (fConst30 * fRec3[0])))) + (fRec4[2] * (fConst31 + (fConst32 * fRec3[0])))) + (fRec4[3] * (fConst33 + (fConst34 * fRec3[0]))))) / fTemp0));
			fRec6[0] = (fSlow3 + (0.999 * fRec6[1]));
			double fTemp2 = (fConst53 + ((fRec6[0] * ((fConst0 * (fConst54 + (fConst55 * fRec6[0]))) + -8.6443832551698297e-10)) + 8.7308270877215204e-10));
			fRec2[0] = ((0.074999999999999997 * (int(signbit(double(fTemp1)))?double(s01_stage1_negclip(double(fTemp1))):double(s01_stage1clip(double(fTemp1))))) - (((((fRec2[1] * (fConst36 + ((fRec6[0] * ((fConst0 * (fConst38 + (fConst40 * fRec6[0]))) + -3.4577533020679298e-09)) + 3.4923308350886098e-09))) + (fRec2[2] * (((fRec6[0] * ((fConst1 * (fConst41 + (fConst42 * fRec6[0]))) + -5.1866299531018999e-09)) + 5.2384962526329098e-09) - fConst43))) + (fRec2[3] * (fConst44 + ((fRec6[0] * ((fConst0 * (fConst45 + (fConst46 * fRec6[0]))) + -3.4577533020679298e-09)) + 3.4923308350886098e-09)))) + (fRec2[4] * (fConst48 + ((fRec6[0] * ((fConst0 * (fConst50 + (fConst52 * fRec6[0]))) + -8.6443832551698297e-10)) + 8.7308270877215204e-10)))) / fTemp2));
			fRec7[0] = (fSlow4 + (0.999 * fRec7[1]));
			double fTemp3 = (fConst0 * ((((((fRec2[0] * (fConst57 + ((fRec6[0] * (fConst59 + ((fRec6[0] * (fConst60 + (fConst62 * fRec7[0]))) + (fConst64 * fRec7[0])))) + (fConst66 * fRec7[0])))) + (fRec2[1] * (fConst68 + ((fRec6[0] * (fConst70 + ((fRec6[0] * (fConst71 + (fConst73 * fRec7[0]))) + (fConst75 * fRec7[0])))) + (fConst77 * fRec7[0]))))) + (fConst0 * (fRec2[2] * (((fRec6[0] * (fConst79 + ((fRec6[0] * (fConst80 + (fConst81 * fRec7[0]))) + (fConst82 * fRec7[0])))) + (3.6160817853830401e-13 * fRec7[0])) + 2.96521932685359e-12)))) + (fRec2[3] * (fConst83 + ((fRec6[0] * (fConst84 + ((fRec6[0] * (fConst85 + (fConst86 * fRec7[0]))) + (fConst87 * fRec7[0])))) + (fConst88 * fRec7[0]))))) + (fRec2[4] * (fConst89 + ((fRec6[0] * (fConst90 + ((fRec6[0] * (fConst91 + (fConst92 * fRec7[0]))) + (fConst93 * fRec7[0])))) + (fConst94 * fRec7[0]))))) / fTemp2));
			fRec1[0] = ((0.20499999999999999 * (int(signbit(double(fTemp3)))?double(s02_stage2_negclip(double(fTemp3))):double(s02_stage2clip(double(fTemp3))))) - (fConst95 * (((fConst97 * fRec1[1]) + (fConst98 * fRec1[2])) + (fConst99 * fRec1[3]))));
			double fTemp4 = (fConst4 * ((((fConst6 * fRec1[0]) + (fConst101 * fRec1[1])) + (fConst102 * fRec1[2])) + (fConst103 * fRec1[3])));
			output0[i] = FAUSTFLOAT((fRec0[0] * (int(signbit(double(fTemp4)))?double(s03_stage3_negclip(double(fTemp4))):double(s03_stage3clip(double(fTemp4))))));
			fRec0[1] = fRec0[0];
			fRec3[1] = fRec3[0];
			fRec5[1] = fRec5[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec4[j0] = fRec4[(j0 - 1)];
				
			}
			fRec6[1] = fRec6[0];
			for (int j1 = 4; (j1 > 0); j1 = (j1 - 1)) {
				fRec2[j1] = fRec2[(j1 - 1)];
				
			}
			fRec7[1] = fRec7[0];
			for (int j2 = 3; (j2 > 0); j2 = (j2 - 1)) {
				fRec1[j2] = fRec1[(j2 - 1)];
				
			}
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_vox_ac30_brilliant */

