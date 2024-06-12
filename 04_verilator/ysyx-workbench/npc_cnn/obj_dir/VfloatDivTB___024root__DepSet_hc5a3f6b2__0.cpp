// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatDivTB.h for the primary calling header

#include "VfloatDivTB__pch.h"
#include "VfloatDivTB__Syms.h"
#include "VfloatDivTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__act(VfloatDivTB___024root* vlSelf);
#endif  // VL_DEBUG

void VfloatDivTB___024root___eval_triggers__act(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->floatDivTB__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (vlSelf->floatDivTB__DOT__FA__DOT__a1 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a1__0));
    vlSelf->__VactTriggered.set(2U, (vlSelf->floatDivTB__DOT__FA__DOT__a2 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a2__0));
    vlSelf->__VactTriggered.set(3U, (vlSelf->floatDivTB__DOT__FA__DOT__a3 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a3__0));
    vlSelf->__VactTriggered.set(4U, (vlSelf->floatDivTB__DOT__FA__DOT__a4 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a4__0));
    vlSelf->__VactTriggered.set(5U, (vlSelf->floatDivTB__DOT__FA__DOT__aFinal 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__aFinal__0));
    vlSelf->__VactTriggered.set(6U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__clk__0 
        = vlSelf->floatDivTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a1__0 
        = vlSelf->floatDivTB__DOT__FA__DOT__a1;
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a2__0 
        = vlSelf->floatDivTB__DOT__FA__DOT__a2;
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a3__0 
        = vlSelf->floatDivTB__DOT__FA__DOT__a3;
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a4__0 
        = vlSelf->floatDivTB__DOT__FA__DOT__a4;
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__aFinal__0 
        = vlSelf->floatDivTB__DOT__FA__DOT__aFinal;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VfloatDivTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
