
INC = ./vsrc/include
VSRCS = $(shell find $(./vsrc ) -name "*.v")
CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cpp" -or -name "*.cc")
SIMFLAGS = -cc -trace --timing -exe --build
LDFLAGS = -lreadline

FIRST_GOAL := $(firstword $(MAKECMDGOALS))
SECOND_GOAL := $(word 2, $(MAKECMDGOALS))
THIRD_GOAL := $(word 3, $(MAKECMDGOALS))

TB_ITEM := floatRec floatDiv procElem convUnit convLayerSingle convLayerMulti exponent
TB_TEMP := ./tmp/testBench.cpp
TB_NAME := $(if $(SECOND_GOAL),$(SECOND_GOAL)TB,top)
TB_EXEC := obj_dir/V$(TB_NAME)
TB_CSRC := ./csrc/$(TB_NAME).cpp
WAVE_NAME := ./$(TB_NAME).vcd

GEN_ENABLE := 0

all:
	@echo "Write this Makefile by your self."


tb_gen:
	@echo "------------------- TestBench GEN ----------------------"
	cp $(TB_TEMP) $(TB_CSRC)
	sed -i 's/testBenchTB/$(TB_NAME)/g' $(TB_CSRC)
	@echo "TestBench file: $(TB_CSRC)"
	@echo "------------------- TestBench GEN DONE -----------------"

tb_del:
	@echo "------------------- TestBench DEL ----------------------"
	rm $(TB_CSRC)
	@echo "------------------- TestBench DEL DONE -----------------"

build: $(VSRCS)
ifneq ($(GEN_ENABLE),0)
	make tb_gen $(SECOND_GOAL)
endif
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


.PHONY: all tb_gen tb_del build sim wave clean $(TB_ITEM)

include ../Makefile
