// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvUnitTB.h for the primary calling header

#include "VconvUnitTB__pch.h"
#include "VconvUnitTB__Syms.h"
#include "VconvUnitTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__act(VconvUnitTB___024root* vlSelf);
#endif  // VL_DEBUG

void VconvUnitTB___024root___eval_triggers__act(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->convUnitTB__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__clk__0))) 
                                     | ((IData)(vlSelf->convUnitTB__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__clk__0 
        = vlSelf->convUnitTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__rst__0 
        = vlSelf->convUnitTB__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VconvUnitTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
