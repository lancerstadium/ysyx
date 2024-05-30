// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VprocElemTB.h for the primary calling header

#include "VprocElemTB__pch.h"
#include "VprocElemTB__Syms.h"
#include "VprocElemTB___024root.h"

void VprocElemTB___024root___ctor_var_reset(VprocElemTB___024root* vlSelf);

VprocElemTB___024root::VprocElemTB___024root(VprocElemTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VprocElemTB___024root___ctor_var_reset(this);
}

void VprocElemTB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VprocElemTB___024root::~VprocElemTB___024root() {
}
