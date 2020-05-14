#!/usr/bin/make -f
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

# Setup main
COMPANY_ID       = tamgamp.lv2
COMPANY_NAME     = Tamgamp.lv2
COMPANY_URL      = https://github.com/sadko4u/tamgamp.lv2

# Setup paths
BASEDIR          = ${CURDIR}
PREFIX          ?= /usr/local
BINDIR          ?= $(PREFIX)/bin
LV2DIR          ?= $(PREFIX)/lib/lv2
LIBEXT          ?= .so

BUILD_DIR       ?= $(BASEDIR)/.build
SRC_DIR          = $(BASEDIR)/src
INCLUDE_DIR      = $(BASEDIR)/include
RESOURCE_DIR     = $(BASEDIR)/res
LV2TTL_DIR       = $(RESOURCE_DIR)/lv2_ttl

# Binaries
LV2_BUNDLE       = tamgamp.lv2
LV2_BINARY       = tamgamp-lv2$(LIBEXT)

# Detect plaftorm and architecture
BLD_PLATFORM     = $(shell uname -s)
BLD_ARCH         = $(shell uname -m)

# Setup tooling
PKG_CONFIG      ?= pkg-config
LD              ?= ld
CC              ?= gcc
CXX             ?= g++
FAUST           ?= faust
INSTALL         ?= install

# External dependencies
HEADERS_LV2      = $(shell $(PKG_CONFIG) --cflags lv2)

# Setup compiler flags
DFL_CFLAGS       = -O2 \
                   -fdata-sections -ffunction-sections -fno-asynchronous-unwind-tables \
                   -pipe -Wall

CXXFLAGS        ?= $(DFL_CFLAGS)
CFLAGS          ?= $(DFL_CFLAGS)
INCLUDE         ?= -I$(INCLUDE_DIR) $(HEADERS_LV2)

# Additional settings
TUNE_TTL         =
ifeq ($(TUBE_TUNING),1)
    CXXFLAGS       += -DTUBE_TUNING
    TUNE_TTL        = $(shell cat res/lv2_ttl/tune.ttl | sed -E 's/([\\\/\"])/\\\1/g')
endif

# LV2 TTL files
TTL_TEMPLATES    = \
    manifest.ttl \
    tamgamp.ttl \
    tamgamp_gx.ttl

BASEDIR_SED      = $(shell echo "$(BASEDIR)" | sed "s/\\//\\\\\//g")
COMPANY_URL_SED  = $(shell echo "$(COMPANY_URL)" | sed "s/\\//\\\\\//g")
TTL_SED_VARS     = \
    s/@COMPANY_ID@/$(COMPANY_ID)/g;\
    s/@COMPANY_NAME@/$(COMPANY_NAME)/g;\
    s/@COMPANY_URL@/$(COMPANY_URL_SED)/g;\
    s/@LV2_BINARY@/$(LV2_BINARY)/g; \
    s/@TUNE@/$(TUNE_TTL)/g;

TTL_FILES        = $(addprefix $(BUILD_DIR)/ttl/,$(TTL_TEMPLATES))

# Export variables
export LD
export CC
export CXX
export FAUST
export CXXFLAGS
export CFLAGS
export INCLUDE
export INCLUDE_DIR
export PKG_CONFIG
export BASEDIR
export BASEDIR_SED
export INSTALL

# Build targets
.DEFAULT_GOAL   := all
.PHONY: deps all compile clean ttl install uninstall codegen srcgen

all: compile ttl

compile:
	@echo "Building source"
	mkdir -p $(BUILD_DIR)/src
	$(MAKE) -C src all BUILD_DIR=$(BUILD_DIR)/src BUILD_FILE=$(BUILD_DIR)/$(LV2_BINARY)
	@echo "Build OK"

deps:
	@echo "Building dependencies"
	$(MAKE) -C src deps BUILD_DIR=$(BUILD_DIR)/src
	@echo "Build dependencies OK"

srcgen: codegen # alias

codegen:
	@echo "Generating code"
	$(MAKE) -C src codegen
	$(MAKE) -C src deps BUILD_DIR=$(BUILD_DIR)/src
	@echo "Code generation OK"

$(TTL_FILES):
	@echo "LV2TTL: $(notdir $(@))"
	mkdir -p $(BUILD_DIR)/ttl
	sed "$(TTL_SED_VARS)" $(LV2TTL_DIR)/$(notdir $(@)) > $(@)

ttl: compile $(TTL_FILES)

clean:
	@echo "Cleaning build files"
	-rm -rf $(BUILD_DIR)
	@echo "Clean OK"

install: all
	@echo "Installing LV2 plugins to $(DESTDIR)$(LV2DIR)/$(LV2_BUNDLE)"
	mkdir -p $(DESTDIR)$(LV2DIR)/$(LV2_BUNDLE)
	$(INSTALL) $(BUILD_DIR)/$(LV2_BINARY) $(DESTDIR)$(LV2DIR)/$(LV2_BUNDLE)
	cp $(TTL_FILES) $(DESTDIR)$(LV2DIR)/$(LV2_BUNDLE)/
	@echo "Install OK"

uninstall:
	@echo "Uninstalling plugins from $(DESTDIR)$(LV2DIR)/$(LV2_BUNDLE)"
	-rm -rf $(DESTDIR)$(LV2DIR)/$(LV2_BUNDLE)
	@echo "Uninstall OK"

