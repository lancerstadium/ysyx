// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VprocElemTB.h for the primary calling header

#include "VprocElemTB__pch.h"
#include "VprocElemTB___024root.h"

VL_ATTR_COLD void VprocElemTB___024root___eval_static(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VprocElemTB___024root___eval_final(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VprocElemTB___024root___dump_triggers__stl(VprocElemTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VprocElemTB___024root___eval_phase__stl(VprocElemTB___024root* vlSelf);

VL_ATTR_COLD void VprocElemTB___024root___eval_settle(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_settle\n"); );
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
            VprocElemTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/procElemTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VprocElemTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VprocElemTB___024root___dump_triggers__stl(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VprocElemTB___024root___stl_sequent__TOP__0(VprocElemTB___024root* vlSelf);

VL_ATTR_COLD void VprocElemTB___024root___eval_stl(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VprocElemTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VprocElemTB___024root___stl_sequent__TOP__0(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = ((vlSelf->procElemTB__DOT__A ^ vlSelf->procElemTB__DOT__B) 
           >> 0x1fU);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0xffU & (((vlSelf->procElemTB__DOT__A >> 0x17U) 
                     + (vlSelf->procElemTB__DOT__B 
                        >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->procElemTB__DOT__A));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->procElemTB__DOT__B));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB))));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->procElemTB__DOT__A)) 
         | (0U == (0x7fffffffU & vlSelf->procElemTB__DOT__B)))) {
        vlSelf->procElemTB__DOT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                                       >> (0x3fU & vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel1;
                }
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->procElemTB__DOT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->procElemTB__DOT__PE__DOT__mulC 
                = (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  << 0x17U) | vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa));
        }
    }
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0xffU & (vlSelf->procElemTB__DOT__PE__DOT__mulC 
                    >> 0x17U));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0xffU & (vlSelf->procElemTB__DOT__C >> 0x17U));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->procElemTB__DOT__PE__DOT__mulC));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->procElemTB__DOT__C));
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->procElemTB__DOT__PE__DOT__mulC))) {
        vlSelf->procElemTB__DOT__PE__DOT__addC = vlSelf->procElemTB__DOT__C;
    } else if ((0U == (0x7fffffffU & vlSelf->procElemTB__DOT__C))) {
        vlSelf->procElemTB__DOT__PE__DOT__addC = vlSelf->procElemTB__DOT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                             - (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA, (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                             - (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB, (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((vlSelf->procElemTB__DOT__PE__DOT__mulC 
              >> 0x1fU) == (vlSelf->procElemTB__DOT__C 
                            >> 0x1fU))) {
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & ((vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                          + vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (vlSelf->procElemTB__DOT__PE__DOT__mulC 
                   >> 0x1fU);
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0xffffffU & (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                                + vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB));
            if (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 8U));
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                                  >> 1U)));
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->procElemTB__DOT__PE__DOT__mulC 
                 >> 0x1fU)) {
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & ((vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                              - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                                    - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA));
            } else {
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & ((vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                              - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                                    - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB));
            }
            if (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0xffffffU & (- vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            } else {
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                       >> (0x1fU & vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel2;
                        }
                        vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
            }
        }
        if (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->procElemTB__DOT__PE__DOT__addC = 0U;
        } else {
            vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x7fffffU & vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction);
            vlSelf->procElemTB__DOT__PE__DOT__addC 
                = (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                  << 0x17U) | vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa));
        }
    }
}

VL_ATTR_COLD void VprocElemTB___024root___eval_triggers__stl(VprocElemTB___024root* vlSelf);

VL_ATTR_COLD bool VprocElemTB___024root___eval_phase__stl(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VprocElemTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VprocElemTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VprocElemTB___024root___dump_triggers__act(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge procElemTB.clk or posedge procElemTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VprocElemTB___024root___dump_triggers__nba(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge procElemTB.clk or posedge procElemTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VprocElemTB___024root___ctor_var_reset(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->procElemTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->procElemTB__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->procElemTB__DOT__R = VL_RAND_RESET_I(32);
    vlSelf->procElemTB__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->procElemTB__DOT__PE__DOT__mulC = VL_RAND_RESET_I(32);
    vlSelf->procElemTB__DOT__PE__DOT__addC = VL_RAND_RESET_I(32);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
