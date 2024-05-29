// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = ((vlSelf->A ^ vlSelf->B) >> 0x1fU);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0xffU & (((vlSelf->A >> 0x17U) + (vlSelf->B 
                                             >> 0x17U)) 
                    - (IData)(0x7dU)));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->A));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->B));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB))));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->A)) | (0U == 
                                              (0x7fffffffU 
                                               & vlSelf->B)))) {
        vlSelf->top__DOT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                                       >> (0x3fU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel1;
                }
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->top__DOT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->top__DOT__PE__DOT__mulC = (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                                << 0x1fU) 
                                               | (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa));
        }
    }
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0xffU & (vlSelf->top__DOT__PE__DOT__mulC 
                    >> 0x17U));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0xffU & (vlSelf->C >> 0x17U));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->top__DOT__PE__DOT__mulC));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->C));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->top__DOT__PE__DOT__mulC))) {
        vlSelf->top__DOT__PE__DOT__addC = vlSelf->C;
    } else if ((0U == (0x7fffffffU & vlSelf->C))) {
        vlSelf->top__DOT__PE__DOT__addC = vlSelf->top__DOT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                             - (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA, (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                             - (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB, (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((vlSelf->top__DOT__PE__DOT__mulC >> 0x1fU) 
             == (vlSelf->C >> 0x1fU))) {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & ((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                          + vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (vlSelf->top__DOT__PE__DOT__mulC 
                   >> 0x1fU);
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0xffffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                                + vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB));
            if (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 8U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                                  >> 1U)));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->top__DOT__PE__DOT__mulC >> 0x1fU)) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & ((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                              - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                                    - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA));
            } else {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & ((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                              - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                                    - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB));
            }
            if (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (- vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            } else {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                       >> (0x1fU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel2;
                        }
                        vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
            }
        }
        if (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->top__DOT__PE__DOT__addC = 0U;
        } else {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x7fffffU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction);
            vlSelf->top__DOT__PE__DOT__addC = (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                                << 0x1fU) 
                                               | (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa));
        }
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->C = ((IData)(vlSelf->rst) ? 0U : vlSelf->top__DOT__PE__DOT__addC);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0xffU & (vlSelf->top__DOT__PE__DOT__mulC 
                    >> 0x17U));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0xffU & (vlSelf->C >> 0x17U));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->top__DOT__PE__DOT__mulC));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->C));
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->top__DOT__PE__DOT__mulC))) {
        vlSelf->top__DOT__PE__DOT__addC = vlSelf->C;
    } else if ((0U == (0x7fffffffU & vlSelf->C))) {
        vlSelf->top__DOT__PE__DOT__addC = vlSelf->top__DOT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                             - (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA, (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                             - (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB, (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((vlSelf->top__DOT__PE__DOT__mulC >> 0x1fU) 
             == (vlSelf->C >> 0x1fU))) {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & ((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                          + vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (vlSelf->top__DOT__PE__DOT__mulC 
                   >> 0x1fU);
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0xffffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                                + vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB));
            if (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 8U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                                  >> 1U)));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->top__DOT__PE__DOT__mulC >> 0x1fU)) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & ((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                              - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                                    - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA));
            } else {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & ((vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                              - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                                    - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB));
            }
            if (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (- vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            } else {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                       >> (0x1fU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel3;
                        }
                        vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel3: ;
                }
            }
        }
        if (vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->top__DOT__PE__DOT__addC = 0U;
        } else {
            vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x7fffffU & vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction);
            vlSelf->top__DOT__PE__DOT__addC = (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                                << 0x1fU) 
                                               | (((IData)(vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa));
        }
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
