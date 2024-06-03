// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatRecTB.h for the primary calling header

#include "VfloatRecTB__pch.h"
#include "VfloatRecTB___024root.h"

VlCoroutine VfloatRecTB___024root___eval_initial__TOP__Vtiming__0(VfloatRecTB___024root* vlSelf);
VlCoroutine VfloatRecTB___024root___eval_initial__TOP__Vtiming__1(VfloatRecTB___024root* vlSelf);

void VfloatRecTB___024root___eval_initial(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_initial\n"); );
    // Body
    VfloatRecTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VfloatRecTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
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
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__y4__0 
        = vlSelf->floatRecTB__DOT__FA__DOT__y4;
}

VL_INLINE_OPT VlCoroutine VfloatRecTB___024root___eval_initial__TOP__Vtiming__0(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->floatRecTB__DOT__clk = 1U;
    vlSelf->floatRecTB__DOT__X = 0x3eb0a3d7U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/op/floatRecTB.v", 
                                       23);
    vlSelf->floatRecTB__DOT__X = 0xbefef9dbU;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "vsrc/op/floatRecTB.v", 
                                       26);
    vlSelf->floatRecTB__DOT__X = 0x41b86666U;
    co_await vlSelf->__VdlySched.delay(0x15eULL, nullptr, 
                                       "vsrc/op/floatRecTB.v", 
                                       29);
    VL_WRITEF_NX("Y=%b\n",0,32,vlSelf->floatRecTB__DOT__Y);
    co_await vlSelf->__VdlySched.delay(0x1c2ULL, nullptr, 
                                       "vsrc/op/floatRecTB.v", 
                                       32);
    VL_WRITEF_NX("Y=%b\n",0,32,vlSelf->floatRecTB__DOT__Y);
    co_await vlSelf->__VdlySched.delay(0x226ULL, nullptr, 
                                       "vsrc/op/floatRecTB.v", 
                                       35);
    VL_WRITEF_NX("Y=%b\n",0,32,vlSelf->floatRecTB__DOT__Y);
    VL_FINISH_MT("vsrc/op/floatRecTB.v", 39, "");
}

VL_INLINE_OPT VlCoroutine VfloatRecTB___024root___eval_initial__TOP__Vtiming__1(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "vsrc/op/floatRecTB.v", 
                                           16);
        vlSelf->floatRecTB__DOT__clk = (1U & (~ (IData)(vlSelf->floatRecTB__DOT__clk)));
    }
}

void VfloatRecTB___024root___eval_act(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_act\n"); );
}

