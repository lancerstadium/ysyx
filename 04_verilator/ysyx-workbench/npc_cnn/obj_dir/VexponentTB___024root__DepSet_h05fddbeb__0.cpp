// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VexponentTB.h for the primary calling header

#include "VexponentTB__pch.h"
#include "VexponentTB__Syms.h"
#include "VexponentTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VexponentTB___024root___dump_triggers__act(VexponentTB___024root* vlSelf);
#endif  // VL_DEBUG

void VexponentTB___024root___eval_triggers__act(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->exponentTB__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__exponentTB__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__exponentTB__DOT__clk__0 
        = vlSelf->exponentTB__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VexponentTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
