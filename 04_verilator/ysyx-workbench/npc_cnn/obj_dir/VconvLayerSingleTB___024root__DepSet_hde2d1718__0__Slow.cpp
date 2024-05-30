// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB__Syms.h"
#include "VconvLayerSingleTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__stl(VconvLayerSingleTB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_triggers__stl(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VconvLayerSingleTB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
