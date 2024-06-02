// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatRecTB.h for the primary calling header

#include "VfloatRecTB__pch.h"
#include "VfloatRecTB__Syms.h"
#include "VfloatRecTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatRecTB___024root___dump_triggers__act(VfloatRecTB___024root* vlSelf);
#endif  // VL_DEBUG

void VfloatRecTB___024root___eval_triggers__act(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->floatRecTB__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, (vlSelf->floatRecTB__DOT__FA__DOT__x1 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x1__0));
    vlSelf->__VactTriggered.set(2U, (vlSelf->floatRecTB__DOT__FA__DOT__x2 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x2__0));
    vlSelf->__VactTriggered.set(3U, (vlSelf->floatRecTB__DOT__FA__DOT__x3 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x3__0));
    vlSelf->__VactTriggered.set(4U, (vlSelf->floatRecTB__DOT__FA__DOT__x4 
                                     != vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x4__0));
    vlSelf->__VactTriggered.set(5U, ((vlSelf->floatRecTB__DOT__FA__DOT__x4 
                                      != vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x4__0) 
                                     | ((~ (IData)(vlSelf->floatRecTB__DOT__clk)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(6U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__clk__0 
        = vlSelf->floatRecTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x1__0 
        = vlSelf->floatRecTB__DOT__FA__DOT__x1;
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x2__0 
        = vlSelf->floatRecTB__DOT__FA__DOT__x2;
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x3__0 
        = vlSelf->floatRecTB__DOT__FA__DOT__x3;
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x4__0 
        = vlSelf->floatRecTB__DOT__FA__DOT__x4;
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
        VfloatRecTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
