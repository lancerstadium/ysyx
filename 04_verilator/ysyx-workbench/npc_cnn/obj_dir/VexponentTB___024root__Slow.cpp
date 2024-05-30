// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VexponentTB.h for the primary calling header

#include "VexponentTB__pch.h"
#include "VexponentTB__Syms.h"
#include "VexponentTB___024root.h"

void VexponentTB___024root___ctor_var_reset(VexponentTB___024root* vlSelf);

VexponentTB___024root::VexponentTB___024root(VexponentTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VexponentTB___024root___ctor_var_reset(this);
}

void VexponentTB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VexponentTB___024root::~VexponentTB___024root() {
}
