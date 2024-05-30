// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB__Syms.h"
#include "VconvLayerSingleTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__act(VconvLayerSingleTB___024root* vlSelf);
#endif  // VL_DEBUG

void VconvLayerSingleTB___024root___eval_triggers__act(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->convLayerSingleTB__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0))) 
                                     | ((IData)(vlSelf->convLayerSingleTB__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->convLayerSingleTB__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__UUT__DOT__gRst__0))) 
                                     | ((IData)(vlSelf->convLayerSingleTB__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0 
        = vlSelf->convLayerSingleTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__rst__0 
        = vlSelf->convLayerSingleTB__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__UUT__DOT__gRst__0 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VconvLayerSingleTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
