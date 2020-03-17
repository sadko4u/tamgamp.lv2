namespace ampsim_mesa_dc3_rhythm {

#include <generated/stage/mesa_dc3_rhythm/c01_stage1_neg_table.h>
#include <generated/stage/mesa_dc3_rhythm/c01_stage1_table.h>
#include <generated/stage/mesa_dc3_rhythm/c03_stage2_neg_table.h>
#include <generated/stage/mesa_dc3_rhythm/c03_stage2_table.h>
#include <generated/stage/mesa_dc3_rhythm/c04_stage3_neg_table.h>
#include <generated/stage/mesa_dc3_rhythm/c04_stage3_table.h>
#include <generated/stage/mesa_dc3_rhythm/c05_stage4_neg_table.h>
#include <generated/stage/mesa_dc3_rhythm/c05_stage4_table.h>
/* ------------------------------------------------------------
name: "mesa_dc3_rhythm"
Code generated with Faust 2.15.11 (https://faust.grame.fr)
Compilation options: cpp, -double -ftz 0
------------------------------------------------------------ */



/* link with : "" */

static double module_faustpower2_f(double value) {
	return (value * value);
	
}
static double module_faustpower3_f(double value) {
	return ((value * value) * value);
	
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
	FAUSTFLOAT fVslider1;
	double fRec2[2];
	double fConst12;
	double fConst13;
	FAUSTFLOAT fVslider2;
	double fRec4[2];
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	FAUSTFLOAT fVslider3;
	double fRec8[2];
	double fConst18;
	double fConst19;
	double fConst20;
	double fRec7[3];
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	FAUSTFLOAT fVslider4;
	double fRec9[2];
	FAUSTFLOAT fVslider5;
	double fRec10[2];
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
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fRec6[4];
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	FAUSTFLOAT fVslider6;
	double fRec11[2];
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
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
	double fRec5[4];
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
	double fRec3[4];
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fRec1[3];
	double fConst95;
	double fConst96;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.1");
		m->declare("filename", "mesa_dc3_rhythm");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("id", "mesa_dc3_rhythm");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "mesa_dc3_rhythm");
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
		fConst1 = (4.60626343739698e-10 * fConst0);
		fConst2 = (3.1926925652929403e-11 * fConst0);
		fConst3 = (6.6381515120430502e-11 * fConst0);
		fConst4 = ((((fConst1 + 3.1538915146385902e-07) + ((-4.2330213938630297e-08 - fConst2) + (-3.3320827196341303e-08 - fConst3))) * fConst0) + 7.7984914714842852e-06);
		fConst5 = (fConst0 / fConst4);
		fConst6 = (4.43030830836957e-10 * fConst0);
		fConst7 = (1.4176986586782601e-09 * fConst0);
		fConst8 = ((fConst6 + 1.4767694361232e-07) + (-4.7256621955942301e-07 - fConst7));
		fConst9 = (3.6431378597283801e-15 * fConst0);
		fConst10 = (((((fConst9 + 2.5884168432942998e-10) * fConst0) + 1.51395602310821e-08) * fConst0) + 1.5823081918317899e-07);
		fConst11 = (fConst0 / fConst10);
		fConst12 = (2.8565561119986902e-10 * fConst0);
		fConst13 = (-6.3479024711082301e-09 - fConst12);
		fConst14 = (4.2153293769735299e-10 * fConst0);
		fConst15 = (1.0 / (((fConst14 + 5.9768182392538999e-07) * fConst0) + 9.9383996878851298e-05));
		fConst16 = (6.6579105648900397e-09 * fConst0);
		fConst17 = (((-1.30019802277314e-05 - fConst16) * fConst0) + -0.00124540040495512);
		fConst18 = module_faustpower2_f(fConst0);
		fConst19 = (0.000198767993757703 - (8.4306587539470701e-10 * fConst18));
		fConst20 = (((fConst14 + -5.9768182392538999e-07) * fConst0) + 9.9383996878851298e-05);
		fConst21 = ((1.3315821129780099e-08 * fConst18) + -0.00249080080991024);
		fConst22 = (((1.30019802277314e-05 - fConst16) * fConst0) + -0.00124540040495512);
		fConst23 = (8.5675714624127499e-13 * fConst0);
		fConst24 = (6.8734847696182099e-09 - fConst23);
		fConst25 = (4.1089373340142797e-14 * fConst0);
		fConst26 = (((-1.11399799371023e-10 - fConst25) * fConst0) + 7.7904674748923196e-09);
		fConst27 = (2.2846857233100701e-13 * fConst0);
		fConst28 = (1.1442856216238299e-09 - fConst27);
		fConst29 = (1.09571662240381e-14 * fConst0);
		fConst30 = ((-1.8307598565996999e-11 - fConst29) * fConst0);
		fConst31 = (-6.8734847696182099e-09 - fConst23);
		fConst32 = (((fConst25 + -1.11399799371023e-10) * fConst0) + -7.7904674748923196e-09);
		fConst33 = (-1.1442856216238299e-09 - fConst27);
		fConst34 = ((fConst29 + -1.8307598565996999e-11) * fConst0);
		fConst35 = (fConst23 + -6.8734847696182099e-09);
		fConst36 = (1.36964577800476e-14 * fConst0);
		fConst37 = (((1.11399799371023e-10 - fConst36) * fConst0) + -7.7904674748923196e-09);
		fConst38 = (fConst27 + -1.1442856216238299e-09);
		fConst39 = (3.6523887413460298e-15 * fConst0);
		fConst40 = ((1.8307598565996999e-11 - fConst39) * fConst0);
		fConst41 = (fConst23 + 6.8734847696182099e-09);
		fConst42 = (((fConst36 + 1.11399799371023e-10) * fConst0) + 7.7904674748923196e-09);
		fConst43 = (fConst27 + 1.1442856216238299e-09);
		fConst44 = ((fConst39 + 1.8307598565996999e-11) * fConst0);
		fConst45 = (1.8281371306418099e-12 * fConst0);
		fConst46 = ((7.7904674748923196e-09 - fConst45) * fConst0);
		fConst47 = module_faustpower3_f(fConst0);
		fConst48 = (0.0 - (4.1089373340142797e-14 * fConst47));
		fConst49 = (1.9427599688010801e-11 - fConst23);
		fConst50 = (fConst45 + 7.7904674748923196e-09);
		fConst51 = (1.36964577800476e-14 * fConst18);
		fConst52 = (fConst23 + 1.9427599688010801e-11);
		fConst53 = (-7.7904674748923196e-09 - fConst45);
		fConst54 = (4.1089373340142797e-14 * fConst18);
		fConst55 = (-1.9427599688010801e-11 - fConst23);
		fConst56 = ((fConst45 + -7.7904674748923196e-09) * fConst0);
		fConst57 = (0.0 - (1.36964577800476e-14 * fConst47));
		fConst58 = (fConst23 + -1.9427599688010801e-11);
		fConst59 = (3.94868325956556e-11 * fConst0);
		fConst60 = (6.5431831303012202e-08 - fConst59);
		fConst61 = (8.7660768362355295e-14 * fConst0);
		fConst62 = (((-1.6807662363591301e-10 - fConst61) * fConst0) + 9.7639172798726295e-08);
		fConst63 = (((fConst61 + 1.6807662363591301e-10) * fConst0) + -9.7639172798726295e-08);
		fConst64 = (-6.5431831303012202e-08 - fConst59);
		fConst65 = (((fConst61 + -1.6807662363591301e-10) * fConst0) + -9.7639172798726295e-08);
		fConst66 = (((1.6807662363591301e-10 - fConst61) * fConst0) + 9.7639172798726295e-08);
		fConst67 = (fConst59 + -6.5431831303012202e-08);
		fConst68 = (2.9220256120785098e-14 * fConst0);
		fConst69 = (((1.6807662363591301e-10 - fConst68) * fConst0) + -9.7639172798726295e-08);
		fConst70 = (((fConst68 + -1.6807662363591301e-10) * fConst0) + 9.7639172798726295e-08);
		fConst71 = (fConst59 + 6.5431831303012202e-08);
		fConst72 = (((fConst68 + 1.6807662363591301e-10) * fConst0) + 9.7639172798726295e-08);
		fConst73 = (((-1.6807662363591301e-10 - fConst68) * fConst0) + -9.7639172798726295e-08);
		fConst74 = (5.6546586028651501e-13 * fConst0);
		fConst75 = (((-2.9284810952096202e-09 - fConst74) * fConst0) + -2.5064160901338799e-06);
		fConst76 = (((fConst74 + 5.72373344015806e-10) * fConst0) + 1.21527156734691e-07);
		fConst77 = (1.6963975808595501e-12 * fConst0);
		fConst78 = (((fConst77 + 2.9284810952096202e-09) * fConst0) + -2.5064160901338799e-06);
		fConst79 = (((-5.72373344015806e-10 - fConst77) * fConst0) + 1.21527156734691e-07);
		fConst80 = (((2.9284810952096202e-09 - fConst77) * fConst0) + 2.5064160901338799e-06);
		fConst81 = (((fConst77 + -5.72373344015806e-10) * fConst0) + -1.21527156734691e-07);
		fConst82 = (((fConst74 + -2.9284810952096202e-09) * fConst0) + 2.5064160901338799e-06);
		fConst83 = (((5.72373344015806e-10 - fConst74) * fConst0) + -1.21527156734691e-07);
		fConst84 = (1.0 / fConst10);
		fConst85 = (1.09294135791852e-14 * fConst0);
		fConst86 = (((((-2.5884168432942998e-10 - fConst85) * fConst0) + 1.51395602310821e-08) * fConst0) + 4.7469245754953702e-07);
		fConst87 = (((((fConst85 + -2.5884168432942998e-10) * fConst0) + -1.51395602310821e-08) * fConst0) + 4.7469245754953702e-07);
		fConst88 = (((((2.5884168432942998e-10 - fConst9) * fConst0) + -1.51395602310821e-08) * fConst0) + 1.5823081918317899e-07);
		fConst89 = (fConst12 + -6.3479024711082301e-09);
		fConst90 = (fConst12 + 6.3479024711082301e-09);
		fConst91 = (6.3479024711082301e-09 - fConst12);
		fConst92 = (1.0 / fConst4);
		fConst93 = (1.5596982942968472e-05 - (7.2463580593267625e-10 * fConst18));
		fConst94 = ((((fConst1 + -3.1538915146385902e-07) + ((4.2330213938630297e-08 - fConst2) + (3.3320827196341303e-08 - fConst3))) * fConst0) + 7.7984914714842852e-06);
		fConst95 = (1.949335655682606e-09 * fConst0);
		fConst96 = ((fConst6 + -1.4767694361232e-07) + (4.7256621955942301e-07 - fConst7));
		
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(1.0);
		fVslider1 = FAUSTFLOAT(0.5);
		fVslider2 = FAUSTFLOAT(0.5);
		fVslider3 = FAUSTFLOAT(1.0);
		fVslider4 = FAUSTFLOAT(0.5);
		fVslider5 = FAUSTFLOAT(0.5);
		fVslider6 = FAUSTFLOAT(0.5);
		
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
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec8[l3] = 0.0;
			
		}
		for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) {
			fRec7[l4] = 0.0;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec9[l5] = 0.0;
			
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec10[l6] = 0.0;
			
		}
		for (int l7 = 0; (l7 < 4); l7 = (l7 + 1)) {
			fRec6[l7] = 0.0;
			
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec11[l8] = 0.0;
			
		}
		for (int l9 = 0; (l9 < 4); l9 = (l9 + 1)) {
			fRec5[l9] = 0.0;
			
		}
		for (int l10 = 0; (l10 < 4); l10 = (l10 + 1)) {
			fRec3[l10] = 0.0;
			
		}
		for (int l11 = 0; (l11 < 3); l11 = (l11 + 1)) {
			fRec1[l11] = 0.0;
			
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
		ui_interface->openVerticalBox("mesa_dc3_rhythm");
		ui_interface->addVerticalSlider(".amp.bass", &fVslider4, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.gain", &fVslider2, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.master", &fVslider1, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.middle", &fVslider5, 0.5, 0.0, 1.0, 0.01);
		ui_interface->addVerticalSlider(".amp.postgain", &fVslider0, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.pregain", &fVslider3, 1.0, 0.00398, 251.18861000000001, 0.0001);
		ui_interface->addVerticalSlider(".amp.treble", &fVslider6, 0.5, 0.0, 1.0, 0.01);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		double fSlow0 = (0.0010000000000000009 * double(fVslider0));
		double fSlow1 = (0.0010000000000000009 * double(fVslider1));
		double fSlow2 = (5.2395696491255995e-05 * (std::exp((3.0 * double(fVslider2))) + -1.0));
		double fSlow3 = (0.0010000000000000009 * double(fVslider3));
		double fSlow4 = (0.0010000000000000009 * double(fVslider4));
		double fSlow5 = (0.0010000000000000009 * double(fVslider5));
		double fSlow6 = (0.0010000000000000009 * double(fVslider6));
		for (int i = 0; (i < count); i = (i + 1)) {
			fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
			fRec2[0] = (fSlow1 + (0.999 * fRec2[1]));
			fRec4[0] = (fSlow2 + (0.999 * fRec4[1]));
			fRec8[0] = (fSlow3 + (0.999 * fRec8[1]));
			fRec7[0] = ((0.050000000000000003 * (fRec8[0] * double(input0[i]))) - (fConst15 * ((fConst19 * fRec7[1]) + (fConst20 * fRec7[2]))));
			double fTemp0 = (fConst15 * (((fConst17 * fRec7[0]) + (fConst21 * fRec7[1])) + (fConst22 * fRec7[2])));
			fRec9[0] = (fSlow4 + (0.999 * fRec9[1]));
			fRec10[0] = (fSlow5 + (0.999 * fRec10[1]));
			double fTemp1 = (fRec10[0] * (fConst28 + (fConst30 * fRec9[0])));
			double fTemp2 = (fRec10[0] * (fConst33 + (fConst34 * fRec9[0])));
			double fTemp3 = (fRec10[0] * (fConst38 + (fConst40 * fRec9[0])));
			double fTemp4 = (fRec10[0] * (fConst43 + (fConst44 * fRec9[0])));
			double fTemp5 = ((fConst0 * ((fConst41 + (fConst42 * fRec9[0])) + fTemp4)) + 1.5542079750408599e-07);
			fRec6[0] = ((int(signbit(double(fTemp0)))?double(c01_stage1_negclip(double(fTemp0))):double(c01_stage1clip(double(fTemp0)))) - ((((fRec6[1] * ((fConst0 * ((fConst24 + (fConst26 * fRec9[0])) + fTemp1)) + 4.6626239251225899e-07)) + (fRec6[2] * ((fConst0 * ((fConst31 + (fConst32 * fRec9[0])) + fTemp2)) + 4.6626239251225899e-07))) + (fRec6[3] * ((fConst0 * ((fConst35 + (fConst37 * fRec9[0])) + fTemp3)) + 1.5542079750408599e-07))) / fTemp5));
			fRec11[0] = (fSlow6 + (0.999 * fRec11[1]));
			double fTemp6 = ((fConst0 * (fConst71 + (fRec4[0] * (fConst72 + (fConst73 * fRec4[0]))))) + 1.61632817279244e-05);
			fRec5[0] = ((7.6500000000000004 * (((((fRec6[1] * ((fRec9[0] * (fConst46 + (fConst48 * fRec11[0]))) + (fConst0 * (fTemp1 + (fConst49 * fRec11[0]))))) + (fConst0 * (fRec6[0] * (fTemp4 + ((fRec9[0] * (fConst50 + (fConst51 * fRec11[0]))) + (fConst52 * fRec11[0])))))) + (fConst0 * (fRec6[2] * (fTemp2 + ((fRec9[0] * (fConst53 + (fConst54 * fRec11[0]))) + (fConst55 * fRec11[0])))))) + (fRec6[3] * ((fRec9[0] * (fConst56 + (fConst57 * fRec11[0]))) + (fConst0 * (fTemp3 + (fConst58 * fRec11[0])))))) / fTemp5)) - ((((fRec5[1] * ((fConst0 * (fConst60 + (fRec4[0] * (fConst62 + (fConst63 * fRec4[0]))))) + 4.8489845183773198e-05)) + (fRec5[2] * ((fConst0 * (fConst64 + (fRec4[0] * (fConst65 + (fConst66 * fRec4[0]))))) + 4.8489845183773198e-05))) + (fRec5[3] * ((fConst0 * (fConst67 + (fRec4[0] * (fConst69 + (fConst70 * fRec4[0]))))) + 1.61632817279244e-05))) / fTemp6));
			double fTemp7 = ((fRec4[0] * ((((fRec5[0] * ((fConst0 * (fConst75 + (fConst76 * fRec4[0]))) + -0.000506363153061214)) + (fRec5[1] * ((fConst0 * (fConst78 + (fConst79 * fRec4[0]))) + -0.0015190894591836401))) + (fRec5[2] * ((fConst0 * (fConst80 + (fConst81 * fRec4[0]))) + -0.0015190894591836401))) + (fRec5[3] * ((fConst0 * (fConst82 + (fConst83 * fRec4[0]))) + -0.000506363153061214)))) / fTemp6);
			fRec3[0] = ((8.0999999999999996 * (int(signbit(double(fTemp7)))?double(c03_stage2_negclip(double(fTemp7))):double(c03_stage2clip(double(fTemp7))))) - (fConst84 * (((fConst86 * fRec3[1]) + (fConst87 * fRec3[2])) + (fConst88 * fRec3[3]))));
			double fTemp8 = (fConst11 * (fRec2[0] * ((((fConst13 * fRec3[0]) + (fConst89 * fRec3[1])) + (fConst90 * fRec3[2])) + (fConst91 * fRec3[3]))));
			fRec1[0] = ((5.2699999999999996 * (int(signbit(double(fTemp8)))?double(c04_stage3_negclip(double(fTemp8))):double(c04_stage3clip(double(fTemp8))))) - (fConst92 * ((fConst93 * fRec1[1]) + (fConst94 * fRec1[2]))));
			double fTemp9 = (fConst5 * (((fConst8 * fRec1[0]) + (fConst95 * fRec1[1])) + (fConst96 * fRec1[2])));
			output0[i] = FAUSTFLOAT((1.8600000000000001 * (fRec0[0] * (int(signbit(double(fTemp9)))?double(c05_stage4_negclip(double(fTemp9))):double(c05_stage4clip(double(fTemp9)))))));
			fRec0[1] = fRec0[0];
			fRec2[1] = fRec2[0];
			fRec4[1] = fRec4[0];
			fRec8[1] = fRec8[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec9[1] = fRec9[0];
			fRec10[1] = fRec10[0];
			for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
				fRec6[j0] = fRec6[(j0 - 1)];
				
			}
			fRec11[1] = fRec11[0];
			for (int j1 = 3; (j1 > 0); j1 = (j1 - 1)) {
				fRec5[j1] = fRec5[(j1 - 1)];
				
			}
			for (int j2 = 3; (j2 > 0); j2 = (j2 - 1)) {
				fRec3[j2] = fRec3[(j2 - 1)];
				
			}
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			
		}
		
	}

};


dsp *instantiate()
{
    return new module();
}
} /* namespace ampsim_mesa_dc3_rhythm */

