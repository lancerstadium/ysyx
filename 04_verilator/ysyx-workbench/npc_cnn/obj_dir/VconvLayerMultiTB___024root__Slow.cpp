// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerMultiTB.h for the primary calling header

#include "VconvLayerMultiTB__pch.h"
#include "VconvLayerMultiTB__Syms.h"
#include "VconvLayerMultiTB___024root.h"

void VconvLayerMultiTB___024root___ctor_var_reset(VconvLayerMultiTB___024root* vlSelf);

VconvLayerMultiTB___024root::VconvLayerMultiTB___024root(VconvLayerMultiTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VconvLayerMultiTB___024root___ctor_var_reset(this);
}

void VconvLayerMultiTB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VconvLayerMultiTB___024root::~VconvLayerMultiTB___024root() {
}
