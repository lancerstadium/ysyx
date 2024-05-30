// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvUnitTB.h for the primary calling header

#include "VconvUnitTB__pch.h"
#include "VconvUnitTB___024root.h"

VL_ATTR_COLD void VconvUnitTB___024root___eval_static(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VconvUnitTB___024root___eval_final(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__stl(VconvUnitTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VconvUnitTB___024root___eval_phase__stl(VconvUnitTB___024root* vlSelf);

VL_ATTR_COLD void VconvUnitTB___024root___eval_settle(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VconvUnitTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/convUnitTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VconvUnitTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__stl(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvUnitTB___024root___stl_sequent__TOP__0(VconvUnitTB___024root* vlSelf);

VL_ATTR_COLD void VconvUnitTB___024root___eval_stl(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VconvUnitTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VconvUnitTB___024root___stl_sequent__TOP__0(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed 
        = vlSelf->convUnitTB__DOT__UUT__DOT__selInA;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed 
        = vlSelf->convUnitTB__DOT__UUT__DOT__selInB;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed 
        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed), (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC 
        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed 
        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed 
        = vlSelf->convUnitTB__DOT__res;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed 
        = (0xffffU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed) 
                      + (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC 
        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed;
}

VL_ATTR_COLD void VconvUnitTB___024root___eval_triggers__stl(VconvUnitTB___024root* vlSelf);

VL_ATTR_COLD bool VconvUnitTB___024root___eval_phase__stl(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VconvUnitTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VconvUnitTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__act(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge convUnitTB.clk or posedge convUnitTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__nba(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge convUnitTB.clk or posedge convUnitTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvUnitTB___024root___ctor_var_reset(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->convUnitTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(400, vlSelf->convUnitTB__DOT__img);
    VL_RAND_RESET_W(400, vlSelf->convUnitTB__DOT__fit);
    vlSelf->convUnitTB__DOT__res = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__tmp = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convUnitTB__DOT__UUT__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
