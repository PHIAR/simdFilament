GYB ?= python Templates/gyb.py --line-directive ''
SWIFT_FLAGS ?=

TEMPLATES := $(shell find Templates -type f -name '*.gyb')
TARGETS := $(patsubst Templates/%.gyb,Sources/%,$(TEMPLATES))

build: $(TARGETS)
	swift build $(SWIFT_FLAGS)

test: $(TARGETS)
	swift test $(SWIFT_FLAGS)

generate: $(TARGETS)

.PHONY: build test

Sources/%: Templates/%.gyb
	@echo "// GENERATED FILE, DO NOT EDIT DIRECTLY." > $@
	@echo "// Look for a corresponding gyb file in the Templates directory." >> $@
	@echo >> $@
	$(GYB) $< >> $@
