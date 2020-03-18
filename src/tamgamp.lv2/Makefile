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
BUILD_FILE      ?= $(BUILD_DIR)/tamgamp.lv2.o

rwildcard        = $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))
FILES            = $(call rwildcard, , *.cpp)
OBJFILES         = $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(FILES))
CPP_FILE         = $(@:$(BUILD_DIR)/%.o=%.cpp)

.DEFAULT_GOAL   := all
.PHONY: deps all

all: $(BUILD_FILE)

deps: 
	$(CXX) -MM $(FILES) $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE) > Makefile.deps
	sed -E "s/^(.*\\.o:.*)$$/\\n\\$$\\(BUILD_DIR\\)\\/\\1/g;s/$(BASEDIR_SED)/$$\\(BASEDIR\\)/g" Makefile.deps >Makefile.d
	rm Makefile.deps

$(BUILD_FILE): $(OBJFILES)
	$(LD) -o $(BUILD_FILE) -r $(OBJFILES)

$(OBJFILES):
	mkdir -p $(dir $(@))
	$(CXX) -o $(@) -c $(CPP_FILE) -fPIC $(CPPFLAGS) $(CXXFLAGS) $(INCLUDE)

-include Makefile.d