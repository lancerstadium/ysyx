
INC = ./vsrc/include
VSRCS = $(shell find $(./vsrc ) -name "*.v")
CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cpp" -or -name "*.cc")
SIMFLAGS = -cc -trace --timing -exe --build
LDFLAGS = -lreadline

FIRST_GOAL := $(firstword $(MAKECMDGOALS))
SECOND_GOAL := $(word 2, $(MAKECMDGOALS))
THIRD_GOAL := $(word 3, $(MAKECMDGOALS))

TB_ITEM := mux21
TB_NAME := $(if $(SECOND_GOAL),$(SECOND_GOAL),top)
TB_CSRC := ./csrc/$(TB_NAME).cpp
TB_EXEC := obj_dir/V$(TB_NAME)
WAVE_NAME := ./$(TB_NAME).vcd

all:
	@echo "Write this Makefile by your self."


build: $(VSRCS)
	@echo "------------------- VERILATE BUILD ---------------------"
	verilator $(SIMFLAGS) \
	--top-module $(TB_NAME) \
	-I$(INC) \
	$(TB_CSRC) \
	$(VSRCS) \
	-LDFLAGS $(LDFLAGS)
	@echo "------------------- VERILATE BUILD DONE ----------------"

sim: build
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "---------------------- SIM RUN -------------------------"
	$(TB_EXEC)
	@echo "---------------------- SIM DONE ------------------------"

wave: sim
	@echo "---------------------- WAVE RUN ------------------------"
	gtkwave $(WAVE_NAME)
	@echo "---------------------- WAVE DONE -----------------------"

clean:
	rm -rf obj_dir
	rm *.vcd


.PHONY: all build sim wave clean $(TB_ITEM)

include ../Makefile
