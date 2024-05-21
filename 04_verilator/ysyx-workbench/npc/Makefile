

INC = ./vsrc/include
VSRCS = $(shell find $(./vsrc ) -name "*.v")
CSRCS = $(shell find $(./csrc ) -name "*.c" -or -name "*.cpp" -or -name "*.cc")
LDFLAGS = -lreadline

all:
	@echo "Write this Makefile by your self."

sim:
	# $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --trace --cc --exe --build \
	--top-module top \
	-I$(INC) \
	./csrc/sim_main.cpp \
	$(VSRCS) \
	-LDFLAGS $(LDFLAGS)


wave: sim
	./obj_dir/Vtop
	gtkwave wave.vcd

clean:
	rm -rf obj_dir
	rm wave.vcd



include ../Makefile
