
$(BUILD_DIR)/Crossfade.o: util/Crossfade.cpp \
 util/../../../include/tamgamp.lv2/util/Crossfade.h

$(BUILD_DIR)/Bypass.o: util/Bypass.cpp util/../../../include/tamgamp.lv2/util/Bypass.h

$(BUILD_DIR)/tamgamp_gx.o: tamgamp_gx.cpp ../../include/tamgamp.lv2/tamgamp_gx.h \
 $(BASEDIR)/include/resources/faust.h \
 ../../include/tamgamp.lv2/../tamgamp.lv2/util/Bypass.h \
 ../../include/tamgamp.lv2/../tamgamp.lv2/util/Crossfade.h \
 $(BASEDIR)/include/dsp/dsp.h \
 $(BASEDIR)/include/dsp/common/types.h \
 $(BASEDIR)/include/dsp/common/context.h \
 $(BASEDIR)/include/resources/gxsim.h \
 $(BASEDIR)/include/resources/tonestack.h \
 ../../include/tamgamp.lv2/debug.h ../../include/tamgamp.lv2/product.h \
 ../../include/tamgamp.lv2/units.h

$(BUILD_DIR)/tamgamp.o: tamgamp.cpp ../../include/tamgamp.lv2/tamgamp.h \
 $(BASEDIR)/include/resources/faust.h \
 ../../include/tamgamp.lv2/../tamgamp.lv2/util/Bypass.h \
 ../../include/tamgamp.lv2/../tamgamp.lv2/util/Crossfade.h \
 $(BASEDIR)/include/dsp/dsp.h \
 $(BASEDIR)/include/dsp/common/types.h \
 $(BASEDIR)/include/dsp/common/context.h \
 $(BASEDIR)/include/resources/ampsim.h \
 ../../include/tamgamp.lv2/debug.h ../../include/tamgamp.lv2/product.h \
 ../../include/tamgamp.lv2/units.h
