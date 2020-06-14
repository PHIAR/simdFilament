GYB := python Templates/gyb.py --line-directive ''
TEMPLATES := $(shell find Templates -type f -name '*.gyb')
TARGETS := $(patsubst Templates/%.gyb,Sources/%,$(TEMPLATES))

build: $(TARGETS)
	swift build

test: $(TARGETS)
	swift test

generate: $(TARGETS)

.PHONY: build test

Sources/%: Templates/%.gyb
	$(GYB) $< > $@
