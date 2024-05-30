// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerMultiTB.h for the primary calling header

#include "VconvLayerMultiTB__pch.h"
#include "VconvLayerMultiTB___024root.h"

VL_ATTR_COLD void VconvLayerMultiTB___024root___eval_static(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VconvLayerMultiTB___024root___eval_initial__TOP(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__i = 5U;
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__k = 1U;
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__i = 5U;
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__k = 1U;
}

VL_ATTR_COLD void VconvLayerMultiTB___024root___eval_final(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerMultiTB___024root___dump_triggers__stl(VconvLayerMultiTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VconvLayerMultiTB___024root___eval_phase__stl(VconvLayerMultiTB___024root* vlSelf);

VL_ATTR_COLD void VconvLayerMultiTB___024root___eval_settle(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___eval_settle\n"); );
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
            VconvLayerMultiTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/convLayerMultiTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VconvLayerMultiTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerMultiTB___024root___dump_triggers__stl(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvLayerMultiTB___024root___eval_triggers__stl(VconvLayerMultiTB___024root* vlSelf);
VL_ATTR_COLD void VconvLayerMultiTB___024root___eval_stl(VconvLayerMultiTB___024root* vlSelf);

VL_ATTR_COLD bool VconvLayerMultiTB___024root___eval_phase__stl(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VconvLayerMultiTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VconvLayerMultiTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerMultiTB___024root___dump_triggers__act(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge convLayerMultiTB.clk or posedge convLayerMultiTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge convLayerMultiTB.UUT.gRst or posedge convLayerMultiTB.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge convLayerMultiTB.UUT.genblk1[0].UUT.gRst or posedge convLayerMultiTB.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge convLayerMultiTB.UUT.genblk1[1].UUT.gRst or posedge convLayerMultiTB.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerMultiTB___024root___dump_triggers__nba(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge convLayerMultiTB.clk or posedge convLayerMultiTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge convLayerMultiTB.UUT.gRst or posedge convLayerMultiTB.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge convLayerMultiTB.UUT.genblk1[0].UUT.gRst or posedge convLayerMultiTB.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge convLayerMultiTB.UUT.genblk1[1].UUT.gRst or posedge convLayerMultiTB.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvLayerMultiTB___024root___ctor_var_reset(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->convLayerMultiTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->convLayerMultiTB__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(16384, vlSelf->convLayerMultiTB__DOT__img);
    VL_RAND_RESET_W(2400, vlSelf->convLayerMultiTB__DOT__fits);
    VL_RAND_RESET_W(75264, vlSelf->convLayerMultiTB__DOT__res);
    vlSelf->convLayerMultiTB__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__rCnt = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(800, vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__gRst = VL_RAND_RESET_I(1);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__fitIdx = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__clkCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__outputCounter = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(12544, vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__0__KET____DOT__UUT__res);
    VL_RAND_RESET_W(12544, vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__1__KET____DOT__UUT__res);
    VL_RAND_RESET_W(224, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes);
    VL_RAND_RESET_W(5600, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__gRst = VL_RAND_RESET_I(1);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__rowNum = VL_RAND_RESET_I(6);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__colSel = VL_RAND_RESET_I(6);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__clkCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
    VL_RAND_RESET_W(80, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
    VL_RAND_RESET_W(224, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes);
    VL_RAND_RESET_W(5600, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst = VL_RAND_RESET_I(1);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__rowNum = VL_RAND_RESET_I(6);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__colSel = VL_RAND_RESET_I(6);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__clkCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuCnt = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0);
    VL_RAND_RESET_W(80, vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__gRst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__gRst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
