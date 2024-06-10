// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsoftmaxTB.h for the primary calling header

#include "VsoftmaxTB__pch.h"
#include "VsoftmaxTB___024root.h"

VL_ATTR_COLD void VsoftmaxTB___024root___eval_initial__TOP(VsoftmaxTB___024root* vlSelf);
VlCoroutine VsoftmaxTB___024root___eval_initial__TOP__Vtiming__0(VsoftmaxTB___024root* vlSelf);
VlCoroutine VsoftmaxTB___024root___eval_initial__TOP__Vtiming__1(VsoftmaxTB___024root* vlSelf);

void VsoftmaxTB___024root___eval_initial(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_initial\n"); );
    // Body
    VsoftmaxTB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VsoftmaxTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VsoftmaxTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__clk__0 
        = vlSelf->softmaxTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x1__0 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x1;
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x2__0 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x2;
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x3__0 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x3;
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__x4__0 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x4;
    vlSelf->__Vtrigprevexpr___TOP__softmaxTB__DOT__soft1__DOT__FR__DOT__y4__0 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4;
}

extern const VlWide<10>/*319:0*/ VsoftmaxTB__ConstPool__CONST_h18e57395_0;
extern const VlWide<10>/*319:0*/ VsoftmaxTB__ConstPool__CONST_h1bc928af_0;

