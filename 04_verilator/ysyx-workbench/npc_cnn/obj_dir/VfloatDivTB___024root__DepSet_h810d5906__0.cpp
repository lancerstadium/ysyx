// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatDivTB.h for the primary calling header

#include "VfloatDivTB__pch.h"
#include "VfloatDivTB___024root.h"

VlCoroutine VfloatDivTB___024root___eval_initial__TOP__Vtiming__0(VfloatDivTB___024root* vlSelf);
VlCoroutine VfloatDivTB___024root___eval_initial__TOP__Vtiming__1(VfloatDivTB___024root* vlSelf);

void VfloatDivTB___024root___eval_initial(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_initial\n"); );
    // Body
    VfloatDivTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VfloatDivTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
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
}

VL_INLINE_OPT VlCoroutine VfloatDivTB___024root___eval_initial__TOP__Vtiming__0(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->floatDivTB__DOT__clk = 1U;
    vlSelf->floatDivTB__DOT__enb = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatDivTB.v", 
                                       35);
    vlSelf->floatDivTB__DOT__A = 0x40200000U;
    vlSelf->floatDivTB__DOT__B = 0x40800000U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatDivTB.v", 
                                       39);
    vlSelf->floatDivTB__DOT__enb = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatDivTB.v", 
                                       42);
    vlSelf->floatDivTB__DOT__enb = 0U;
    while ((1U & (~ (IData)(vlSelf->floatDivTB__DOT__ack)))) {
        co_await vlSelf->__VdlySched.delay(0x64ULL, 
                                           nullptr, 
                                           "vsrc/op/floatDivTB.v", 
                                           46);
    }
    VL_WRITEF_NX("C=%b\n",0,32,vlSelf->floatDivTB__DOT__C);
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatDivTB.v", 
                                       50);
    vlSelf->floatDivTB__DOT__enb = 1U;
    vlSelf->floatDivTB__DOT__A = 0xbefef9dbU;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatDivTB.v", 
                                       54);
    vlSelf->floatDivTB__DOT__enb = 0U;
    while ((1U & (~ (IData)(vlSelf->floatDivTB__DOT__ack)))) {
        co_await vlSelf->__VdlySched.delay(0x64ULL, 
                                           nullptr, 
                                           "vsrc/op/floatDivTB.v", 
                                           58);
    }
    VL_WRITEF_NX("C=%b\n",0,32,vlSelf->floatDivTB__DOT__C);
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatDivTB.v", 
                                       65);
    vlSelf->floatDivTB__DOT__enb = 1U;
    vlSelf->floatDivTB__DOT__A = 0x41b86666U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatDivTB.v", 
                                       69);
    vlSelf->floatDivTB__DOT__enb = 0U;
    while ((1U & (~ (IData)(vlSelf->floatDivTB__DOT__ack)))) {
        co_await vlSelf->__VdlySched.delay(0x64ULL, 
                                           nullptr, 
                                           "vsrc/op/floatDivTB.v", 
                                           73);
    }
    VL_WRITEF_NX("C=%b\n",0,32,vlSelf->floatDivTB__DOT__C);
    VL_FINISH_MT("vsrc/op/floatDivTB.v", 78, "");
}

VL_INLINE_OPT VlCoroutine VfloatDivTB___024root___eval_initial__TOP__Vtiming__1(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "vsrc/op/floatDivTB.v", 
                                           28);
        vlSelf->floatDivTB__DOT__clk = (1U & (~ (IData)(vlSelf->floatDivTB__DOT__clk)));
    }
}

void VfloatDivTB___024root___eval_act(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_act\n"); );
}

