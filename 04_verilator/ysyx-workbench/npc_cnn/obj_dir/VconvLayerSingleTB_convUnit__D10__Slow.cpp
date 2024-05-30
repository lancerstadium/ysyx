// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB__Syms.h"
#include "VconvLayerSingleTB_convUnit__D10.h"

void VconvLayerSingleTB_convUnit__D10___ctor_var_reset(VconvLayerSingleTB_convUnit__D10* vlSelf);

VconvLayerSingleTB_convUnit__D10::VconvLayerSingleTB_convUnit__D10(VconvLayerSingleTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VconvLayerSingleTB_convUnit__D10___ctor_var_reset(this);
}

void VconvLayerSingleTB_convUnit__D10::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VconvLayerSingleTB_convUnit__D10::~VconvLayerSingleTB_convUnit__D10() {
}