VL_INLINE_OPT VlCoroutine VsoftmaxTB___024root___eval_initial__TOP__Vtiming__0(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->softmaxTB__DOT__clk = 1U;
    vlSelf->softmaxTB__DOT__inputs[0U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[0U];
    vlSelf->softmaxTB__DOT__inputs[1U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[1U];
    vlSelf->softmaxTB__DOT__inputs[2U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[2U];
    vlSelf->softmaxTB__DOT__inputs[3U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[3U];
    vlSelf->softmaxTB__DOT__inputs[4U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[4U];
    vlSelf->softmaxTB__DOT__inputs[5U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[5U];
    vlSelf->softmaxTB__DOT__inputs[6U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[6U];
    vlSelf->softmaxTB__DOT__inputs[7U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[7U];
    vlSelf->softmaxTB__DOT__inputs[8U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[8U];
    vlSelf->softmaxTB__DOT__inputs[9U] = VsoftmaxTB__ConstPool__CONST_h18e57395_0[9U];
    vlSelf->softmaxTB__DOT__count = 1U;
    vlSelf->softmaxTB__DOT__enable = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/lay/softmaxTB.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->softmaxTB__DOT__enable = 1U;
    while ((1U & (~ (IData)(vlSelf->softmaxTB__DOT__ackSoft)))) {
        vlSelf->softmaxTB__DOT__count = ((IData)(1U) 
                                         + vlSelf->softmaxTB__DOT__count);
        co_await vlSelf->__VdlySched.delay(0x64ULL, 
                                           nullptr, 
                                           "vsrc/lay/softmaxTB.v", 
                                           27);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->softmaxTB__DOT__inputs[0U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[0U];
    vlSelf->softmaxTB__DOT__inputs[1U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[1U];
    vlSelf->softmaxTB__DOT__inputs[2U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[2U];
    vlSelf->softmaxTB__DOT__inputs[3U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[3U];
    vlSelf->softmaxTB__DOT__inputs[4U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[4U];
    vlSelf->softmaxTB__DOT__inputs[5U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[5U];
    vlSelf->softmaxTB__DOT__inputs[6U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[6U];
    vlSelf->softmaxTB__DOT__inputs[7U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[7U];
    vlSelf->softmaxTB__DOT__inputs[8U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[8U];
    vlSelf->softmaxTB__DOT__inputs[9U] = VsoftmaxTB__ConstPool__CONST_h1bc928af_0[9U];
    vlSelf->softmaxTB__DOT__count = 1U;
    vlSelf->softmaxTB__DOT__enable = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/lay/softmaxTB.v", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->softmaxTB__DOT__enable = 1U;
    while ((1U & (~ (IData)(vlSelf->softmaxTB__DOT__ackSoft)))) {
        vlSelf->softmaxTB__DOT__count = ((IData)(1U) 
                                         + vlSelf->softmaxTB__DOT__count);
        co_await vlSelf->__VdlySched.delay(0x64ULL, 
                                           nullptr, 
                                           "vsrc/lay/softmaxTB.v", 
                                           39);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VsoftmaxTB___024root___eval_initial__TOP__Vtiming__1(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "vsrc/lay/softmaxTB.v", 
                                           14);
        vlSelf->softmaxTB__DOT__clk = (1U & (~ (IData)(vlSelf->softmaxTB__DOT__clk)));
    }
}

void VsoftmaxTB___024root___eval_act(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_act\n"); );
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_sequent__TOP__0(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->softmaxTB__DOT__enable) {
        if ((1U & (~ (IData)(vlSelf->softmaxTB__DOT__ackSoft)))) {
            if ((0xaU > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter))) {
                vlSelf->softmaxTB__DOT__soft1__DOT____Vlvbound_h11605af6__0 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__outMul;
                if ((0x13fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U)))) {
                    VL_ASSIGNSEL_WI(320,32,(0x1ffU 
                                            & VL_SHIFTL_III(9,32,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U)), vlSelf->softmaxTB__DOT__outputs, vlSelf->softmaxTB__DOT__soft1__DOT____Vlvbound_h11605af6__0);
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter)));
            } else {
                vlSelf->softmaxTB__DOT__ackSoft = 1U;
            }
        }
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter = 0U;
        vlSelf->softmaxTB__DOT__ackSoft = 0U;
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D4 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D3;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D3 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D2;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D2 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D1;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D1 
        = (0x3f000000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__sign 
        = (1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D1 
                    >> 0x1fU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__exponent 
        = (0xffU & ((IData)(2U) + (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D1 
                                   >> 0x17U)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fractionA = 0xf0f0f1U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D1));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fraction 
        = (0xffffffffffffULL & (0xf0f0f1ULL * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D1))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel10;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel10: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_sequent__TOP__2(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((0U != vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4)) {
        vlSelf->softmaxTB__DOT__soft1__DOT__expRec 
            = ((0x80000000U & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x4) 
               | ((0x7f800000U & (((IData)(0xfdU) - 
                                   (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x4 
                                    >> 0x17U)) << 0x17U)) 
                  | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4)));
    }
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_sequent__TOP__3(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2Out;
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_sequent__TOP__4(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3Out;
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_sequent__TOP__5(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_sequent__TOP__5\n"); );
    // Body
    if ((0U != vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x1)) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1 
            = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1Out;
    }
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_sequent__TOP__6(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4Out;
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_sequent__TOP__7(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentB = 0x80U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB = 0xb4b4b5U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1Out = 0x4034b4b5U;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponentA;
        }
        if ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D 
             >> 0x1fU)) {
            if ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel11;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel11: ;
                }
            }
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h77554df9__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT____Vconcswap_1_h704b029f__0;
            }
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__sign 
                = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__P2D 
                   >> 0x1fU);
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1Out = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1Out 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x4 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x3;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x3 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x2;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x2 
        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x1;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__x1 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3;
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_comb__TOP__1(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__sign 
        = ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2 
            ^ vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D3) 
           >> 0x1fU);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__exponent 
        = (0xffU & (((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2 
                      >> 0x17U) + (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D3 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D3));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2)) 
         | (0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D3)))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2D = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel12;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel12: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2D = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2D 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA = 0x80U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2D 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionA = 0x800000U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2D));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent = 0x80U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2D))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponentA;
        }
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__cout 
            = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionA 
                      - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction 
            = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionA 
                            - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fractionB));
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__cout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__sign = 1U;
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction 
                = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction));
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction 
                                   >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i)));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i)));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__eout 
                            = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent 
                            = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel13;
                    }
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel13: ;
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__sign 
        = ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2 
            ^ vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S) 
           >> 0x1fU);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__exponent 
        = (0xffU & (((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2 
                      >> 0x17U) + (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2)) 
         | (0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2S)))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3Out = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel14;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel14: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3Out = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3Out 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_comb__TOP__2(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__sign 
        = ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3 
            ^ vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D4) 
           >> 0x1fU);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__exponent 
        = (0xffU & (((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3 
                      >> 0x17U) + (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D4 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D4));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3)) 
         | (0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D4)))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3D = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel15;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel15: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3D = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3D 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA = 0x80U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3D 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionA = 0x800000U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3D));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent = 0x80U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3D))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponentA;
        }
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__cout 
            = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionA 
                      - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction 
            = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionA 
                            - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fractionB));
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__cout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__sign = 1U;
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction 
                = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction));
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction 
                                   >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i)));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i)));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__eout 
                            = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent 
                            = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel16;
                    }
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel16: ;
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__sign 
        = ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3 
            ^ vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S) 
           >> 0x1fU);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__exponent 
        = (0xffU & (((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3 
                      >> 0x17U) + (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3)) 
         | (0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y3S)))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4Out = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel17;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel17: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4Out = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y4Out 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_comb__TOP__3(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__sign 
        = ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1 
            ^ vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D2) 
           >> 0x1fU);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__exponent 
        = (0xffU & (((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1 
                      >> 0x17U) + (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D2 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D2));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1)) 
         | (0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__D2)))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1D = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel18;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel18: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1D = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1D 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA = 0x80U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1D 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionA = 0x800000U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1D));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent = 0x80U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1D))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S = 0x40000000U;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponentA;
        }
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__cout 
            = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionA 
                      - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionB) 
                     >> 0x18U));
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction 
            = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionA 
                            - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fractionB));
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__cout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__sign = 1U;
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction 
                = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction));
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__sign = 0U;
        }
        if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction 
                      >> 0x17U)))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i = 0x16U;
            {
                while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i)) {
                    if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i)) 
                         && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction 
                                   >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i))))) {
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction 
                            = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction, 
                                                         ((IData)(0x17U) 
                                                          - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i)));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT____Vconcswap_1_h5ec2525e__0 
                            = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent) 
                                      - ((IData)(0x17U) 
                                         - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i))) 
                                     >> 8U));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT____Vconcswap_1_h87dcad21__0 
                            = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent) 
                                        - ((IData)(0x17U) 
                                           - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i)));
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__eout 
                            = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT____Vconcswap_1_h5ec2525e__0;
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent 
                            = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT____Vconcswap_1_h87dcad21__0;
                        goto __Vlabel19;
                    }
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel19: ;
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__sign 
        = ((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1 
            ^ vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S) 
           >> 0x1fU);
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__exponent 
        = (0xffU & (((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1 
                      >> 0x17U) + (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1)) 
         | (0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y1S)))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2Out = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel20;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel20: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2Out = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__y2Out 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__mantissa));
        }
    }
}

