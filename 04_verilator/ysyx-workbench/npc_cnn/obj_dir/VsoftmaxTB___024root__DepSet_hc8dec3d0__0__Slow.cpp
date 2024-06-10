// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsoftmaxTB.h for the primary calling header

#include "VsoftmaxTB__pch.h"
#include "VsoftmaxTB___024root.h"

VL_ATTR_COLD void VsoftmaxTB___024root___eval_static(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VsoftmaxTB___024root___eval_initial__TOP(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[0U] = 0U;
}

VL_ATTR_COLD void VsoftmaxTB___024root___eval_final(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsoftmaxTB___024root___dump_triggers__stl(VsoftmaxTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsoftmaxTB___024root___eval_phase__stl(VsoftmaxTB___024root* vlSelf);

VL_ATTR_COLD void VsoftmaxTB___024root___eval_settle(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_settle\n"); );
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
            VsoftmaxTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/lay/softmaxTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VsoftmaxTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsoftmaxTB___024root___dump_triggers__stl(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsoftmaxTB___024root___eval_triggers__stl(VsoftmaxTB___024root* vlSelf);
VL_ATTR_COLD void VsoftmaxTB___024root___eval_stl(VsoftmaxTB___024root* vlSelf);

VL_ATTR_COLD bool VsoftmaxTB___024root___eval_phase__stl(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VsoftmaxTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VsoftmaxTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsoftmaxTB___024root___dump_triggers__act(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge softmaxTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] softmaxTB.soft1.FR.x1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] softmaxTB.soft1.FR.x2)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] softmaxTB.soft1.FR.x3)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] softmaxTB.soft1.FR.x4)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] softmaxTB.soft1.FR.x4 or [changed] softmaxTB.soft1.FR.y4)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge softmaxTB.clk)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsoftmaxTB___024root___dump_triggers__nba(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge softmaxTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] softmaxTB.soft1.FR.x1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] softmaxTB.soft1.FR.x2)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] softmaxTB.soft1.FR.x3)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] softmaxTB.soft1.FR.x4)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] softmaxTB.soft1.FR.x4 or [changed] softmaxTB.soft1.FR.y4)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge softmaxTB.clk)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsoftmaxTB___024root___ctor_var_reset(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(320, vlSelf->softmaxTB__DOT__inputs);
    vlSelf->softmaxTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->softmaxTB__DOT__outputs);
    vlSelf->softmaxTB__DOT__ackSoft = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__expRec = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__outMul = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->softmaxTB__DOT__soft1__DOT__expSums[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter = VL_RAND_RESET_I(4);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellinp__FM1____pinNumber1 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT____Vlvbound_h11605af6__0 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x1 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1Out = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1D = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x2 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2Out = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D2 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2D = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3Out = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D3 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3D = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x4 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4Out = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D4 = VL_RAND_RESET_I(32);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__0__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__0__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__0__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x2__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x3__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x4__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__y4__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
