// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VprocElemTB.h for the primary calling header

#include "VprocElemTB__pch.h"
#include "VprocElemTB__Syms.h"
#include "VprocElemTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VprocElemTB___024root___dump_triggers__act(VprocElemTB___024root* vlSelf);
#endif  // VL_DEBUG

void VprocElemTB___024root___eval_triggers__act(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->procElemTB__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__clk__0))) 
                                     | ((IData)(vlSelf->procElemTB__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__clk__0 
        = vlSelf->procElemTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__rst__0 
        = vlSelf->procElemTB__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VprocElemTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
