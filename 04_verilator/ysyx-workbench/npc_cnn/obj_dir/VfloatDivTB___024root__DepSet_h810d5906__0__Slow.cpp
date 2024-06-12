// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatDivTB.h for the primary calling header

#include "VfloatDivTB__pch.h"
#include "VfloatDivTB___024root.h"

VL_ATTR_COLD void VfloatDivTB___024root___eval_static(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VfloatDivTB___024root___eval_final(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__stl(VfloatDivTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VfloatDivTB___024root___eval_phase__stl(VfloatDivTB___024root* vlSelf);

VL_ATTR_COLD void VfloatDivTB___024root___eval_settle(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_settle\n"); );
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
            VfloatDivTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/op/floatDivTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VfloatDivTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__stl(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VfloatDivTB___024root___stl_sequent__TOP__0(VfloatDivTB___024root* vlSelf);

VL_ATTR_COLD void VfloatDivTB___024root___eval_stl(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VfloatDivTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VfloatDivTB___024root___stl_sequent__TOP__0(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___stl_sequent__TOP__0\n"); );
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
                    goto __Vlabel1;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
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
                    goto __Vlabel2;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel2: ;
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
                    goto __Vlabel3;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel3: ;
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
                    goto __Vlabel5;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel5: ;
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
                            goto __Vlabel6;
                        }
                        vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel6: ;
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
                        goto __Vlabel7;
                    }
                    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel7: ;
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
                        goto __Vlabel8;
                    }
                    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel8: ;
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
                        goto __Vlabel9;
                    }
                    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel9: ;
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
                    goto __Vlabel10;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel10: ;
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
                    goto __Vlabel11;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel11: ;
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
                    goto __Vlabel12;
                }
                vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel12: ;
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

VL_ATTR_COLD void VfloatDivTB___024root___eval_triggers__stl(VfloatDivTB___024root* vlSelf);

VL_ATTR_COLD bool VfloatDivTB___024root___eval_phase__stl(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VfloatDivTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VfloatDivTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__act(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge floatDivTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] floatDivTB.FA.a1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] floatDivTB.FA.a2)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] floatDivTB.FA.a3)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] floatDivTB.FA.a4)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] floatDivTB.FA.aFinal)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatDivTB___024root___dump_triggers__nba(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge floatDivTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] floatDivTB.FA.a1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] floatDivTB.FA.a2)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] floatDivTB.FA.a3)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] floatDivTB.FA.a4)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] floatDivTB.FA.aFinal)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VfloatDivTB___024root___ctor_var_reset(VfloatDivTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->floatDivTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__enb = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__C32 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__signal = VL_RAND_RESET_I(4);
    vlSelf->floatDivTB__DOT__FA__DOT__P2D = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c1 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__a1 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c1Out = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__D1 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c1D = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c1S = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__a2 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__b2 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c2 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c2Out = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__D2 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c2D = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c2S = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__a3 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__b3 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c3 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c3Out = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__D3 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c3D = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c3S = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__a4 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__b4 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c4 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__c4Out = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__D4 = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__cFinal = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__aFinal = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__bFinal = VL_RAND_RESET_I(32);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a2__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a3__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a4__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__aFinal__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
