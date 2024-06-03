// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatDivTB.h for the primary calling header

#include "VfloatDivTB__pch.h"
#include "VfloatDivTB__Syms.h"
#include "VfloatDivTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__stl(VfloatDivTB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VfloatDivTB___024root___eval_triggers__stl(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VfloatDivTB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
