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

BUILD_DIR       ?= ../generated

SUBDIRS          = ampsim gxsim tonestack
rwildcard        = $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))
FILES            = $(foreach d, $(SUBDIRS), $(call rwildcard, $d/, *.dsp))
GEN_FILES        = $(patsubst %.dsp, $(BUILD_DIR)/%.h, $(FILES))
DSP_FILE         = $(patsubst $(BUILD_DIR)/%.h, %.dsp, $(@))
CLASS_NAME       = $(subst /,_,$(patsubst $(BUILD_DIR)/%.h,%,$(@)))

.DEFAULT_GOAL   := all
.PHONY: all

all: | clean $(GEN_FILES)

$(GEN_FILES):
	@mkdir -p $(dir $(@))
	$(FAUST) -lang cpp $(DSP_FILE) -double -cn "module" -light -o $(@).tmp
	@printf "namespace $(CLASS_NAME) {\n\n" > $(@)
	@-grep -E '#include "(resources|generated)' $(@).tmp | sed -E "s/\"(.*)\"/<\\1>/" >> $(@)
	@sed -E "/^#(\\w+).*$$/d" $(@).tmp >> $(@)
	@printf "\ndsp *instantiate()\n{\n    return new module();\n}\n} /* namespace $(CLASS_NAME) */\n\n" >> $(@)
	@rm $(@).tmp

clean:
	-rm -rf $(patsubst %, $(BUILD_DIR)/%, $(SUBDIRS))

-include Makefile.d
