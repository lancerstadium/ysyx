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
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VfloatRecTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
