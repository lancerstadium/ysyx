// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VexponentTB.h for the primary calling header

#include "VexponentTB__pch.h"
#include "VexponentTB___024root.h"

VlCoroutine VexponentTB___024root___eval_initial__TOP__Vtiming__0(VexponentTB___024root* vlSelf);
VlCoroutine VexponentTB___024root___eval_initial__TOP__Vtiming__1(VexponentTB___024root* vlSelf);

void VexponentTB___024root___eval_initial(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_initial\n"); );
    // Body
    VexponentTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VexponentTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exponentTB__DOT__clk__0 
        = vlSelf->exponentTB__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VexponentTB___024root___eval_initial__TOP__Vtiming__0(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exponentTB__DOT__clk = 1U;
    vlSelf->exponentTB__DOT__X = 0x3f566cf4U;
    vlSelf->exponentTB__DOT__enb = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/func/exponentTB.v", 
                                       18);
    vlSelf->exponentTB__DOT__enb = 1U;
    while ((1U & (~ (IData)(vlSelf->exponentTB__DOT__ack)))) {
        co_await vlSelf->__VdlySched.delay(0x64ULL, 
                                           nullptr, 
                                           "vsrc/func/exponentTB.v", 
                                           21);
    }
    VL_WRITEF_NX("y=%b\n",0,32,vlSelf->exponentTB__DOT__Y);
    vlSelf->exponentTB__DOT__X = 0xbf75c28fU;
    vlSelf->exponentTB__DOT__enb = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/func/exponentTB.v", 
                                       27);
    vlSelf->exponentTB__DOT__enb = 1U;
    while ((1U & (~ (IData)(vlSelf->exponentTB__DOT__ack)))) {
        co_await vlSelf->__VdlySched.delay(0x64ULL, 
                                           nullptr, 
                                           "vsrc/func/exponentTB.v", 
                                           30);
    }
    VL_FINISH_MT("vsrc/func/exponentTB.v", 33, "");
}

VL_INLINE_OPT VlCoroutine VexponentTB___024root___eval_initial__TOP__Vtiming__1(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "vsrc/func/exponentTB.v", 
                                           12);
        vlSelf->exponentTB__DOT__clk = (1U & (~ (IData)(vlSelf->exponentTB__DOT__clk)));
    }
}

void VexponentTB___024root___eval_act(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_act\n"); );
}

void VexponentTB___024root___nba_sequent__TOP__0(VexponentTB___024root* vlSelf);

