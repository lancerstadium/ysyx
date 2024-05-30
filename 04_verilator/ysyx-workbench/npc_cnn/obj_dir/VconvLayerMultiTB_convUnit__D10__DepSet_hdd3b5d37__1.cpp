// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerMultiTB.h for the primary calling header

#include "VconvLayerMultiTB__pch.h"
#include "VconvLayerMultiTB__Syms.h"
#include "VconvLayerMultiTB_convUnit__D10.h"

VL_INLINE_OPT void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst) {
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
                                           (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[
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
                                          | (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[
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
                                           (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__inFits[
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
                                          | (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__inFits[
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
                    goto __Vlabel53;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel53: ;
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
                            goto __Vlabel54;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel54: ;
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

VL_INLINE_OPT void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0\n"); );
    // Body
    if (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst) {
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
                                           (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[
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
                                          | (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[
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
                                           (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__inFits[
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
                                          | (vlSymsp->TOP.convLayerMultiTB__DOT__UUT__DOT__inFits[
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
                    goto __Vlabel55;
                }
                vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel55: ;
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
                            goto __Vlabel56;
                        }
                        vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel56: ;
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