VL_INLINE_OPT void VsoftmaxTB___024root___nba_comb__TOP__4(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__sign 
        = ((vlSelf->softmaxTB__DOT__soft1__DOT____Vcellinp__FM1____pinNumber1 
            ^ vlSelf->softmaxTB__DOT__soft1__DOT__expRec) 
           >> 0x1fU);
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__exponent 
        = (0xffU & (((vlSelf->softmaxTB__DOT__soft1__DOT____Vcellinp__FM1____pinNumber1 
                      >> 0x17U) + (vlSelf->softmaxTB__DOT__soft1__DOT__expRec 
                                   >> 0x17U)) - (IData)(0x7dU)));
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellinp__FM1____pinNumber1));
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__expRec));
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fraction 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fractionA)) 
                                * (QData)((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fractionB))));
    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__eout = 0U;
    if (((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellinp__FM1____pinNumber1)) 
         | (0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT__expRec)))) {
        vlSelf->softmaxTB__DOT__soft1__DOT__outMul = 0U;
    } else {
        vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i = 0x2fU;
        {
            while (VL_LTES_III(32, 0x19U, vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i)) {
                if (((0x2fU >= (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i)) 
                     && (1U & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fraction 
                                       >> (0x3fU & vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i)))))) {
                    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fraction 
                        = (0xffffffffffffULL & VL_SHIFTL_QQI(48,48,32, vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fraction, 
                                                             ((IData)(0x30U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT____Vconcswap_1_h2e833972__0 
                        = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__exponent) 
                                  - ((IData)(0x30U) 
                                     - (0xffU & vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i))) 
                                 >> 8U));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT____Vconcswap_1_h3095d3f1__0 
                        = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__exponent) 
                                    - ((IData)(0x30U) 
                                       - vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i)));
                    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__eout 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT____Vconcswap_1_h2e833972__0;
                    vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__exponent 
                        = vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT____Vconcswap_1_h3095d3f1__0;
                    goto __Vlabel21;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel21: ;
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT__outMul = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__mantissa 
                = (0x7fffffU & (IData)((vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__fraction 
                                        >> 0x19U)));
            vlSelf->softmaxTB__DOT__soft1__DOT__outMul 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__mantissa));
        }
    }
}

void VsoftmaxTB___024root___timing_resume(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___timing_resume\n"); );
    // Body
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VsoftmaxTB___024root___eval_triggers__act(VsoftmaxTB___024root* vlSelf);

bool VsoftmaxTB___024root___eval_phase__act(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsoftmaxTB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VsoftmaxTB___024root___timing_resume(vlSelf);
        VsoftmaxTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VsoftmaxTB___024root___eval_nba(VsoftmaxTB___024root* vlSelf);

bool VsoftmaxTB___024root___eval_phase__nba(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsoftmaxTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsoftmaxTB___024root___dump_triggers__nba(VsoftmaxTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsoftmaxTB___024root___dump_triggers__act(VsoftmaxTB___024root* vlSelf);
#endif  // VL_DEBUG

void VsoftmaxTB___024root___eval(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VsoftmaxTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/lay/softmaxTB.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VsoftmaxTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/lay/softmaxTB.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VsoftmaxTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VsoftmaxTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsoftmaxTB___024root___eval_debug_assertions(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
