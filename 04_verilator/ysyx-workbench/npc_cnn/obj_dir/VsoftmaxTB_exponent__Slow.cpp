// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsoftmaxTB.h for the primary calling header

#include "VsoftmaxTB__pch.h"
#include "VsoftmaxTB__Syms.h"
#include "VsoftmaxTB_exponent.h"

void VsoftmaxTB_exponent___ctor_var_reset(VsoftmaxTB_exponent* vlSelf);

VsoftmaxTB_exponent::VsoftmaxTB_exponent(VsoftmaxTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsoftmaxTB_exponent___ctor_var_reset(this);
}

void VsoftmaxTB_exponent::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsoftmaxTB_exponent::~VsoftmaxTB_exponent() {
}
