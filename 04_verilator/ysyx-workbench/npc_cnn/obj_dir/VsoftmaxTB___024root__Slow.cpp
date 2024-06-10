// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsoftmaxTB.h for the primary calling header

#include "VsoftmaxTB__pch.h"
#include "VsoftmaxTB__Syms.h"
#include "VsoftmaxTB___024root.h"

void VsoftmaxTB___024root___ctor_var_reset(VsoftmaxTB___024root* vlSelf);

VsoftmaxTB___024root::VsoftmaxTB___024root(VsoftmaxTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsoftmaxTB___024root___ctor_var_reset(this);
}

void VsoftmaxTB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsoftmaxTB___024root::~VsoftmaxTB___024root() {
}