void VfloatRecTB___024root___nba_sequent__TOP__0(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_sequent__TOP__1(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_sequent__TOP__2(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_sequent__TOP__3(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_sequent__TOP__4(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_sequent__TOP__5(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_comb__TOP__0(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_comb__TOP__1(VfloatRecTB___024root* vlSelf);
void VfloatRecTB___024root___nba_comb__TOP__2(VfloatRecTB___024root* vlSelf);

void VfloatRecTB___024root___eval_nba(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_nba\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VfloatRecTB___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_sequent__TOP__0(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((0U != vlSelf->floatRecTB__DOT__FA__DOT__y4)) {
        vlSelf->floatRecTB__DOT__Y = ((0x80000000U 
                                       & vlSelf->floatRecTB__DOT__FA__DOT__x4) 
                                      | ((0x7f800000U 
                                          & (((IData)(0xfdU) 
                                              - (vlSelf->floatRecTB__DOT__FA__DOT__x4 
                                                 >> 0x17U)) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & vlSelf->floatRecTB__DOT__FA__DOT__y4)));
    }
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_sequent__TOP__1(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__y2 = vlSelf->floatRecTB__DOT__FA__DOT__y2Out;
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_sequent__TOP__2(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__y3 = vlSelf->floatRecTB__DOT__FA__DOT__y3Out;
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_sequent__TOP__3(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_sequent__TOP__3\n"); );
    // Body
    if ((0U != vlSelf->floatRecTB__DOT__FA__DOT__x1)) {
        vlSelf->floatRecTB__DOT__FA__DOT__y1 = vlSelf->floatRecTB__DOT__FA__DOT__y1Out;
    }
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_sequent__TOP__4(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__D4 = vlSelf->floatRecTB__DOT__FA__DOT__D3;
    vlSelf->floatRecTB__DOT__FA__DOT__x4 = vlSelf->floatRecTB__DOT__FA__DOT__x3;
    vlSelf->floatRecTB__DOT__FA__DOT__D3 = vlSelf->floatRecTB__DOT__FA__DOT__D2;
    vlSelf->floatRecTB__DOT__FA__DOT__x3 = vlSelf->floatRecTB__DOT__FA__DOT__x2;
    vlSelf->floatRecTB__DOT__FA__DOT__D2 = vlSelf->floatRecTB__DOT__FA__DOT__D1;
    vlSelf->floatRecTB__DOT__FA__DOT__x2 = vlSelf->floatRecTB__DOT__FA__DOT__x1;
    vlSelf->floatRecTB__DOT__FA__DOT__D1 = (0x3f000000U 
                                            | (0x7fffffU 
                                               & vlSelf->floatRecTB__DOT__X));
    vlSelf->floatRecTB__DOT__FA__DOT__x1 = vlSelf->floatRecTB__DOT__X;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__sign 
        = (1U & (~ (vlSelf->floatRecTB__DOT__FA__DOT__D1 
                    >> 0x1fU)));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent 
        = (0xffU & ((IData)(2U) + (vlSelf->floatRecTB__DOT__FA__DOT__D1 
                                   >> 0x17U)));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionA = 0xf0f0f1U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__D1));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction 
        = (0xffffffffffffULL & (0xf0f0f1ULL * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__D1))) {
        vlSelf->floatRecTB__DOT__FA__DOT__P2D = 0U;
    } else {
        vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel1;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__P2D = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatRecTB__DOT__FA__DOT__P2D = 
                (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent) 
                                << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa));
        }
    }
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA 
        = (0xffU & (vlSelf->floatRecTB__DOT__FA__DOT__P2D 
                    >> 0x17U));
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__P2D));
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB = 0xb4b4b5U;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent 
        = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__P2D))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y1Out = 0x4034b4b5U;
    } else {
        if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB) 
             > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA))) {
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA)));
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB))) {
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB)));
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA;
        }
        if ((vlSelf->floatRecTB__DOT__FA__DOT__P2D 
             >> 0x1fU)) {
            if ((vlSelf->floatRecTB__DOT__FA__DOT__P2D 
                 >> 0x1fU)) {
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout 
                    = (1U & ((vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB 
                              - vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB 
                                    - vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA));
            } else {
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout 
                    = (1U & ((vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA 
                              - vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA 
                                    - vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB));
            }
            if (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout) {
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign = 1U;
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction));
            } else {
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout 
                                = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent 
                                = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel2;
                        }
                        vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
            }
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout 
                = (1U & ((vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA 
                          + vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                = (0xffffffU & (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA 
                                + vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB));
            if (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout) {
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout 
                    = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction 
                    = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h77554df9__0;
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent)));
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout 
                    = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent 
                    = vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h704b029f__0;
            }
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign 
                = (vlSelf->floatRecTB__DOT__FA__DOT__P2D 
                   >> 0x1fU);
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y1Out = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction);
            vlSelf->floatRecTB__DOT__FA__DOT__y1Out 
                = (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_sequent__TOP__5(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__y4 = vlSelf->floatRecTB__DOT__FA__DOT__y4Out;
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_comb__TOP__0(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__sign 
        = ((vlSelf->floatRecTB__DOT__FA__DOT__y3 ^ vlSelf->floatRecTB__DOT__FA__DOT__D4) 
           >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent 
        = (0xffU & (((vlSelf->floatRecTB__DOT__FA__DOT__y3 
                      >> 0x17U) + (vlSelf->floatRecTB__DOT__FA__DOT__D4 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__D4));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3)) 
         | (0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__D4)))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y3D = 0U;
    } else {
        vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout 
                        = vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent 
                        = vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel3;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel3: ;
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y3D = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatRecTB__DOT__FA__DOT__y3D = 
                (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent) 
                                << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa));
        }
    }
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB 
        = (0xffU & (vlSelf->floatRecTB__DOT__FA__DOT__y3D 
                    >> 0x17U));
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA = 0x800000U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3D));
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__cout = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3D))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y3S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB) 
             > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB;
        } else if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA) 
                    > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA;
        }
        vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__cout 
            = (1U & ((vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA 
                      - vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction 
            = (0xffffffU & (vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA 
                            - vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB));
        if (vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__cout) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign = 1U;
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction 
                = (0xffffffU & (- vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction));
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction 
                                   >> (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__eout 
                            = vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent 
                            = vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel4;
                    }
                    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel4: ;
            }
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y3S = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction);
            vlSelf->floatRecTB__DOT__FA__DOT__y3S = 
                (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent) 
                                << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa));
        }
    }
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__sign 
        = ((vlSelf->floatRecTB__DOT__FA__DOT__y3 ^ vlSelf->floatRecTB__DOT__FA__DOT__y3S) 
           >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent 
        = (0xffU & (((vlSelf->floatRecTB__DOT__FA__DOT__y3 
                      >> 0x17U) + (vlSelf->floatRecTB__DOT__FA__DOT__y3S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3S));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3)) 
         | (0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3S)))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y4Out = 0U;
    } else {
        vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__eout 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel5;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel5: ;
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y4Out = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatRecTB__DOT__FA__DOT__y4Out 
                = (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_comb__TOP__1(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__sign 
        = ((vlSelf->floatRecTB__DOT__FA__DOT__y2 ^ vlSelf->floatRecTB__DOT__FA__DOT__D3) 
           >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent 
        = (0xffU & (((vlSelf->floatRecTB__DOT__FA__DOT__y2 
                      >> 0x17U) + (vlSelf->floatRecTB__DOT__FA__DOT__D3 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__D3));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2)) 
         | (0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__D3)))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y2D = 0U;
    } else {
        vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout 
                        = vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent 
                        = vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel6;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel6: ;
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y2D = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatRecTB__DOT__FA__DOT__y2D = 
                (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent) 
                                << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa));
        }
    }
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB 
        = (0xffU & (vlSelf->floatRecTB__DOT__FA__DOT__y2D 
                    >> 0x17U));
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA = 0x800000U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2D));
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__cout = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2D))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y2S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB) 
             > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB;
        } else if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA) 
                    > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA;
        }
        vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__cout 
            = (1U & ((vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA 
                      - vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction 
            = (0xffffffU & (vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA 
                            - vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB));
        if (vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__cout) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign = 1U;
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction 
                = (0xffffffU & (- vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction));
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction 
                                   >> (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__eout 
                            = vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent 
                            = vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel7;
                    }
                    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel7: ;
            }
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y2S = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction);
            vlSelf->floatRecTB__DOT__FA__DOT__y2S = 
                (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent) 
                                << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa));
        }
    }
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__sign 
        = ((vlSelf->floatRecTB__DOT__FA__DOT__y2 ^ vlSelf->floatRecTB__DOT__FA__DOT__y2S) 
           >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent 
        = (0xffU & (((vlSelf->floatRecTB__DOT__FA__DOT__y2 
                      >> 0x17U) + (vlSelf->floatRecTB__DOT__FA__DOT__y2S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2S));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2)) 
         | (0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2S)))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y3Out = 0U;
    } else {
        vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__eout 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel8;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel8: ;
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y3Out = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatRecTB__DOT__FA__DOT__y3Out 
                = (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VfloatRecTB___024root___nba_comb__TOP__2(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__sign 
        = ((vlSelf->floatRecTB__DOT__FA__DOT__y1 ^ vlSelf->floatRecTB__DOT__FA__DOT__D2) 
           >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent 
        = (0xffU & (((vlSelf->floatRecTB__DOT__FA__DOT__y1 
                      >> 0x17U) + (vlSelf->floatRecTB__DOT__FA__DOT__D2 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__D2));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1)) 
         | (0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__D2)))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y1D = 0U;
    } else {
        vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout 
                        = vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent 
                        = vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel9;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel9: ;
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y1D = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatRecTB__DOT__FA__DOT__y1D = 
                (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent) 
                                << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB 
        = (0xffU & (vlSelf->floatRecTB__DOT__FA__DOT__y1D 
                    >> 0x17U));
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA = 0x800000U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1D));
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__cout = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1D))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y1S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB) 
             > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB;
        } else if (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA) 
                    > (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA) 
                             - (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB, (IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount)));
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent 
                = vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA;
        }
        vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__cout 
            = (1U & ((vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA 
                      - vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction 
            = (0xffffffU & (vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA 
                            - vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB));
        if (vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__cout) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign = 1U;
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction 
                = (0xffffffU & (- vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction));
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction 
                                   >> (0x1fU & vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i)));
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__eout 
                            = vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent 
                            = vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel10;
                    }
                    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel10: ;
            }
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y1S = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa 
                = (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction);
            vlSelf->floatRecTB__DOT__FA__DOT__y1S = 
                (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign) 
                  << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent) 
                                << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa));
        }
    }
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__sign 
        = ((vlSelf->floatRecTB__DOT__FA__DOT__y1 ^ vlSelf->floatRecTB__DOT__FA__DOT__y1S) 
           >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent 
        = (0xffU & (((vlSelf->floatRecTB__DOT__FA__DOT__y1 
                      >> 0x17U) + (vlSelf->floatRecTB__DOT__FA__DOT__y1S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1S));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1)) 
         | (0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1S)))) {
        vlSelf->floatRecTB__DOT__FA__DOT__y2Out = 0U;
    } else {
        vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction 
                                       >> (0x3fU & vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__eout 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent 
                        = vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel11;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel11: ;
        }
        if (vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__eout) {
            vlSelf->floatRecTB__DOT__FA__DOT__y2Out = 0U;
        } else {
            vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->floatRecTB__DOT__FA__DOT__y2Out 
                = (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent) 
                                  << 0x17U) | vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa));
        }
    }
}

void VfloatRecTB___024root___timing_resume(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___timing_resume\n"); );
    // Body
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VfloatRecTB___024root___eval_triggers__act(VfloatRecTB___024root* vlSelf);

bool VfloatRecTB___024root___eval_phase__act(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VfloatRecTB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VfloatRecTB___024root___timing_resume(vlSelf);
        VfloatRecTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VfloatRecTB___024root___eval_phase__nba(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VfloatRecTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatRecTB___024root___dump_triggers__nba(VfloatRecTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatRecTB___024root___dump_triggers__act(VfloatRecTB___024root* vlSelf);
#endif  // VL_DEBUG

void VfloatRecTB___024root___eval(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VfloatRecTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/op/floatRecTB.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VfloatRecTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/op/floatRecTB.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VfloatRecTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VfloatRecTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VfloatRecTB___024root___eval_debug_assertions(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
