#––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
# Simple Makefile for my_tumor
#––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––

BUILD_DIR := build
EXEC      := $(BUILD_DIR)/my_tumor
INPUT     := input.csv
SEED      ?= 1234

.PHONY: all build run clean

all: build

build:
	@echo "→ Configuring & building in $(BUILD_DIR)..."
	mkdir -p $(BUILD_DIR)
	cd    $(BUILD_DIR) && cmake .. && make -j

# Run does NOT depend on build—only rebuild if you explicitly run 'make build'
run:
	@echo "→ Running simulation with $(INPUT), seed=$(SEED)..."
	$(EXEC) $(INPUT) $(SEED)

clean:
	@echo "→ Cleaning build directory and results..."
	rm -rf $(BUILD_DIR) results
