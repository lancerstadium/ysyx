TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)


# === user def === #
SIMFLAGS = -cc -trace --timing -exe --build

FIRST_GOAL := $(firstword $(MAKECMDGOALS))
SECOND_GOAL := $(word 2, $(MAKECMDGOALS))
THIRD_GOAL := $(word 3, $(MAKECMDGOALS))

TB_ITEM := mux41_2
TB_NAME := $(if $(SECOND_GOAL),$(SECOND_GOAL),top)
TB_CSRC := $(abspath ./ctb/$(TB_NAME).cpp)
TB_EXEC := $(OBJ_DIR)/V$(TB_NAME)
WAVE_NAME := ./$(TB_NAME).vcd
# === user def === #


# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@$^

build: $(VSRCS) $(TB_CSRC)
	@rm -rf $(OBJ_DIR)
	@echo "------------------- VERILATE BUILD ---------------------"
	$(VERILATOR) $(SIMFLAGS) \
		--top-module $(TB_NAME) \
		$(TB_CSRC) $(VSRCS) \
		--Mdir $(OBJ_DIR)
	@echo "------------------- VERILATE BUILD DONE ----------------"

sim: build
	@echo "---------------------- SIM RUN -------------------------"
	$(TB_EXEC)
	@echo "---------------------- SIM DONE ------------------------"

wave: sim
	@echo "---------------------- WAVE RUN ------------------------"
	gtkwave $(WAVE_NAME)
	@echo "---------------------- WAVE DONE -----------------------"

clean:
	rm -rf $(BUILD_DIR)
	rm *.vcd

.PHONY: default all clean run build sim wave $(TB_ITEM)
