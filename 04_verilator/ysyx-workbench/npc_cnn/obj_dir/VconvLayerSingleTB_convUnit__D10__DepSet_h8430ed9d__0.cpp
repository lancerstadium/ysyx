// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB__Syms.h"
#include "VconvLayerSingleTB_convUnit__D10.h"

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x1450U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x145fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1450U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x1450U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1450U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel1;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel2;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x12c0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x12cfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x12c0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x12c0U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x12c0U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel3;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel3: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel4;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel4: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x1130U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x113fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1130U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x1130U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1130U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel5;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel5: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel6;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel6: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0xfa0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0xfafU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xfa0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0xfa0U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0xfa0U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel7;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel7: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel8;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel8: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0xe10U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0xe1fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xe10U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0xe10U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0xe10U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel9;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel9: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel10;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel10: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0xc80U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0xc8fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc80U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0xc80U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0xc80U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel11;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel11: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel12;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel12: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0xaf0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0xaffU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xaf0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0xaf0U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0xaf0U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel13;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel13: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel14;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel14: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x960U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x96fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x960U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x960U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x960U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel15;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel15: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel16;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel16: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x7d0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x7dfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x7d0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x7d0U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x7d0U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel17;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel17: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel18;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel18: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x640U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x64fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x640U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x640U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x640U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel19;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel19: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel20;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel20: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x4b0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x4bfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x4b0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x4b0U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x4b0U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel21;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel21: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel22;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel22: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x320U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x32fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x320U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x320U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x320U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel23;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel23: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel24;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel24: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x190U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0x19fU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x190U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x180U) 
                                                          - 
                                                          VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (((IData)(0x190U) 
                                               + (0x1ffU 
                                                  & ((IData)(0x180U) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x190U) 
                                                    + 
                                                    (0x1ffU 
                                                     & ((IData)(0x180U) 
                                                        - 
                                                        VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel25;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel25: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel26;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel26: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}

VL_INLINE_OPT void VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(VconvLayerSingleTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VconvLayerSingleTB_convUnit__D10___nba_sequent__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->res = 0U;
        vlSelf->__PVT__selInA = 0U;
        vlSelf->__PVT__selInB = 0U;
        vlSelf->__PVT__i = 0U;
    } else {
        vlSelf->res = vlSelf->__PVT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->__PVT__i)) {
            vlSelf->__PVT__selInA = 0U;
            vlSelf->__PVT__selInB = 0U;
        } else {
            vlSelf->__PVT__selInA = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__selInB = ((0x18fU >= (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                      ? (0xffffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))
                                            ? 0U : 
                                           (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)))))) 
                                          | (vlSymsp->TOP.convLayerSingleTB__DOT__fit[
                                             (0xfU 
                                              & (((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U)) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->__PVT__i, 4U))))))
                                      : 0U);
            vlSelf->__PVT__i = ((IData)(1U) + vlSelf->__PVT__i);
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign 
        = (1U & (((IData)(vlSelf->__PVT__selInA) ^ (IData)(vlSelf->__PVT__selInB)) 
                 >> 0xfU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
        = (0x1fU & ((((IData)(vlSelf->__PVT__selInA) 
                      >> 0xaU) + ((IData)(vlSelf->__PVT__selInB) 
                                  >> 0xaU)) - (IData)(0xdU)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInA)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__selInB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
        = (0x3fffffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA) 
                        * (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout = 0U;
    if (((0U == (0x7fffU & (IData)(vlSelf->__PVT__selInA))) 
         | (0U == (0x7fffU & (IData)(vlSelf->__PVT__selInB))))) {
        vlSelf->__PVT__PE__DOT__mulC = 0U;
    } else {
        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i = 0x15U;
        {
            while (VL_LTES_III(32, 0xcU, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) {
                if (((0x15U >= (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                               >> (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))))) {
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                        = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction, 
                                                     ((IData)(0x16U) 
                                                      - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0 
                        = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                  - ((IData)(0x16U) 
                                     - (0x1fU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i))) 
                                 >> 5U));
                    vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0 
                        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                    - ((IData)(0x16U) 
                                       - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i)));
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
                    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent 
                        = vlSelf->PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
                    goto __Vlabel27;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel27: ;
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout) {
            vlSelf->__PVT__PE__DOT__mulC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa 
                = (0x3ffU & (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction 
                             >> 0xcU));
            vlSelf->__PVT__PE__DOT__mulC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa)));
        }
    }
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelf->res) >> 0xaU));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelf->res)));
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
        = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout = 0U;
    vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout = 0U;
    if ((0U == (0x7fffU & (IData)(vlSelf->__PVT__PE__DOT__mulC)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->res;
    } else if ((0U == (0x7fffU & (IData)(vlSelf->res)))) {
        vlSelf->__PVT__PE__DOT__addC = vlSelf->__PVT__PE__DOT__mulC;
    } else {
        if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
             > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
        } else if (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                    > (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount 
                = (0x3fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA) 
                            - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB 
                = (0x7ffU & VL_SHIFTR_III(11,11,6, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB), (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount)));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                = vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->res) 
                                        >> 0xfU)))) {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                          + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                         >> 0xbU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign 
                = (1U & ((IData)(vlSelf->__PVT__PE__DOT__mulC) 
                         >> 0xfU));
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                             + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)) 
                             >> 5U));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0 
                    = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                              >> 1U)));
                vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent)));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelf->__PVT__PE__DOT__mulC))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout 
                    = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                              - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)) 
                             >> 0xbU));
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA) 
                                 - (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB)));
            }
            if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 1U;
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction)));
            } else {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                          >> 0xaU)))) {
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i = 9U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) {
                        if (((0xaU >= (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction) 
                                       >> (0xfU & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction 
                                = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction), 
                                                          ((IData)(0xaU) 
                                                           - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0 
                                = (1U & (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                          - ((IData)(0xaU) 
                                             - (0x1fU 
                                                & vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i))) 
                                         >> 5U));
                            vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0 
                                = (0x1fU & ((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                            - ((IData)(0xaU) 
                                               - vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i)));
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
                            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent 
                                = vlSelf->PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
                            goto __Vlabel28;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel28: ;
                }
            }
        }
        if (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout) {
            vlSelf->__PVT__PE__DOT__addC = 0U;
        } else {
            vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction));
            vlSelf->__PVT__PE__DOT__addC = (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent) 
                                                << 0xaU) 
                                               | (IData)(vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa)));
        }
    }
}
