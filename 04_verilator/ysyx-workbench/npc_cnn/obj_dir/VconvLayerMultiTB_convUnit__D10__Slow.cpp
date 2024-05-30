// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerMultiTB.h for the primary calling header

#include "VconvLayerMultiTB__pch.h"
#include "VconvLayerMultiTB__Syms.h"
#include "VconvLayerMultiTB_convUnit__D10.h"

void VconvLayerMultiTB_convUnit__D10___ctor_var_reset(VconvLayerMultiTB_convUnit__D10* vlSelf);

VconvLayerMultiTB_convUnit__D10::VconvLayerMultiTB_convUnit__D10(VconvLayerMultiTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VconvLayerMultiTB_convUnit__D10___ctor_var_reset(this);
}

void VconvLayerMultiTB_convUnit__D10::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VconvLayerMultiTB_convUnit__D10::~VconvLayerMultiTB_convUnit__D10() {
}
