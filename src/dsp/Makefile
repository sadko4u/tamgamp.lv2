# This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 3 of the License, or (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public License
# along with this program; if not, write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

BUILD_DIR              ?= .build
BUILD_FILE             ?= $(BUILD_DIR)/dsp.o

# Detect operating system
BUILD_SYSTEM           ?= $(shell uname -s 2>/dev/null || echo "Unknown")

ifndef BUILD_PLATFORM
  TARGET_PLATFORM  = Unknown

  ifeq ($(BUILD_SYSTEM),Windows)
    TARGET_PLATFORM         = Windows
  endif
  ifeq ($(findstring BSD,$(BUILD_SYSTEM)),BSD)
    TARGET_PLATFORM         = BSD
  endif
  ifeq ($(findstring Linux,$(BUILD_SYSTEM)),Linux)
    TARGET_PLATFORM         = Linux
  endif
  ifeq ($(findstring SunOS,$(BUILD_SYSTEM)),SunOS)
    TARGET_PLATFORM         = Solaris
  endif
endif

# Detect processor architecture
ifeq ($(TARGET_PLATFORM),Windows)
  TARGET_ARCH               = i586
  ifeq ($(PROCESSOR_ARCHITECTURE),x86)
    TARGET_ARCH               = i586
  endif
  ifeq ($(PROCESSOR_ARCHITECTURE),AMD64)
    TARGET_ARCH               = x86_64
  endif
else # BUILD_PLATFORM != Windows
  ifndef BUILD_PROFILE
    TARGET_ARCH            ?= $(shell cat "$(OBJDIR)/$(BUILD_PROFILE_FILE)" 2>/dev/null || uname -m)
    ifeq ($(patsubst armv6%,armv6,$(TARGET_ARCH)), armv6)
      TARGET_ARCH           = armv6a
    endif
    ifeq ($(patsubst armv7%,armv7,$(TARGET_ARCH)), armv7)
      TARGET_ARCH           = armv7a
    endif
    ifeq ($(patsubst armv8%,armv8,$(TARGET_ARCH)), armv8)
      TARGET_ARCH           = armv8a
    endif
    ifeq ($(patsubst aarch64%,aarch64,$(TARGET_ARCH)), aarch64)
      TARGET_ARCH           = aarch64
    endif
    ifeq ($(TARGET_ARCH),amd64)
      TARGET_ARCH           = x86_64
    endif
    ifeq ($(TARGET_ARCH),i86pc)
      TARGET_ARCH           = x86_64
    endif
    ifeq ($(patsubst i%86,i586,$(TARGET_ARCH)), i586)
      TARGET_ARCH           = i586
    endif
  endif
endif # BUILD_PLATFORM != Windows

NATIVE_IMPL             = $(BUILD_DIR)/native.o

X86_IMPL                = $(BUILD_DIR)/x86.o
SSE_IMPL                = $(BUILD_DIR)/sse.o
AVX_IMPL                = $(BUILD_DIR)/avx.o
COMMON_IMPL             = $(BUILD_DIR)/common.o
ARM_IMPL                = $(BUILD_DIR)/arm.o
AARCH64_IMPL            = $(BUILD_DIR)/aarch64.o

X86_DEPS                = x86.cpp
SSE_DEPS                = sse.cpp
AVX_DEPS                = avx.cpp
COMMON_DEPS             = common.cpp
ARM_DEPS                = arm.cpp
AARCH64_DEPS            = aarch64.cpp

SSE_INSTR_SET           = -mmmx -m3dnow -msse
AVX_INSTR_SET           = -mavx -mvzeroupper

FILE                    = $(@:$(OBJDIR)/%.o=%.cpp)
LINK_OBJECTS            = $(COMMON_IMPL) $(NATIVE_IMPL)

# Build different DSP modules dependent on architecture
ifeq ($(TARGET_ARCH), i586)
  LINK_OBJECTS           += $(X86_IMPL) $(SSE_IMPL) $(AVX_IMPL)
endif
ifeq ($(TARGET_ARCH), x86_64)
  LINK_OBJECTS           += $(X86_IMPL) $(SSE_IMPL) $(AVX_IMPL)
endif
ifeq ($(TARGET_PLATFORM), BSD)
  ifeq ($(TARGET_ARCH), arm)
    LINK_OBJECTS           += $(ARM_IMPL)
  endif
endif
ifeq ($(TARGET_ARCH), armv7a)
  LINK_OBJECTS           += $(ARM_IMPL)
endif
ifeq ($(TARGET_ARCH), armv7ve)
  LINK_OBJECTS           += $(ARM_IMPL)
endif
ifeq ($(TARGET_ARCH), arm32)
  LINK_OBJECTS           += $(ARM_IMPL)
endif
ifeq ($(TARGET_ARCH), aarch64)
  LINK_OBJECTS           += $(AARCH64_IMPL)
endif

LINK_DEPS              = $(patsubst %,%.dep,$(LINK_OBJECTS))
DEPFILE                = $(patsubst $(BUILD_DIR)/%.o.dep,%.cpp,$(@))
FILE                   = $(patsubst $(BUILD_DIR)/%.o,%.cpp,$(@))

.DEFAULT_GOAL   := all
.PHONY: all target

# Build
all: $(BUILD_FILE)

$(BUILD_FILE): $(LINK_OBJECTS)
	$(LD) -o $(BUILD_FILE) -r $(MERGE_FLAGS) $(LINK_OBJECTS)

$(COMMON_IMPL) $(NATIVE_IMPL) $(X86_IMPL) $(ARM_IMPL) $(AARCH64_IMPL):
	$(CXX) -o $(@) -c $(FILE) -fPIC $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE) 

$(SSE_IMPL):
	$(CXX) -o $(@) -c $(FILE) -fPIC $(CPPFLAGS) $(CXXFLAGS) $(SSE_INSTR_SET) $(INCLUDE)
	
$(AVX_IMPL):
	$(CXX) -o $(@) -c $(FILE) -fPIC $(CPPFLAGS) $(CXXFLAGS) $(AVX_INSTR_SET) $(INCLUDE)

# Automatic dependencies
deps: $(LINK_DEPS)
	cat $(LINK_DEPS) > Makefile.deps
	-rm -f $(LINK_DEPS)
	sed -E "s/^(.*\\.o:.*)$$/\\n\\$$\\(BUILD_DIR\\)\\/\\1/g;s/$(BASEDIR_SED)/$$\\(BASEDIR\\)/g" Makefile.deps >Makefile.d
	rm Makefile.deps

$(COMMON_IMPL).dep $(NATIVE_IMPL).dep $(X86_IMPL).dep $(ARM_IMPL).dep $(AARCH64_IMPL).dep:
	$(CXX) -MM $(DEPFILE) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE) >$(@)
	
$(SSE_IMPL).dep:
	$(CXX) -MM $(SSE_DEPS) $(CPPFLAGS) $(CXXFLAGS) $(SSE_INSTR_SET) $(INCLUDE) >$(@)
	
$(AVX_IMPL).dep:
	$(CXX) -MM $(AVX_DEPS) $(CPPFLAGS) $(CXXFLAGS) $(AVX_INSTR_SET) $(INCLUDE) >$(@)

# Dependencies
$(X86_IMPL): $(X86_DEPS)

$(SSE_IMPL): $(SSE_DEPS)

$(AVX_IMPL): $(AVX_DEPS)

$(COMMON_IMPL): $(COMMON_DEPS)

$(ARM_IMPL): $(ARM_DEPS)

$(AARCH64_IMPL): $(AARCH64_DEPS)

-include Makefile.d

