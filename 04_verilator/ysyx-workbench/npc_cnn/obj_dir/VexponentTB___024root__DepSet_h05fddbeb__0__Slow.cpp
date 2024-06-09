// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VexponentTB.h for the primary calling header

#include "VexponentTB__pch.h"
#include "VexponentTB__Syms.h"
#include "VexponentTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VexponentTB___024root___dump_triggers__stl(VexponentTB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VexponentTB___024root___eval_triggers__stl(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VexponentTB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