void VfloatDivTB___024root___nba_sequent__TOP__0(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_sequent__TOP__1(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_sequent__TOP__2(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_sequent__TOP__3(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_sequent__TOP__4(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_sequent__TOP__5(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_sequent__TOP__6(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_comb__TOP__0(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_comb__TOP__1(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_comb__TOP__2(VfloatDivTB___024root* vlSelf);
void VfloatDivTB___024root___nba_comb__TOP__3(VfloatDivTB___024root* vlSelf);

void VfloatDivTB___024root___eval_nba(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatDivTB___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_sequent__TOP__0(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__floatDivTB__DOT__FA__DOT__signal;
    __Vdly__floatDivTB__DOT__FA__DOT__signal = 0;
    // Body
    __Vdly__floatDivTB__DOT__FA__DOT__signal = vlSelf->floatDivTB__DOT__FA__DOT__signal;
    vlSelf->floatDivTB__DOT__FA__DOT__aFinal = vlSelf->floatDivTB__DOT__FA__DOT__a4;
    vlSelf->floatDivTB__DOT__FA__DOT__D4 = vlSelf->floatDivTB__DOT__FA__DOT__D3;
    if (vlSelf->floatDivTB__DOT__enb) {
        vlSelf->floatDivTB__DOT__ack = (1U & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__signal) 
                                              >> 3U));
        __Vdly__floatDivTB__DOT__FA__DOT__signal = 
            (1U | (0xeU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__signal) 
                           << 1U)));
        vlSelf->floatDivTB__DOT__FA__DOT__signal = __Vdly__floatDivTB__DOT__FA__DOT__signal;
        vlSelf->floatDivTB__DOT__FA__DOT__a4 = vlSelf->floatDivTB__DOT__FA__DOT__a3;
        vlSelf->floatDivTB__DOT__FA__DOT__D3 = vlSelf->floatDivTB__DOT__FA__DOT__D2;
        vlSelf->floatDivTB__DOT__FA__DOT__a3 = vlSelf->floatDivTB__DOT__FA__DOT__a2;
        vlSelf->floatDivTB__DOT__FA__DOT__D2 = vlSelf->floatDivTB__DOT__FA__DOT__D1;
        vlSelf->floatDivTB__DOT__FA__DOT__D1 = (0x3f000000U 
                                                | (0x7fffffU 
                                                   & vlSelf->floatDivTB__DOT__B));
    } else {
        vlSelf->floatDivTB__DOT__ack = (1U & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__signal) 
                                              >> 3U));
        __Vdly__floatDivTB__DOT__FA__DOT__signal = 
            (0xeU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__signal) 
                     << 1U));
        vlSelf->floatDivTB__DOT__FA__DOT__signal = __Vdly__floatDivTB__DOT__FA__DOT__signal;
        vlSelf->floatDivTB__DOT__FA__DOT__a4 = vlSelf->floatDivTB__DOT__FA__DOT__a3;
        vlSelf->floatDivTB__DOT__FA__DOT__D3 = vlSelf->floatDivTB__DOT__FA__DOT__D2;
        vlSelf->floatDivTB__DOT__FA__DOT__a3 = vlSelf->floatDivTB__DOT__FA__DOT__a2;
        vlSelf->floatDivTB__DOT__FA__DOT__D2 = vlSelf->floatDivTB__DOT__FA__DOT__D1;
        vlSelf->floatDivTB__DOT__FA__DOT__D1 = 0U;
    }
    vlSelf->floatDivTB__DOT__FA__DOT__a2 = vlSelf->floatDivTB__DOT__FA__DOT__a1;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__sign 
        = (1U & (~ (vlSelf->floatDivTB__DOT__FA__DOT__D1 
                    >> 0x1fU)));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent 
        = (0xffU & ((IData)(2U) + (vlSelf->floatDivTB__DOT__FA__DOT__D1 
                                   >> 0x17U)));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionA = 0xf0f0f1U;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__D1));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction 
        = (0xffffffffffffULL & (0xf0f0f1ULL * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__D1))) {
        vlSelf->floatDivTB__DOT__FA__DOT__P2D = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel1;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__P2D = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__FA__DOT__P2D = 
                (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent) 
                                << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_sequent__TOP__1(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((0U != vlSelf->floatDivTB__DOT__FA__DOT__c4)) {
        vlSelf->floatDivTB__DOT__FA__DOT__cFinal = 
            ((0x80000000U & vlSelf->floatDivTB__DOT__FA__DOT__bFinal) 
             | ((0x7f800000U & (((IData)(0xfdU) - (vlSelf->floatDivTB__DOT__FA__DOT__bFinal 
                                                   >> 0x17U)) 
                                << 0x17U)) | (0x7fffffU 
                                              & vlSelf->floatDivTB__DOT__FA__DOT__c4)));
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_sequent__TOP__2(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__c2 = vlSelf->floatDivTB__DOT__FA__DOT__c2Out;
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_sequent__TOP__3(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__c3 = vlSelf->floatDivTB__DOT__FA__DOT__c3Out;
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_sequent__TOP__4(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_sequent__TOP__4\n"); );
    // Body
    if ((0U != vlSelf->floatDivTB__DOT__FA__DOT__a1)) {
        vlSelf->floatDivTB__DOT__FA__DOT__c1 = vlSelf->floatDivTB__DOT__FA__DOT__c1Out;
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_sequent__TOP__5(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__c4 = vlSelf->floatDivTB__DOT__FA__DOT__c4Out;
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_sequent__TOP__6(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA 
        = (0xffU & (vlSelf->floatDivTB__DOT__FA__DOT__P2D 
                    >> 0x17U));
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB = 0x80U;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__P2D));
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB = 0xb4b4b5U;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent 
        = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__P2D))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c1Out = 0x4034b4b5U;
    } else {
        if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB) 
             > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA)));
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB)));
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA;
        }
        if ((vlSelf->floatDivTB__DOT__FA__DOT__P2D 
             >> 0x1fU)) {
            if ((vlSelf->floatDivTB__DOT__FA__DOT__P2D 
                 >> 0x1fU)) {
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout 
                    = (1U & ((vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB 
                              - vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB 
                                    - vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA));
            } else {
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout 
                    = (1U & ((vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA 
                              - vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA 
                                    - vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB));
            }
            if (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout) {
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign = 1U;
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction));
            } else {
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__eout 
                                = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent 
                                = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel2;
                        }
                        vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
            }
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout 
                = (1U & ((vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA 
                          + vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                = (0xffffffU & (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA 
                                + vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB));
            if (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout) {
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout 
                    = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction 
                    = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h77554df9__0;
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent)));
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__eout 
                    = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent 
                    = vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h704b029f__0;
            }
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign 
                = (vlSelf->floatDivTB__DOT__FA__DOT__P2D 
                   >> 0x1fU);
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c1Out = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction);
            vlSelf->floatDivTB__DOT__FA__DOT__c1Out 
                = (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__mantissa));
        }
    }
    vlSelf->floatDivTB__DOT__FA__DOT__bFinal = vlSelf->floatDivTB__DOT__FA__DOT__b4;
    vlSelf->floatDivTB__DOT__FA__DOT__b4 = vlSelf->floatDivTB__DOT__FA__DOT__b3;
    vlSelf->floatDivTB__DOT__FA__DOT__b3 = vlSelf->floatDivTB__DOT__FA__DOT__b2;
    vlSelf->floatDivTB__DOT__FA__DOT__b2 = vlSelf->floatDivTB__DOT__FA__DOT__b1;
    if (vlSelf->floatDivTB__DOT__enb) {
        vlSelf->floatDivTB__DOT__FA__DOT__a1 = vlSelf->floatDivTB__DOT__A;
        vlSelf->floatDivTB__DOT__FA__DOT__b1 = vlSelf->floatDivTB__DOT__B;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__a1 = 0U;
        vlSelf->floatDivTB__DOT__FA__DOT__b1 = 0U;
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_comb__TOP__0(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__sign 
        = ((vlSelf->floatDivTB__DOT__FA__DOT__cFinal 
            ^ vlSelf->floatDivTB__DOT__FA__DOT__aFinal) 
           >> 0x1fU);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent 
        = (0xffU & (((vlSelf->floatDivTB__DOT__FA__DOT__cFinal 
                      >> 0x17U) + (vlSelf->floatDivTB__DOT__FA__DOT__aFinal 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__cFinal));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__aFinal));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__cFinal)) 
         | (0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__aFinal)))) {
        vlSelf->floatDivTB__DOT__C = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel3;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel3: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__eout) {
            vlSelf->floatDivTB__DOT__C = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__C = (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__sign) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent) 
                                              << 0x17U) 
                                             | vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_comb__TOP__1(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__sign 
        = ((vlSelf->floatDivTB__DOT__FA__DOT__c2 ^ vlSelf->floatDivTB__DOT__FA__DOT__D3) 
           >> 0x1fU);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent 
        = (0xffU & (((vlSelf->floatDivTB__DOT__FA__DOT__c2 
                      >> 0x17U) + (vlSelf->floatDivTB__DOT__FA__DOT__D3 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__D3));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2)) 
         | (0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__D3)))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c2D = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel4;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel4: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c2D = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__FA__DOT__c2D = 
                (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent) 
                                << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__mantissa));
        }
    }
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__sign = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA = 0x80U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB 
        = (0xffU & (vlSelf->floatDivTB__DOT__FA__DOT__c2D 
                    >> 0x17U));
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA = 0x800000U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2D));
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent = 0x80U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__cout = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2D))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c2S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB) 
             > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB;
        } else if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA) 
                    > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA;
        }
        vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__cout 
            = (1U & ((vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA 
                      - vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction 
            = (0xffffffU & (vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA 
                            - vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB));
        if (vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__cout) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__sign = 1U;
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction 
                = (0xffffffU & (- vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction));
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction 
                                   >> (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__eout 
                            = vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent 
                            = vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel5;
                    }
                    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel5: ;
            }
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c2S = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction);
            vlSelf->floatDivTB__DOT__FA__DOT__c2S = 
                (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent) 
                                << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__mantissa));
        }
    }
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__sign 
        = ((vlSelf->floatDivTB__DOT__FA__DOT__c2 ^ vlSelf->floatDivTB__DOT__FA__DOT__c2S) 
           >> 0x1fU);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent 
        = (0xffU & (((vlSelf->floatDivTB__DOT__FA__DOT__c2 
                      >> 0x17U) + (vlSelf->floatDivTB__DOT__FA__DOT__c2S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2S));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2)) 
         | (0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c2S)))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c3Out = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel6;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel6: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c3Out = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__FA__DOT__c3Out 
                = (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_comb__TOP__2(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__sign 
        = ((vlSelf->floatDivTB__DOT__FA__DOT__c3 ^ vlSelf->floatDivTB__DOT__FA__DOT__D4) 
           >> 0x1fU);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent 
        = (0xffU & (((vlSelf->floatDivTB__DOT__FA__DOT__c3 
                      >> 0x17U) + (vlSelf->floatDivTB__DOT__FA__DOT__D4 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__D4));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3)) 
         | (0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__D4)))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c3D = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel7;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel7: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c3D = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__FA__DOT__c3D = 
                (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent) 
                                << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__mantissa));
        }
    }
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__sign = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA = 0x80U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB 
        = (0xffU & (vlSelf->floatDivTB__DOT__FA__DOT__c3D 
                    >> 0x17U));
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA = 0x800000U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3D));
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent = 0x80U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__cout = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3D))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c3S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB) 
             > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB;
        } else if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA) 
                    > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA;
        }
        vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__cout 
            = (1U & ((vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA 
                      - vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction 
            = (0xffffffU & (vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA 
                            - vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB));
        if (vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__cout) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__sign = 1U;
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction 
                = (0xffffffU & (- vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction));
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction 
                                   >> (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__eout 
                            = vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent 
                            = vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel8;
                    }
                    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel8: ;
            }
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c3S = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction);
            vlSelf->floatDivTB__DOT__FA__DOT__c3S = 
                (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent) 
                                << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__mantissa));
        }
    }
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__sign 
        = ((vlSelf->floatDivTB__DOT__FA__DOT__c3 ^ vlSelf->floatDivTB__DOT__FA__DOT__c3S) 
           >> 0x1fU);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent 
        = (0xffU & (((vlSelf->floatDivTB__DOT__FA__DOT__c3 
                      >> 0x17U) + (vlSelf->floatDivTB__DOT__FA__DOT__c3S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3S));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3)) 
         | (0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c3S)))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c4Out = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel9;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel9: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c4Out = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__FA__DOT__c4Out 
                = (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VfloatDivTB___024root___nba_comb__TOP__3(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__sign 
        = ((vlSelf->floatDivTB__DOT__FA__DOT__c1 ^ vlSelf->floatDivTB__DOT__FA__DOT__D2) 
           >> 0x1fU);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent 
        = (0xffU & (((vlSelf->floatDivTB__DOT__FA__DOT__c1 
                      >> 0x17U) + (vlSelf->floatDivTB__DOT__FA__DOT__D2 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__D2));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1)) 
         | (0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__D2)))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c1D = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel10;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c1D = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__FA__DOT__c1D = 
                (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent) 
                                << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__sign = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA = 0x80U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB 
        = (0xffU & (vlSelf->floatDivTB__DOT__FA__DOT__c1D 
                    >> 0x17U));
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA = 0x800000U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1D));
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent = 0x80U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__cout = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1D))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c1S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB) 
             > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB;
        } else if (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA) 
                    > (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA) 
                             - (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB, (IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount)));
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent 
                = vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA;
        }
        vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__cout 
            = (1U & ((vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA 
                      - vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction 
            = (0xffffffU & (vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA 
                            - vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB));
        if (vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__cout) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__sign = 1U;
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction 
                = (0xffffffU & (- vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction));
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction 
                                   >> (0x1fU & vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__eout 
                            = vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent 
                            = vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel11;
                    }
                    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel11: ;
            }
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c1S = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction);
            vlSelf->floatDivTB__DOT__FA__DOT__c1S = 
                (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent) 
                                << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__mantissa));
        }
    }
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__sign 
        = ((vlSelf->floatDivTB__DOT__FA__DOT__c1 ^ vlSelf->floatDivTB__DOT__FA__DOT__c1S) 
           >> 0x1fU);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__mantissa = 0U;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent 
        = (0xffU & (((vlSelf->floatDivTB__DOT__FA__DOT__c1 
                      >> 0x17U) + (vlSelf->floatDivTB__DOT__FA__DOT__c1S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1S));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionB))));
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1)) 
         | (0U == (0x7fffffffU & vlSelf->floatDivTB__DOT__FA__DOT__c1S)))) {
        vlSelf->floatDivTB__DOT__FA__DOT__c2Out = 0U;
    } else {
        vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__eout 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent 
                        = vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel12;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel12: ;
        }
        if (vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__eout) {
            vlSelf->floatDivTB__DOT__FA__DOT__c2Out = 0U;
        } else {
            vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatDivTB__DOT__FA__DOT__c2Out 
                = (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__mantissa));
        }
    }
}

void VfloatDivTB___024root___timing_resume(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___timing_resume\n"); );
    // Body
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VfloatDivTB___024root___eval_triggers__act(VfloatDivTB___024root* vlSelf);

bool VfloatDivTB___024root___eval_phase__act(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VfloatDivTB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VfloatDivTB___024root___timing_resume(vlSelf);
        VfloatDivTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VfloatDivTB___024root___eval_phase__nba(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VfloatDivTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__nba(VfloatDivTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__act(VfloatDivTB___024root* vlSelf);
#endif  // VL_DEBUG

void VfloatDivTB___024root___eval(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VfloatDivTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/op/floatDivTB.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VfloatDivTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/op/floatDivTB.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VfloatDivTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VfloatDivTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VfloatDivTB___024root___eval_debug_assertions(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
