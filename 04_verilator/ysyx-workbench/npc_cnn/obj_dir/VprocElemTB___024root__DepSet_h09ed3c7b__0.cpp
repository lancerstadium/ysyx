// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VprocElemTB.h for the primary calling header

#include "VprocElemTB__pch.h"
#include "VprocElemTB___024root.h"

VlCoroutine VprocElemTB___024root___eval_initial__TOP__Vtiming__0(VprocElemTB___024root* vlSelf);
VlCoroutine VprocElemTB___024root___eval_initial__TOP__Vtiming__1(VprocElemTB___024root* vlSelf);

void VprocElemTB___024root___eval_initial(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_initial\n"); );
    // Body
    VprocElemTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VprocElemTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__clk__0 
        = vlSelf->procElemTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__procElemTB__DOT__rst__0 
        = vlSelf->procElemTB__DOT__rst;
}

VL_INLINE_OPT VlCoroutine VprocElemTB___024root___eval_initial__TOP__Vtiming__0(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0U, nullptr, 
                                       "vsrc/conv/procElemTB.v", 
                                       54);
    vlSelf->procElemTB__DOT__clk = 0U;
    vlSelf->procElemTB__DOT__rst = 1U;
    vlSelf->procElemTB__DOT__A = 0xc2bdbd14U;
    vlSelf->procElemTB__DOT__B = 0xc308cfe6U;
    vlSelf->procElemTB__DOT__R = 0x464acd11U;
    co_await vlSelf->__VdlySched.delay(0x19ULL, nullptr, 
                                       "vsrc/conv/procElemTB.v", 
                                       62);
    vlSelf->procElemTB__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "vsrc/conv/procElemTB.v", 
                                       65);
    VL_WRITEF_NX("A = %b, B = %b, C = %b, Bias = %b\n",0,
                 32,vlSelf->procElemTB__DOT__A,32,vlSelf->procElemTB__DOT__B,
                 32,vlSelf->procElemTB__DOT__C,32,(vlSelf->procElemTB__DOT__C 
                                                   ^ vlSelf->procElemTB__DOT__R));
    co_await vlSelf->__VdlySched.delay(0x4bULL, nullptr, 
                                       "vsrc/conv/procElemTB.v", 
                                       69);
    vlSelf->procElemTB__DOT__A = 0x41446df0U;
    vlSelf->procElemTB__DOT__B = 0x43001b38U;
    vlSelf->procElemTB__DOT__R = 0x46cf54bdU;
    co_await vlSelf->__VdlySched.delay(0x50ULL, nullptr, 
                                       "vsrc/conv/procElemTB.v", 
                                       74);
    VL_WRITEF_NX("A = %b, B = %b, C = %b, Bias = %b\n",0,
                 32,vlSelf->procElemTB__DOT__A,32,vlSelf->procElemTB__DOT__B,
                 32,vlSelf->procElemTB__DOT__C,32,(vlSelf->procElemTB__DOT__C 
                                                   ^ vlSelf->procElemTB__DOT__R));
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/conv/procElemTB.v", 
                                       77);
    VL_FINISH_MT("vsrc/conv/procElemTB.v", 78, "");
}

VL_INLINE_OPT VlCoroutine VprocElemTB___024root___eval_initial__TOP__Vtiming__1(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "vsrc/conv/procElemTB.v", 
                                           10);
        vlSelf->procElemTB__DOT__clk = (1U & (~ (IData)(vlSelf->procElemTB__DOT__clk)));
    }
}

void VprocElemTB___024root___act_sequent__TOP__0(VprocElemTB___024root* vlSelf);

void VprocElemTB___024root___eval_act(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VprocElemTB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VprocElemTB___024root___act_sequent__TOP__0(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___act_sequent__TOP__0\n"); );
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

void VprocElemTB___024root___nba_sequent__TOP__0(VprocElemTB___024root* vlSelf);
void VprocElemTB___024root___nba_sequent__TOP__1(VprocElemTB___024root* vlSelf);
void VprocElemTB___024root___nba_comb__TOP__0(VprocElemTB___024root* vlSelf);

void VprocElemTB___024root___eval_nba(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VprocElemTB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VprocElemTB___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VprocElemTB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VprocElemTB___024root___nba_sequent__TOP__0(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___nba_sequent__TOP__0\n"); );
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
                    goto __Vlabel3;
                }
                vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel3: ;
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
}

VL_INLINE_OPT void VprocElemTB___024root___nba_sequent__TOP__1(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->procElemTB__DOT__C = ((IData)(vlSelf->procElemTB__DOT__rst)
                                   ? 0U : vlSelf->procElemTB__DOT__PE__DOT__addC);
}

VL_INLINE_OPT void VprocElemTB___024root___nba_comb__TOP__0(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___nba_comb__TOP__0\n"); );
    // Body
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
                            goto __Vlabel4;
                        }
                        vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel4: ;
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

void VprocElemTB___024root___timing_resume(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VprocElemTB___024root___eval_triggers__act(VprocElemTB___024root* vlSelf);

bool VprocElemTB___024root___eval_phase__act(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VprocElemTB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VprocElemTB___024root___timing_resume(vlSelf);
        VprocElemTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VprocElemTB___024root___eval_phase__nba(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VprocElemTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VprocElemTB___024root___dump_triggers__nba(VprocElemTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VprocElemTB___024root___dump_triggers__act(VprocElemTB___024root* vlSelf);
#endif  // VL_DEBUG

void VprocElemTB___024root___eval(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VprocElemTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/procElemTB.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VprocElemTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/conv/procElemTB.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VprocElemTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VprocElemTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VprocElemTB___024root___eval_debug_assertions(VprocElemTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
