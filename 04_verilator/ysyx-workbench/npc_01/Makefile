
INC = ./vsrc/include
VSRCS = $(shell find $(./vsrc ) -name "*.v")
CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cpp" -or -name "*.cc")
LDFLAGS = -lreadline

all:
	@echo "Write this Makefile by your self."

sim:
	# $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "--------- VERILATE & BUILD ---------"
	verilator --trace --cc --exe --build \
	--top-module top \
	-I$(INC) \
	./csrc/sim_main.cpp \
	$(VSRCS) \
	-LDFLAGS $(LDFLAGS)
	@echo "------------- SIM RUN --------------"
	obj_dir/Vtop
	@echo "------------- SIM DONE -------------"


wave: sim
	@echo "------------- WAVE RUN -------------"
	gtkwave wave.vcd
	@echo "------------- WAVE DONE ------------"


clean:
	rm -rf obj_dir
	rm wave.vcd


.PHONY: all sim wave clean

include ../Makefile
