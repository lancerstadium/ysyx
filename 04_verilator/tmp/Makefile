
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif
 
default:
	@echo "-- Verilator hello-world simple example"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) -Wall -cc --exe --build -j top.v sim_main.cpp
	@echo "-- RUN ---------------------"
	obj_dir/Vtop
	@echo "-- DONE --------------------"
	@echo "Note: Once this example is understood, see examples/make_tracing_c."
	@echo "Note: Also see the EXAMPLE section in the verilator manpage/document."