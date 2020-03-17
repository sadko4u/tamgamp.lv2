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

BUILD_DIR       ?= .build
BUILD_FILE      ?= $(BUILD_DIR)/src.o

SUBDIRS          = tamgamp.lv2 resources dsp
GENERATED        = faust
SUBDIR_OBJS      = $(patsubst %, $(BUILD_DIR)/%.o, $(SUBDIRS))
SUBDIR_DEPS      = $(patsubst %, %.deps, $(SUBDIRS))
FILES            = $(wildcard *.cpp)
OBJFILES         = $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(FILES))
CPP_FILE         = $(@:$(BUILD_DIR)/%.o=%.cpp)
SUB_DIR          = $(@:$(BUILD_DIR)/%.o=%)
EXTERNAL_LIBS    = -lzita-resampler

.DEFAULT_GOAL   := all
.PHONY: deps all codegen $(SUBDIRS) $(SUBDIR_DEPS) $(GENERATED)

all: $(BUILD_FILE)

deps: $(SUBDIR_DEPS)
	$(CXX) -MM -MF Makefile.deps $(FILES) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE)
	sed -E "s/^(.*\\.o:.*)$$/\\$$\\(BUILD_DIR\\)\\/\\1/g;s/$(BASEDIR_SED)/$$\\(BASEDIR\\)/g" Makefile.deps >Makefile.d
	rm Makefile.deps

codegen: $(GENERATED)

$(SUBDIR_DEPS):
	mkdir -p $(BUILD_DIR)/$(patsubst %.deps,%,$(@))
	make -C $(patsubst %.deps,%,$(@)) BUILD_DIR=$(BUILD_DIR)/$(patsubst %.deps,%,$(@)) deps 

$(BUILD_FILE): $(SUBDIRS) $(OBJFILES)
	$(CXX) -o $(BUILD_FILE) -shared -fPIC $(SUBDIR_OBJS) $(OBJFILES) $(EXTERNAL_LIBS)

$(SUBDIRS):
	mkdir -p $(BUILD_DIR)/$(@)
	make -C $(@) all BUILD_DIR=$(BUILD_DIR)/$(@) BUILD_FILE=$(BUILD_DIR)/$(@).o

$(GENERATED):
	make -C $(@) all BUILD_DIR=$(INCLUDE_DIR)/generated

$(OBJFILES): $(patsubst $(BUILD_DIR)/%.o, %.cpp, $(@))
	mkdir -p $(dir $(@))
	$(CXX) -o $(@) -c $(CPP_FILE) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE)

-include Makefile.d
