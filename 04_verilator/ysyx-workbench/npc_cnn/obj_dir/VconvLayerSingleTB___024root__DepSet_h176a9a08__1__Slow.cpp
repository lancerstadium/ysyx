// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB___024root.h"

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_triggers__stl(VconvLayerSingleTB___024root* vlSelf);
VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_stl(VconvLayerSingleTB___024root* vlSelf);

VL_ATTR_COLD bool VconvLayerSingleTB___024root___eval_phase__stl(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VconvLayerSingleTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VconvLayerSingleTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__act(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge convLayerSingleTB.clk or posedge convLayerSingleTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge convLayerSingleTB.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge convLayerSingleTB.UUT.gRst or posedge convLayerSingleTB.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__nba(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge convLayerSingleTB.clk or posedge convLayerSingleTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge convLayerSingleTB.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge convLayerSingleTB.UUT.gRst or posedge convLayerSingleTB.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvLayerSingleTB___024root___ctor_var_reset(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->convLayerSingleTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->convLayerSingleTB__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(16384, vlSelf->convLayerSingleTB__DOT__img);
    VL_RAND_RESET_W(400, vlSelf->convLayerSingleTB__DOT__fit);
    VL_RAND_RESET_W(12544, vlSelf->convLayerSingleTB__DOT__res);
    vlSelf->convLayerSingleTB__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__clkCnt = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(224, vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes);
    VL_RAND_RESET_W(5600, vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst = VL_RAND_RESET_I(1);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum = VL_RAND_RESET_I(6);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel = VL_RAND_RESET_I(6);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__0__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__1__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__2__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__3__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__4__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__5__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__6__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__7__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__8__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__9__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__10__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__11__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__12__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__13__KET____DOT__CU__res = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
    VL_RAND_RESET_W(80, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed = VL_RAND_RESET_I(16);
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__UUT__DOT__gRst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
