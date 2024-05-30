// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvUnitTB.h for the primary calling header

#include "VconvUnitTB__pch.h"
#include "VconvUnitTB__Syms.h"
#include "VconvUnitTB___024root.h"

void VconvUnitTB___024root___ctor_var_reset(VconvUnitTB___024root* vlSelf);

VconvUnitTB___024root::VconvUnitTB___024root(VconvUnitTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VconvUnitTB___024root___ctor_var_reset(this);
}

void VconvUnitTB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VconvUnitTB___024root::~VconvUnitTB___024root() {
}
