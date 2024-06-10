# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VsoftmaxTB.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VsoftmaxTB \
	VsoftmaxTB___024root__DepSet_hd9de7b55__0 \
	VsoftmaxTB___024root__DepSet_hc8dec3d0__0 \
	VsoftmaxTB_exponent__DepSet_h1cf99d48__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VsoftmaxTB__ConstPool_0 \
	VsoftmaxTB___024root__Slow \
	VsoftmaxTB___024root__DepSet_hd9de7b55__0__Slow \
	VsoftmaxTB___024root__DepSet_hc8dec3d0__0__Slow \
	VsoftmaxTB_exponent__Slow \
	VsoftmaxTB_exponent__DepSet_h8dc1e9bb__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VsoftmaxTB__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VsoftmaxTB__Syms \
	VsoftmaxTB__Trace__0__Slow \
	VsoftmaxTB__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
