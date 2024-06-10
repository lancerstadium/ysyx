// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsoftmaxTB.h for the primary calling header

#include "VsoftmaxTB__pch.h"
#include "VsoftmaxTB__Syms.h"
#include "VsoftmaxTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsoftmaxTB___024root___dump_triggers__stl(VsoftmaxTB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VsoftmaxTB___024root___eval_triggers__stl(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsoftmaxTB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VsoftmaxTB___024root___stl_sequent__TOP__0(VsoftmaxTB___024root* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);
VL_ATTR_COLD void VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp__0(VsoftmaxTB_exponent* vlSelf);

VL_ATTR_COLD void VsoftmaxTB___024root___eval_stl(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VsoftmaxTB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp));
        VsoftmaxTB_exponent___stl_sequent__TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp__0((&vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp));
    }
}

VL_ATTR_COLD void VsoftmaxTB___024root___stl_sequent__TOP__0(VsoftmaxTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsoftmaxTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsoftmaxTB___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_8;
    // Body
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__0__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__0__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__0__KET____DOT__FADD1__DOT__exponentA;
    __Vtemp_8[0U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp.Y;
    __Vtemp_8[1U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y;
    __Vtemp_8[2U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y;
    __Vtemp_8[3U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y;
    __Vtemp_8[4U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y;
    __Vtemp_8[5U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y;
    __Vtemp_8[6U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y;
    __Vtemp_8[7U] = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y;
    __Vtemp_8[8U] = (IData)((((QData)((IData)(vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y)) 
                              << 0x20U) | (QData)((IData)(vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y))));
    __Vtemp_8[9U] = (IData)(((((QData)((IData)(vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y)) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y))) 
                             >> 0x20U));
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellinp__FM1____pinNumber1 
        = ((0x13fU >= (0x1ffU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U)))
                 ? 0U : (__Vtemp_8[(((IData)(0x1fU) 
                                     + (0x1ffU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U))))) 
               | (__Vtemp_8[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__mulCounter), 5U))))
            : 0U);
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
                    goto __Vlabel1;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
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
                    goto __Vlabel2;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul2__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel2: ;
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
                    goto __Vlabel3;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel3: ;
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
                    goto __Vlabel4;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__fMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel4: ;
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
    vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3 
        = ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp.Y))
            ? 0U : vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp.Y);
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
                    goto __Vlabel5;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FM1__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel5: ;
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
                            goto __Vlabel6;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yAdd1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel6: ;
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
                        goto __Vlabel7;
                    }
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub2__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel7: ;
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
                        goto __Vlabel8;
                    }
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub3__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel8: ;
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
                        goto __Vlabel9;
                    }
                    vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                        = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__ySub4__DOT__unnamedblk1__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel9: ;
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
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[1U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel10;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel10: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__1__KET____DOT__FADD1__DOT__mantissa));
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
                    goto __Vlabel11;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul3__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel11: ;
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
                    goto __Vlabel12;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul4__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel12: ;
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
                    goto __Vlabel13;
                }
                vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                    = (vlSelf->softmaxTB__DOT__soft1__DOT__FR__DOT__yMul5__DOT__unnamedblk1__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel13: ;
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
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[2U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel14;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel14: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__2__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[3U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel15;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel15: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__3__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[4U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel16;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel16: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__4__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[5U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel17;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel17: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__5__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[6U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__5__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel18;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel18: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__6__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[7U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__6__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel19;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel19: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__7__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[8U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__7__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel20;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel20: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__8__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[9U] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__sign = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__mantissa = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA 
        = (0xffU & (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentB 
        = (0xffU & (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3 
                    >> 0x17U));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA 
        = (0x800000U | (0x7fffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB 
        = (0x800000U | (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3));
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent 
        = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__shiftAmount = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout = 0U;
    vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__eout = 0U;
    if ((0U == (0x7fffffffU & vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3 
            = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3;
    } else if ((0U == (0x7fffffffU & vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3))) {
        vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3 
            = vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y;
    } else {
        if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentB) 
             > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentB) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentB;
        } else if (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA) 
                    > (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentB))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__shiftAmount 
                = (0x1ffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA) 
                             - (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentB)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB 
                = (0xffffffU & VL_SHIFTR_III(24,24,9, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB, (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__shiftAmount)));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent 
                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponentA;
        }
        if (((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y 
              >> 0x1fU) == (vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__8__KET____DOT__FADD1____pinNumber3 
                            >> 0x1fU))) {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout 
                = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA 
                          + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB) 
                         >> 0x18U));
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__sign 
                = (vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y 
                   >> 0x1fU);
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA 
                                + vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB));
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0 
                    = (1U & (VL_SHIFTR_III(25,25,32, 
                                           (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout) 
                                             << 0x18U) 
                                            | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction), 1U) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0 
                    = (1U & (((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent)) 
                             >> 8U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0 
                    = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout) 
                        << 0x17U) | (0x7fffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                                                  >> 1U)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent)));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__eout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h63e25442__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h9ec70323__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h704b029f__0;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                    = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h77554df9__0;
            }
        } else {
            if ((vlSymsp->TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.Y 
                 >> 0x1fU)) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout 
                    = (1U & ((vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA 
                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB) 
                             >> 0x18U));
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionA 
                                    - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fractionB));
            }
            if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__cout) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__sign = 1U;
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                    = (0xffffffU & (- vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction));
            } else {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__sign = 0U;
            }
            if ((1U & (~ (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                          >> 0x17U)))) {
                vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i = 0x16U;
                {
                    while (VL_LTES_III(32, 0U, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) {
                        if (((0x17U >= (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)) 
                             && (1U & (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                                       >> (0x1fU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))))) {
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction 
                                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction, 
                                                             ((IData)(0x17U) 
                                                              - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0 
                                = (1U & (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent) 
                                          - ((IData)(0x17U) 
                                             - (0xffU 
                                                & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i))) 
                                         >> 8U));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0 
                                = (0xffU & ((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent) 
                                            - ((IData)(0x17U) 
                                               - vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i)));
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__eout 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h5ec2525e__0;
                            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent 
                                = vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT____Vconcswap_1_h87dcad21__0;
                            goto __Vlabel21;
                        }
                        vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                            = (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__unnamedblk1__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel21: ;
                }
            }
        }
        if (vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__eout) {
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3 = 0U;
        } else {
            vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__mantissa 
                = (0x7fffffU & vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__fraction);
            vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3 
                = (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__sign) 
                    << 0x1fU) | (((IData)(vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__exponent) 
                                  << 0x17U) | vlSelf->softmaxTB__DOT__soft1__DOT__genblk2__BRA__9__KET____DOT__FADD1__DOT__mantissa));
        }
    }
    vlSelf->softmaxTB__DOT__soft1__DOT__expSums[0xaU] 
        = vlSelf->softmaxTB__DOT__soft1__DOT____Vcellout__genblk2__BRA__9__KET____DOT__FADD1____pinNumber3;
}
