// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsoftmaxTB.h for the primary calling header

#include "VsoftmaxTB__pch.h"
#include "VsoftmaxTB__Syms.h"
#include "VsoftmaxTB_exponent.h"

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[0U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel1;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel2;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel3;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel3: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[1U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel4;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel4: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel5;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel5: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel6;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel6: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[2U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel7;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel7: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel8;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel8: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel9;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel9: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[3U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel10;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel11;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel11: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel12;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel12: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[4U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel13;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel13: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel14;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel14: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel15;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel15: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[5U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel16;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel16: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel17;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel17: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel18;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel18: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[6U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel19;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel19: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel20;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel20: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel21;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel21: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[7U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel22;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel22: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel23;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel23: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel24;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel24: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[8U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel25;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel25: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel26;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel26: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel27;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel27: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VsoftmaxTB_exponent___nba_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    if (vlSymsp->TOP.softmaxTB__DOT__enable) {
        vlSelf->__PVT__outReg = vlSelf->__PVT__outA1;
        vlSelf->__PVT__oneOrX = vlSymsp->TOP.softmaxTB__DOT__inputs[9U];
        vlSelf->__PVT__mulA = vlSelf->__PVT__outM2;
        VL_SHIFTR_WWI(224,224,32, __Vtemp_1, vlSelf->__PVT__divisors, 0x20U);
        vlSelf->__PVT__divisors[0U] = __Vtemp_1[0U];
        vlSelf->__PVT__divisors[1U] = __Vtemp_1[1U];
        vlSelf->__PVT__divisors[2U] = __Vtemp_1[2U];
        vlSelf->__PVT__divisors[3U] = __Vtemp_1[3U];
        vlSelf->__PVT__divisors[4U] = __Vtemp_1[4U];
        vlSelf->__PVT__divisors[5U] = __Vtemp_1[5U];
        vlSelf->__PVT__divisors[6U] = __Vtemp_1[6U];
        if ((0U == ((((((vlSelf->__PVT__divisors[0U] 
                         | vlSelf->__PVT__divisors[1U]) 
                        | vlSelf->__PVT__divisors[2U]) 
                       | vlSelf->__PVT__divisors[3U]) 
                      | vlSelf->__PVT__divisors[4U]) 
                     | vlSelf->__PVT__divisors[5U]) 
                    | vlSelf->__PVT__divisors[6U]))) {
            vlSelf->Y = vlSelf->__PVT__outA1;
            vlSelf->ack = 1U;
        }
    } else {
        vlSelf->__PVT__outReg = 0U;
        vlSelf->__PVT__oneOrX = 0x3f800000U;
        vlSelf->__PVT__mulA = 0x3f800000U;
        vlSelf->Y = 0U;
        vlSelf->ack = 0U;
        vlSelf->__PVT__divisors[0U] = 0x3f800000U;
        vlSelf->__PVT__divisors[1U] = 0x3f800000U;
        vlSelf->__PVT__divisors[2U] = 0x3f000000U;
        vlSelf->__PVT__divisors[3U] = 0x3eaaaaabU;
        vlSelf->__PVT__divisors[4U] = 0x3e800000U;
        vlSelf->__PVT__divisors[5U] = 0x3e4ccccdU;
        vlSelf->__PVT__divisors[6U] = 0x3e2aaaabU;
    }
    vlSelf->__PVT__fMul1__DOT__sign = ((vlSelf->__PVT__mulA 
                                        ^ vlSelf->__PVT__oneOrX) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul1__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul1__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__mulA 
                                              >> 0x17U) 
                                             + (vlSelf->__PVT__oneOrX 
                                                >> 0x17U)) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__mulA));
    vlSelf->__PVT__fMul1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__oneOrX));
    vlSelf->__PVT__fMul1__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul1__DOT__fractionB))));
    vlSelf->__PVT__fMul1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__mulA)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__oneOrX)))) {
        vlSelf->__PVT__outM1 = 0U;
    } else {
        vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul1__DOT__eout 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul1__DOT__exponent 
                        = vlSelf->fMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel28;
                }
                vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel28: ;
        }
        if (vlSelf->__PVT__fMul1__DOT__eout) {
            vlSelf->__PVT__outM1 = 0U;
        } else {
            vlSelf->__PVT__fMul1__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul1__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM1 = (((IData)(vlSelf->__PVT__fMul1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul1__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fMul2__DOT__sign = ((vlSelf->__PVT__outM1 
                                        ^ vlSelf->__PVT__divisors[0U]) 
                                       >> 0x1fU);
    vlSelf->__PVT__fMul2__DOT__mantissa = 0U;
    vlSelf->__PVT__fMul2__DOT__exponent = (0xffU & 
                                           (((vlSelf->__PVT__outM1 
                                              >> 0x17U) 
                                             + ((vlSelf->__PVT__divisors[0U] 
                                                 << 9U) 
                                                | (vlSelf->__PVT__divisors[0U] 
                                                   >> 0x17U))) 
                                            - (IData)(0x7dU)));
    vlSelf->__PVT__fMul2__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM1));
    vlSelf->__PVT__fMul2__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__divisors[0U]));
    vlSelf->__PVT__fMul2__DOT__fraction = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionA)) 
                                              * (QData)((IData)(vlSelf->__PVT__fMul2__DOT__fractionB))));
    vlSelf->__PVT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->__PVT__outM1)) 
         | (0U == (0x7fffffffU & vlSelf->__PVT__divisors[0U])))) {
        vlSelf->__PVT__outM2 = 0U;
    } else {
        vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->__PVT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->__PVT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->__PVT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__fMul2__DOT__eout 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->__PVT__fMul2__DOT__exponent 
                        = vlSelf->fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel29;
                }
                vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel29: ;
        }
        if (vlSelf->__PVT__fMul2__DOT__eout) {
            vlSelf->__PVT__outM2 = 0U;
        } else {
            vlSelf->__PVT__fMul2__DOT__mantissa = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__fMul2__DOT__fraction 
                                                              >> 0x19U)));
            vlSelf->__PVT__outM2 = (((IData)(vlSelf->__PVT__fMul2__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fMul2__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->__PVT__fAdd1__DOT__sign = 0U;
    vlSelf->__PVT__fAdd1__DOT__mantissa = 0U;
    vlSelf->__PVT__fAdd1__DOT__exponentA = (0xffU & 
                                            (vlSelf->__PVT__outM2 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__exponentB = (0xffU & 
                                            (vlSelf->__PVT__outReg 
                                             >> 0x17U));
    vlSelf->__PVT__fAdd1__DOT__fractionA = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outM2));
    vlSelf->__PVT__fAdd1__DOT__fractionB = (0x800000U 
                                            | (0x7fffffU 
                                               & vlSelf->__PVT__outReg));
    vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
    vlSelf->__PVT__fAdd1__DOT__shiftAmount = 0U;
    vlSelf->__PVT__fAdd1__DOT__fraction = 0U;
    vlSelf->__PVT__fAdd1__DOT__cout = 0U;
    vlSelf->__PVT__fAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->__PVT__outM2))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outReg;
    } else if ((0U == (0x7fffffffU & vlSelf->__PVT__outReg))) {
        vlSelf->__PVT__outA1 = vlSelf->__PVT__outM2;
    } else {
        if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentA)));
            vlSelf->__PVT__fAdd1__DOT__fractionA = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionA, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB))) {
            vlSelf->__PVT__fAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->__PVT__fAdd1__DOT__exponentB)));
            vlSelf->__PVT__fAdd1__DOT__fractionB = 
                (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->__PVT__fAdd1__DOT__fractionB, (IData)(vlSelf->__PVT__fAdd1__DOT__shiftAmount)));
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        } else {
            vlSelf->__PVT__fAdd1__DOT__exponent = vlSelf->__PVT__fAdd1__DOT__exponentA;
        }
        if (((vlSelf->__PVT__outM2 >> 0x1fU) == (vlSelf->__PVT__outReg 
                                                 >> 0x1fU))) {
            vlSelf->__PVT__fAdd1__DOT__cout = (1U & 
                                               ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                 + vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                >> 0x18U));
            vlSelf->__PVT__fAdd1__DOT__sign = (vlSelf->__PVT__outM2 
                                               >> 0x1fU);
            vlSelf->__PVT__fAdd1__DOT__fraction = (0xffffffU 
                                                   & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                      + vlSelf->__PVT__fAdd1__DOT__fractionB));
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->__PVT__fAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->__PVT__fAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__fAdd1__DOT__exponent)));
                vlSelf->__PVT__fAdd1__DOT__eout = vlSelf->fAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->__PVT__fAdd1__DOT__cout = vlSelf->fAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->__PVT__fAdd1__DOT__exponent 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = vlSelf->fAdd1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSelf->__PVT__outM2 >> 0x1fU)) {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionB 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionA) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionB 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionA));
            } else {
                vlSelf->__PVT__fAdd1__DOT__cout = (1U 
                                                   & ((vlSelf->__PVT__fAdd1__DOT__fractionA 
                                                       - vlSelf->__PVT__fAdd1__DOT__fractionB) 
                                                      >> 0x18U));
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->__PVT__fAdd1__DOT__fractionA 
                                    - vlSelf->__PVT__fAdd1__DOT__fractionB));
            }
            if (vlSelf->__PVT__fAdd1__DOT__cout) {
                vlSelf->__PVT__fAdd1__DOT__sign = 1U;
                vlSelf->__PVT__fAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->__PVT__fAdd1__DOT__fraction));
            } else {
                vlSelf->__PVT__fAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->__PVT__fAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->__PVT__fAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__fAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->__PVT__fAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__fAdd1__DOT__eout 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->__PVT__fAdd1__DOT__exponent 
                                = vlSelf->fAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel30;
                        }
                        vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__fAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel30: ;
                }
            }
        }
        if (vlSelf->__PVT__fAdd1__DOT__eout) {
            vlSelf->__PVT__outA1 = 0U;
        } else {
            vlSelf->__PVT__fAdd1__DOT__mantissa = (0x7fffffU 
                                                   & vlSelf->__PVT__fAdd1__DOT__fraction);
            vlSelf->__PVT__outA1 = (((IData)(vlSelf->__PVT__fAdd1__DOT__sign) 
                                     << 0x1fU) | (((IData)(vlSelf->__PVT__fAdd1__DOT__exponent) 
                                                   << 0x17U) 
                                                  | vlSelf->__PVT__fAdd1__DOT__mantissa));
        }
    }
}
