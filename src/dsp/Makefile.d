
$(BUILD_DIR)/common.o: common.cpp $(BASEDIR)/include/dsp/dsp.h \
 $(BASEDIR)/include/dsp/common/types.h \
 $(BASEDIR)/include/dsp/common/context.h

$(BUILD_DIR)/native.o: native.cpp $(BASEDIR)/include/dsp/dsp.h \
 $(BASEDIR)/include/dsp/common/types.h \
 $(BASEDIR)/include/dsp/common/context.h

$(BUILD_DIR)/x86.o: x86.cpp $(BASEDIR)/include/dsp/dsp.h \
 $(BASEDIR)/include/dsp/common/types.h \
 $(BASEDIR)/include/dsp/common/context.h \
 $(BASEDIR)/include/dsp/arch/x86/features.h \
 $(BASEDIR)/include/dsp/arch/x86/cpuid.h \
 $(BASEDIR)/include/dsp/arch/x86/fpu.h

$(BUILD_DIR)/sse.o: sse.cpp $(BASEDIR)/include/dsp/dsp.h \
 $(BASEDIR)/include/dsp/common/types.h \
 $(BASEDIR)/include/dsp/common/context.h \
 $(BASEDIR)/include/dsp/arch/x86/features.h \
 $(BASEDIR)/include/dsp/arch/x86/sse/mxcsr.h

$(BUILD_DIR)/avx.o: avx.cpp $(BASEDIR)/include/dsp/dsp.h \
 $(BASEDIR)/include/dsp/common/types.h \
 $(BASEDIR)/include/dsp/common/context.h \
 $(BASEDIR)/include/dsp/arch/x86/features.h \
 $(BASEDIR)/include/dsp/arch/x86/avx/xcr.h
