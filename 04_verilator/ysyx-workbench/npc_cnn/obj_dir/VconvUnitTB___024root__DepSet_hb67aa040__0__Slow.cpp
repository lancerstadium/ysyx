// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvUnitTB.h for the primary calling header

#include "VconvUnitTB__pch.h"
#include "VconvUnitTB___024root.h"

VL_ATTR_COLD void VconvUnitTB___024root___eval_static(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VconvUnitTB___024root___eval_final(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__stl(VconvUnitTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VconvUnitTB___024root___eval_phase__stl(VconvUnitTB___024root* vlSelf);

VL_ATTR_COLD void VconvUnitTB___024root___eval_settle(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_settle\n"); );
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
            VconvUnitTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/convUnitTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VconvUnitTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__stl(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvUnitTB___024root___stl_sequent__TOP__0(VconvUnitTB___024root* vlSelf);

VL_ATTR_COLD void VconvUnitTB___024root___eval_stl(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VconvUnitTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VconvUnitTB___024root___stl_sequent__TOP__0(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInA) 
                  ^ (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInB)) 
                 >> 0xfU));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInA)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInB)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__selInB))))) {
        vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel1;
                }
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC 
                = (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                    << 0xfU) | (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                 << 0xaU) | (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->convUnitTB__DOT__res) 
                    >> 0xaU));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->convUnitTB__DOT__res)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC)))) {
        vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC 
            = vlSelf->convUnitTB__DOT__res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->convUnitTB__DOT__res)))) {
        vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC 
            = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->convUnitTB__DOT__res) 
                                        >> 0xfU)))) {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC))) {
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel2;
                        }
                        vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
            }
        }
        if (vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC = 0U;
        } else {
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC 
                = (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                    << 0xfU) | (((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                 << 0xaU) | (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_ATTR_COLD void VconvUnitTB___024root___eval_triggers__stl(VconvUnitTB___024root* vlSelf);

VL_ATTR_COLD bool VconvUnitTB___024root___eval_phase__stl(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VconvUnitTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VconvUnitTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__act(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge convUnitTB.clk or posedge convUnitTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__nba(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge convUnitTB.clk or posedge convUnitTB.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VconvUnitTB___024root___ctor_var_reset(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->convUnitTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(400, vlSelf->convUnitTB__DOT__img);
    VL_RAND_RESET_W(400, vlSelf->convUnitTB__DOT__fit);
    vlSelf->convUnitTB__DOT__res = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__selInA = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__selInB = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC = VL_RAND_RESET_I(16);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent = VL_RAND_RESET_I(5);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 = VL_RAND_RESET_I(5);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent = VL_RAND_RESET_I(5);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = VL_RAND_RESET_I(6);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 = VL_RAND_RESET_I(11);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 = VL_RAND_RESET_I(5);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 = VL_RAND_RESET_I(1);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 = VL_RAND_RESET_I(5);
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
