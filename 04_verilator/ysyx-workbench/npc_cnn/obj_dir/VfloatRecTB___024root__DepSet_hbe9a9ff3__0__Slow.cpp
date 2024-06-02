// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfloatRecTB.h for the primary calling header

#include "VfloatRecTB__pch.h"
#include "VfloatRecTB___024root.h"

VL_ATTR_COLD void VfloatRecTB___024root___eval_static(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VfloatRecTB___024root___eval_final(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatRecTB___024root___dump_triggers__stl(VfloatRecTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VfloatRecTB___024root___eval_phase__stl(VfloatRecTB___024root* vlSelf);

VL_ATTR_COLD void VfloatRecTB___024root___eval_settle(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_settle\n"); );
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
            VfloatRecTB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/op/floatRecTB.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VfloatRecTB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatRecTB___024root___dump_triggers__stl(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VfloatRecTB___024root___stl_sequent__TOP__0(VfloatRecTB___024root* vlSelf);

VL_ATTR_COLD void VfloatRecTB___024root___eval_stl(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VfloatRecTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VfloatRecTB___024root___stl_sequent__TOP__0(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__sign = 1U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent = 0x80U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionA = 0xf0f0f1U;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction 
        = (0xffffffffffffULL & (0xf0f0f1ULL * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout = 0U;
    if ((0U == (0x3f000000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X)))) {
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
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__sign 
        = (vlSelf->floatRecTB__DOT__FA__DOT__y1 >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent 
        = (0xffU & ((IData)(1U) + (vlSelf->floatRecTB__DOT__FA__DOT__y1 
                                   >> 0x17U)));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y1)) 
         | (0U == (0x3f000000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X))))) {
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
                    goto __Vlabel2;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel2: ;
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
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__sign 
        = (vlSelf->floatRecTB__DOT__FA__DOT__y2 >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent 
        = (0xffU & ((IData)(1U) + (vlSelf->floatRecTB__DOT__FA__DOT__y2 
                                   >> 0x17U)));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y2)) 
         | (0U == (0x3f000000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X))))) {
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
                    goto __Vlabel3;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel3: ;
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
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__sign 
        = (vlSelf->floatRecTB__DOT__FA__DOT__y3 >> 0x1fU);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa = 0U;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent 
        = (0xffU & ((IData)(1U) + (vlSelf->floatRecTB__DOT__FA__DOT__y3 
                                   >> 0x17U)));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB))));
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->floatRecTB__DOT__FA__DOT__y3)) 
         | (0U == (0x3f000000U | (0x7fffffU & vlSelf->floatRecTB__DOT__X))))) {
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
                    goto __Vlabel4;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel4: ;
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
                            goto __Vlabel5;
                        }
                        vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel5: ;
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
                        goto __Vlabel6;
                    }
                    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel6: ;
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
                        goto __Vlabel8;
                    }
                    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel8: ;
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
                    goto __Vlabel9;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel9: ;
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
                    goto __Vlabel10;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel10: ;
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
                    goto __Vlabel11;
                }
                vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel11: ;
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

VL_ATTR_COLD void VfloatRecTB___024root___eval_triggers__stl(VfloatRecTB___024root* vlSelf);

VL_ATTR_COLD bool VfloatRecTB___024root___eval_phase__stl(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VfloatRecTB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VfloatRecTB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatRecTB___024root___dump_triggers__act(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge floatRecTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] floatRecTB.FA.x1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] floatRecTB.FA.x2)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] floatRecTB.FA.x3)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] floatRecTB.FA.x4)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] floatRecTB.FA.x4 or negedge floatRecTB.clk)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VfloatRecTB___024root___dump_triggers__nba(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge floatRecTB.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] floatRecTB.FA.x1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] floatRecTB.FA.x2)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] floatRecTB.FA.x3)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] floatRecTB.FA.x4)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] floatRecTB.FA.x4 or negedge floatRecTB.clk)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VfloatRecTB___024root___ctor_var_reset(VfloatRecTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->floatRecTB__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__X = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__Y = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__P2D = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y1 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__x1 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y1Out = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y1D = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y1S = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__x2 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y2 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y2Out = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y2D = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y2S = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__x3 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y3 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y3Out = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y3D = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y3S = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__x4 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y4 = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__y4Out = VL_RAND_RESET_I(32);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h9ec70323__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h77554df9__0 = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h63e25442__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h704b029f__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount = VL_RAND_RESET_I(9);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h5ec2525e__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h87dcad21__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction = VL_RAND_RESET_Q(48);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionA = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionB = VL_RAND_RESET_I(24);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__eout = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h2e833972__0 = VL_RAND_RESET_I(1);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h3095d3f1__0 = VL_RAND_RESET_I(8);
    vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x2__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x3__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__floatRecTB__DOT__FA__DOT__x4__0 = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
