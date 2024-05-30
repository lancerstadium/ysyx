// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB__Syms.h"
#include "VconvLayerSingleTB___024root.h"

void VconvLayerSingleTB___024root___ctor_var_reset(VconvLayerSingleTB___024root* vlSelf);

VconvLayerSingleTB___024root::VconvLayerSingleTB___024root(VconvLayerSingleTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VconvLayerSingleTB___024root___ctor_var_reset(this);
}

void VconvLayerSingleTB___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VconvLayerSingleTB___024root::~VconvLayerSingleTB___024root() {
}