void VexponentTB___024root___eval_nba(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VexponentTB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VexponentTB___024root___nba_sequent__TOP__0(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSelf->exponentTB__DOT__enb) {
        vlSelf->exponentTB__DOT__exp__DOT__outReg = vlSelf->exponentTB__DOT__exp__DOT__outA1;
        vlSelf->exponentTB__DOT__exp__DOT__oneOrX = vlSelf->exponentTB__DOT__X;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->exponentTB__DOT__exp__DOT__divisors, 0x20U);
        vlSelf->exponentTB__DOT__exp__DOT__divisors[0U] 
            = __Vtemp_1[0U];
        vlSelf->exponentTB__DOT__exp__DOT__divisors[1U] 
            = __Vtemp_1[1U];
        vlSelf->exponentTB__DOT__exp__DOT__divisors[2U] 
            = __Vtemp_1[2U];
        vlSelf->exponentTB__DOT__exp__DOT__divisors[3U] 
            = __Vtemp_1[3U];
        vlSelf->exponentTB__DOT__exp__DOT__divisors[4U] 
            = __Vtemp_1[4U];
        vlSelf->exponentTB__DOT__exp__DOT__divisors[5U] 
            = __Vtemp_1[5U];
        vlSelf->exponentTB__DOT__exp__DOT__divisors[6U] 
            = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->exponentTB__DOT__exp__DOT__divisors[0U] 
                         | vlSelf->exponentTB__DOT__exp__DOT__divisors[1U]) 
                        | vlSelf->exponentTB__DOT__exp__DOT__divisors[2U]) 
                       | vlSelf->exponentTB__DOT__exp__DOT__divisors[3U]) 
                      | vlSelf->exponentTB__DOT__exp__DOT__divisors[4U]) 
                     | vlSelf->exponentTB__DOT__exp__DOT__divisors[5U]) 
                    | vlSelf->exponentTB__DOT__exp__DOT__divisors[6U]))) {
            vlSelf->exponentTB__DOT__Y = vlSelf->exponentTB__DOT__exp__DOT__outA1;
            vlSelf->exponentTB__DOT__ack = 1U;
        }
        vlSelf->exponentTB__DOT__exp__DOT__mulA = vlSelf->exponentTB__DOT__exp__DOT__outM2;
    } else {
        vlSelf->exponentTB__DOT__exp__DOT__outReg = 0U;
        vlSelf->exponentTB__DOT__exp__DOT__oneOrX = 0x3f800000U;
        vlSelf->exponentTB__DOT__Y = 0U;
        vlSelf->exponentTB__DOT__ack = 0U;
        vlSelf->exponentTB__DOT__exp__DOT__divisors[0U] = 0x3f800000U;
        vlSelf->exponentTB__DOT__exp__DOT__divisors[1U] = 0x3f800000U;
        vlSelf->exponentTB__DOT__exp__DOT__divisors[2U] = 0x3f000000U;
        vlSelf->exponentTB__DOT__exp__DOT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->exponentTB__DOT__exp__DOT__divisors[4U] = 0x3e800000U;
        vlSelf->exponentTB__DOT__exp__DOT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->exponentTB__DOT__exp__DOT__divisors[6U] = 0x3e2aaaabU;
        vlSelf->exponentTB__DOT__exp__DOT__mulA = 0x3f800000U;
    }
    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__sign 
        = ((vlSelf->exponentTB__DOT__exp__DOT__mulA 
            ^ vlSelf->exponentTB__DOT__exp__DOT__oneOrX) 
           >> 0x1fU);
    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__mantissa = 0U;
    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__exponent 
        = (0xffU & (((vlSelf->exponentTB__DOT__exp__DOT__mulA 
                      >> 0x17U) + (vlSelf->exponentTB__DOT__exp__DOT__oneOrX 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->exponentTB__DOT__exp__DOT__mulA));
    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->exponentTB__DOT__exp__DOT__oneOrX));
    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fractionB))));
    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->exponentTB__DOT__exp__DOT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->exponentTB__DOT__exp__DOT__oneOrX)))) {
        vlSelf->exponentTB__DOT__exp__DOT__outM1 = 0U;
    } else {
        vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__eout 
                        = vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__exponent 
                        = vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel1;
                }
                vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__eout) {
            vlSelf->exponentTB__DOT__exp__DOT__outM1 = 0U;
        } else {
            vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->exponentTB__DOT__exp__DOT__outM1 
                = (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__exponent) 
                                  << 0x17U) | vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__sign 
        = ((vlSelf->exponentTB__DOT__exp__DOT__outM1 
            ^ vlSelf->exponentTB__DOT__exp__DOT__divisors[0U]) 
           >> 0x1fU);
    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__mantissa = 0U;
    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__exponent 
        = (0xffU & (((vlSelf->exponentTB__DOT__exp__DOT__outM1 
                      >> 0x17U) + ((vlSelf->exponentTB__DOT__exp__DOT__divisors[0U] 
                                    << 9U) | (vlSelf->exponentTB__DOT__exp__DOT__divisors[0U] 
                                              >> 0x17U))) 
                    - (IData)(0x7dU)));
    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->exponentTB__DOT__exp__DOT__outM1));
    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->exponentTB__DOT__exp__DOT__divisors[0U]));
    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fractionB))));
    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->exponentTB__DOT__exp__DOT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->exponentTB__DOT__exp__DOT__divisors[0U])))) {
        vlSelf->exponentTB__DOT__exp__DOT__outM2 = 0U;
    } else {
        vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__eout 
                        = vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__exponent 
                        = vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel2;
                }
                vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
        if (vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__eout) {
            vlSelf->exponentTB__DOT__exp__DOT__outM2 = 0U;
        } else {
            vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->exponentTB__DOT__exp__DOT__outM2 
                = (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__exponent) 
                                  << 0x17U) | vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__sign = 0U;
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__mantissa = 0U;
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA 
        = (0xffU & (vlSelf->exponentTB__DOT__exp__DOT__outM2 
                    >> 0x17U));
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB 
        = (0xffU & (vlSelf->exponentTB__DOT__exp__DOT__outReg 
                    >> 0x17U));
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->exponentTB__DOT__exp__DOT__outM2));
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->exponentTB__DOT__exp__DOT__outReg));
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent 
        = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA;
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction = 0U;
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout = 0U;
    vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->exponentTB__DOT__exp__DOT__outM2))) {
        vlSelf->exponentTB__DOT__exp__DOT__outA1 = vlSelf->exponentTB__DOT__exp__DOT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->exponentTB__DOT__exp__DOT__outReg))) {
        vlSelf->exponentTB__DOT__exp__DOT__outA1 = vlSelf->exponentTB__DOT__exp__DOT__outM2;
    } else {
        if (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA))) {
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA)));
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA, (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__shiftAmount)));
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent 
                = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB))) {
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB)));
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB, (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__shiftAmount)));
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent 
                = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent 
                = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->exponentTB__DOT__exp__DOT__outM2 
              >> 0x1fU) == (vlSelf->exponentTB__DOT__exp__DOT__outReg 
                            >> 0x1fU))) {
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout 
                = (1U & ((vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA 
                          + vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__sign 
                = (vlSelf->exponentTB__DOT__exp__DOT__outM2 
                   >> 0x1fU);
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                = (0xffffffU & (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA 
                                + vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB));
            if (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout) {
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent)));
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__eout 
                    = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout 
                    = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent 
                    = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                    = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->exponentTB__DOT__exp__DOT__outM2 
                 >> 0x1fU)) {
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout 
                    = (1U & ((vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB 
                              - vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB 
                                    - vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout 
                    = (1U & ((vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA 
                              - vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA 
                                    - vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout) {
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__sign = 1U;
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction));
            } else {
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__eout 
                                = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent 
                                = vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel3;
                        }
                        vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel3: ;
                }
            }
        }
        if (vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__eout) {
            vlSelf->exponentTB__DOT__exp__DOT__outA1 = 0U;
        } else {
            vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__mantissa 
                = (0x7fffffU & vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction);
            vlSelf->exponentTB__DOT__exp__DOT__outA1 
                = (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent) 
                                  << 0x17U) | vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__mantissa));
        }
    }
}

void VexponentTB___024root___timing_resume(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VexponentTB___024root___eval_triggers__act(VexponentTB___024root* vlSelf);

bool VexponentTB___024root___eval_phase__act(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VexponentTB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VexponentTB___024root___timing_resume(vlSelf);
        VexponentTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VexponentTB___024root___eval_phase__nba(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VexponentTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VexponentTB___024root___dump_triggers__nba(VexponentTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VexponentTB___024root___dump_triggers__act(VexponentTB___024root* vlSelf);
#endif  // VL_DEBUG

void VexponentTB___024root___eval(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VexponentTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/func/exponentTB.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VexponentTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/func/exponentTB.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VexponentTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VexponentTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VexponentTB___024root___eval_debug_assertions(VexponentTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
