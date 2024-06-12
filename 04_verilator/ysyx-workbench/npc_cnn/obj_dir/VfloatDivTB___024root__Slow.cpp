// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatDivTB.h for the primary calling header

#include "VfloatDivTB__pch.h"
#include "VfloatDivTB__Syms.h"
#include "VfloatDivTB___024root.h"

void VfloatDivTB___024root___ctor_var_reset(VfloatDivTB___024root* vlSelf);

VfloatDivTB___024root::VfloatDivTB___024root(VfloatDivTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VfloatDivTB___024root___ctor_var_reset(this);
}

void VfloatDivTB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VfloatDivTB___024root::~VfloatDivTB___024root() {
}
