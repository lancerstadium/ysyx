# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VconvLayerMultiTB.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VconvLayerMultiTB \
	VconvLayerMultiTB___024root__DepSet_h6f98a4a5__0 \
	VconvLayerMultiTB___024root__DepSet_h335eeea2__0 \
	VconvLayerMultiTB___024root__DepSet_h335eeea2__1 \
	VconvLayerMultiTB___024root__DepSet_h335eeea2__2 \
	VconvLayerMultiTB_convUnit__D10__DepSet_hdd3b5d37__0 \
	VconvLayerMultiTB_convUnit__D10__DepSet_hdd3b5d37__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VconvLayerMultiTB__ConstPool_0 \
	VconvLayerMultiTB___024root__Slow \
	VconvLayerMultiTB___024root__DepSet_h6f98a4a5__0__Slow \
	VconvLayerMultiTB___024root__DepSet_h335eeea2__0__Slow \
	VconvLayerMultiTB_convUnit__D10__Slow \
	VconvLayerMultiTB_convUnit__D10__DepSet_he6023834__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VconvLayerMultiTB__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VconvLayerMultiTB__Syms \
	VconvLayerMultiTB__Trace__0__Slow \
	VconvLayerMultiTB__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
