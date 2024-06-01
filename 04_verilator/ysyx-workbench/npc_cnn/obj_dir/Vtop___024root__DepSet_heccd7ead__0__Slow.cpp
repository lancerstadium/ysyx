// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(32);
    vlSelf->B = VL_RAND_RESET_I(32);
    vlSelf->C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PE__DOT__mulC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PE__DOT__addC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
