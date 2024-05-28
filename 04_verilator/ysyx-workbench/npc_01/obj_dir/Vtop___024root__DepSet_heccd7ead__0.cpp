// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__div1__DOT__C_reg;
    __Vdly__top__DOT__div1__DOT__C_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div1__DOT__Max_reg;
    __Vdly__top__DOT__div1__DOT__Max_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div2__DOT__C_reg;
    __Vdly__top__DOT__div2__DOT__C_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div2__DOT__Max_reg;
    __Vdly__top__DOT__div2__DOT__Max_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div3__DOT__C_reg;
    __Vdly__top__DOT__div3__DOT__C_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div3__DOT__Max_reg;
    __Vdly__top__DOT__div3__DOT__Max_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div4__DOT__C_reg;
    __Vdly__top__DOT__div4__DOT__C_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div4__DOT__Max_reg;
    __Vdly__top__DOT__div4__DOT__Max_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div5__DOT__C_reg;
    __Vdly__top__DOT__div5__DOT__C_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div5__DOT__Max_reg;
    __Vdly__top__DOT__div5__DOT__Max_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div6__DOT__C_reg;
    __Vdly__top__DOT__div6__DOT__C_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div6__DOT__Max_reg;
    __Vdly__top__DOT__div6__DOT__Max_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div7__DOT__C_reg;
    __Vdly__top__DOT__div7__DOT__C_reg = 0;
    SData/*15:0*/ __Vdly__top__DOT__div7__DOT__Max_reg;
    __Vdly__top__DOT__div7__DOT__Max_reg = 0;
    // Body
    __Vdly__top__DOT__div1__DOT__C_reg = vlSelf->top__DOT__div1__DOT__C_reg;
    __Vdly__top__DOT__div1__DOT__Max_reg = vlSelf->top__DOT__div1__DOT__Max_reg;
    __Vdly__top__DOT__div2__DOT__C_reg = vlSelf->top__DOT__div2__DOT__C_reg;
    __Vdly__top__DOT__div2__DOT__Max_reg = vlSelf->top__DOT__div2__DOT__Max_reg;
    __Vdly__top__DOT__div3__DOT__C_reg = vlSelf->top__DOT__div3__DOT__C_reg;
    __Vdly__top__DOT__div3__DOT__Max_reg = vlSelf->top__DOT__div3__DOT__Max_reg;
    __Vdly__top__DOT__div4__DOT__C_reg = vlSelf->top__DOT__div4__DOT__C_reg;
    __Vdly__top__DOT__div4__DOT__Max_reg = vlSelf->top__DOT__div4__DOT__Max_reg;
    __Vdly__top__DOT__div5__DOT__C_reg = vlSelf->top__DOT__div5__DOT__C_reg;
    __Vdly__top__DOT__div5__DOT__Max_reg = vlSelf->top__DOT__div5__DOT__Max_reg;
    __Vdly__top__DOT__div6__DOT__C_reg = vlSelf->top__DOT__div6__DOT__C_reg;
    __Vdly__top__DOT__div6__DOT__Max_reg = vlSelf->top__DOT__div6__DOT__Max_reg;
    __Vdly__top__DOT__div7__DOT__C_reg = vlSelf->top__DOT__div7__DOT__C_reg;
    __Vdly__top__DOT__div7__DOT__Max_reg = vlSelf->top__DOT__div7__DOT__Max_reg;
    vlSelf->top__DOT__A_next7 = vlSelf->top__DOT__div7__DOT__A_reg;
    vlSelf->top__DOT__B_next7 = vlSelf->top__DOT__div7__DOT__B_reg;
    if (vlSelf->rst) {
        vlSelf->top__DOT__lt1__DOT__count = 0U;
        vlSelf->led = 1U;
        __Vdly__top__DOT__div7__DOT__C_reg = 0U;
        __Vdly__top__DOT__div7__DOT__Max_reg = 0U;
        vlSelf->top__DOT__div7__DOT__C_reg = __Vdly__top__DOT__div7__DOT__C_reg;
        vlSelf->top__DOT__div7__DOT__Max_reg = __Vdly__top__DOT__div7__DOT__Max_reg;
        vlSelf->top__DOT__div7__DOT__A_reg = 0U;
        vlSelf->top__DOT__div7__DOT__B_reg = 0U;
    } else {
        vlSelf->top__DOT__lt1__DOT__count = ((0x4c4b40U 
                                              <= vlSelf->top__DOT__lt1__DOT__count)
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + vlSelf->top__DOT__lt1__DOT__count));
        vlSelf->led = ((0xfeU & ((IData)(vlSelf->led) 
                                 << 1U)) | (1U & ((IData)(vlSelf->led) 
                                                  >> 7U)));
        __Vdly__top__DOT__div7__DOT__C_reg = vlSelf->top__DOT__C_next6;
        __Vdly__top__DOT__div7__DOT__Max_reg = ((0U 
                                                 == (IData)(vlSelf->top__DOT__div7__DOT__C_reg))
                                                 ? (IData)(vlSelf->top__DOT__A_next6)
                                                 : (IData)(vlSelf->top__DOT__Max_next6));
        if ((0U == (IData)(vlSelf->top__DOT__div7__DOT__B_reg))) {
            __Vdly__top__DOT__div7__DOT__C_reg = 0U;
            vlSelf->top__DOT__Max_next7 = vlSelf->top__DOT__div7__DOT__Max_reg;
            vlSelf->top__DOT__Min_next7 = vlSelf->top__DOT__div7__DOT__Min_reg;
            vlSelf->C = 0U;
        } else if (((IData)(vlSelf->top__DOT__div7__DOT__A_reg) 
                    >= (IData)(vlSelf->top__DOT__div7__DOT__B_reg))) {
            vlSelf->top__DOT__div7__DOT__Mid_reg = 
                (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->top__DOT__div7__DOT__Add_reg), 1U));
            vlSelf->C = vlSelf->top__DOT__div7__DOT__C_reg;
            if (((IData)(vlSelf->top__DOT__div7__DOT__product) 
                 < (IData)(vlSelf->top__DOT__div7__DOT__A_reg))) {
                __Vdly__top__DOT__div7__DOT__C_reg 
                    = vlSelf->top__DOT__div7__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next7 = vlSelf->top__DOT__div7__DOT__Max_reg;
                vlSelf->top__DOT__Min_next7 = vlSelf->top__DOT__div7__DOT__Mid_reg;
            } else if (((IData)(vlSelf->top__DOT__div7__DOT__product) 
                        > (IData)(vlSelf->top__DOT__div7__DOT__A_reg))) {
                __Vdly__top__DOT__div7__DOT__C_reg 
                    = vlSelf->top__DOT__div7__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next7 = vlSelf->top__DOT__div7__DOT__Min_reg;
                vlSelf->top__DOT__Max_next7 = vlSelf->top__DOT__div7__DOT__Mid_reg;
            } else {
                __Vdly__top__DOT__div7__DOT__C_reg 
                    = vlSelf->top__DOT__div7__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next7 = vlSelf->top__DOT__div7__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next7 = vlSelf->top__DOT__div7__DOT__Mid_reg;
            }
        } else {
            vlSelf->C = vlSelf->top__DOT__div7__DOT__C_reg;
            vlSelf->top__DOT__Max_next7 = vlSelf->top__DOT__div7__DOT__Max_reg;
            vlSelf->top__DOT__Min_next7 = vlSelf->top__DOT__div7__DOT__Min_reg;
        }
        vlSelf->top__DOT__div7__DOT__C_reg = __Vdly__top__DOT__div7__DOT__C_reg;
        vlSelf->top__DOT__div7__DOT__Max_reg = __Vdly__top__DOT__div7__DOT__Max_reg;
        vlSelf->top__DOT__div7__DOT__A_reg = vlSelf->top__DOT__A_next6;
        vlSelf->top__DOT__div7__DOT__B_reg = vlSelf->top__DOT__B_next6;
    }
    vlSelf->top__DOT__div7__DOT__product = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div7__DOT__B_reg) 
                                               * (IData)(vlSelf->top__DOT__div7__DOT__Mid_reg)));
    vlSelf->top__DOT__div7__DOT__Min_reg = ((IData)(vlSelf->rst)
                                             ? 0U : (IData)(vlSelf->top__DOT__Min_next6));
    vlSelf->top__DOT__div7__DOT__Add_reg = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div7__DOT__Max_reg) 
                                               + (IData)(vlSelf->top__DOT__div7__DOT__Min_reg)));
    vlSelf->top__DOT__A_next6 = vlSelf->top__DOT__div6__DOT__A_reg;
    vlSelf->top__DOT__B_next6 = vlSelf->top__DOT__div6__DOT__B_reg;
    if (vlSelf->rst) {
        __Vdly__top__DOT__div6__DOT__C_reg = 0U;
        __Vdly__top__DOT__div6__DOT__Max_reg = 0U;
        vlSelf->top__DOT__div6__DOT__C_reg = __Vdly__top__DOT__div6__DOT__C_reg;
        vlSelf->top__DOT__div6__DOT__Max_reg = __Vdly__top__DOT__div6__DOT__Max_reg;
        vlSelf->top__DOT__div6__DOT__A_reg = 0U;
        vlSelf->top__DOT__div6__DOT__B_reg = 0U;
    } else {
        __Vdly__top__DOT__div6__DOT__C_reg = vlSelf->top__DOT__C_next5;
        __Vdly__top__DOT__div6__DOT__Max_reg = ((0U 
                                                 == (IData)(vlSelf->top__DOT__div6__DOT__C_reg))
                                                 ? (IData)(vlSelf->top__DOT__A_next5)
                                                 : (IData)(vlSelf->top__DOT__Max_next5));
        if ((0U == (IData)(vlSelf->top__DOT__div6__DOT__B_reg))) {
            __Vdly__top__DOT__div6__DOT__C_reg = 0U;
            vlSelf->top__DOT__Max_next6 = vlSelf->top__DOT__div6__DOT__Max_reg;
            vlSelf->top__DOT__Min_next6 = vlSelf->top__DOT__div6__DOT__Min_reg;
            vlSelf->top__DOT__C_next6 = 0U;
        } else if (((IData)(vlSelf->top__DOT__div6__DOT__A_reg) 
                    >= (IData)(vlSelf->top__DOT__div6__DOT__B_reg))) {
            vlSelf->top__DOT__div6__DOT__Mid_reg = 
                (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->top__DOT__div6__DOT__Add_reg), 1U));
            vlSelf->top__DOT__C_next6 = vlSelf->top__DOT__div6__DOT__C_reg;
            if (((IData)(vlSelf->top__DOT__div6__DOT__product) 
                 < (IData)(vlSelf->top__DOT__div6__DOT__A_reg))) {
                __Vdly__top__DOT__div6__DOT__C_reg 
                    = vlSelf->top__DOT__div6__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next6 = vlSelf->top__DOT__div6__DOT__Max_reg;
                vlSelf->top__DOT__Min_next6 = vlSelf->top__DOT__div6__DOT__Mid_reg;
            } else if (((IData)(vlSelf->top__DOT__div6__DOT__product) 
                        > (IData)(vlSelf->top__DOT__div6__DOT__A_reg))) {
                __Vdly__top__DOT__div6__DOT__C_reg 
                    = vlSelf->top__DOT__div6__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next6 = vlSelf->top__DOT__div6__DOT__Min_reg;
                vlSelf->top__DOT__Max_next6 = vlSelf->top__DOT__div6__DOT__Mid_reg;
            } else {
                __Vdly__top__DOT__div6__DOT__C_reg 
                    = vlSelf->top__DOT__div6__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next6 = vlSelf->top__DOT__div6__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next6 = vlSelf->top__DOT__div6__DOT__Mid_reg;
            }
        } else {
            vlSelf->top__DOT__C_next6 = vlSelf->top__DOT__div6__DOT__C_reg;
            vlSelf->top__DOT__Max_next6 = vlSelf->top__DOT__div6__DOT__Max_reg;
            vlSelf->top__DOT__Min_next6 = vlSelf->top__DOT__div6__DOT__Min_reg;
        }
        vlSelf->top__DOT__div6__DOT__C_reg = __Vdly__top__DOT__div6__DOT__C_reg;
        vlSelf->top__DOT__div6__DOT__Max_reg = __Vdly__top__DOT__div6__DOT__Max_reg;
        vlSelf->top__DOT__div6__DOT__A_reg = vlSelf->top__DOT__A_next5;
        vlSelf->top__DOT__div6__DOT__B_reg = vlSelf->top__DOT__B_next5;
    }
    vlSelf->top__DOT__div6__DOT__product = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div6__DOT__B_reg) 
                                               * (IData)(vlSelf->top__DOT__div6__DOT__Mid_reg)));
    vlSelf->top__DOT__div6__DOT__Min_reg = ((IData)(vlSelf->rst)
                                             ? 0U : (IData)(vlSelf->top__DOT__Min_next5));
    vlSelf->top__DOT__div6__DOT__Add_reg = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div6__DOT__Max_reg) 
                                               + (IData)(vlSelf->top__DOT__div6__DOT__Min_reg)));
    vlSelf->top__DOT__A_next5 = vlSelf->top__DOT__div5__DOT__A_reg;
    vlSelf->top__DOT__B_next5 = vlSelf->top__DOT__div5__DOT__B_reg;
    if (vlSelf->rst) {
        __Vdly__top__DOT__div5__DOT__C_reg = 0U;
        __Vdly__top__DOT__div5__DOT__Max_reg = 0U;
        vlSelf->top__DOT__div5__DOT__C_reg = __Vdly__top__DOT__div5__DOT__C_reg;
        vlSelf->top__DOT__div5__DOT__Max_reg = __Vdly__top__DOT__div5__DOT__Max_reg;
        vlSelf->top__DOT__div5__DOT__A_reg = 0U;
        vlSelf->top__DOT__div5__DOT__B_reg = 0U;
    } else {
        __Vdly__top__DOT__div5__DOT__C_reg = vlSelf->top__DOT__C_next4;
        __Vdly__top__DOT__div5__DOT__Max_reg = ((0U 
                                                 == (IData)(vlSelf->top__DOT__div5__DOT__C_reg))
                                                 ? (IData)(vlSelf->top__DOT__A_next4)
                                                 : (IData)(vlSelf->top__DOT__Max_next4));
        if ((0U == (IData)(vlSelf->top__DOT__div5__DOT__B_reg))) {
            __Vdly__top__DOT__div5__DOT__C_reg = 0U;
            vlSelf->top__DOT__Max_next5 = vlSelf->top__DOT__div5__DOT__Max_reg;
            vlSelf->top__DOT__Min_next5 = vlSelf->top__DOT__div5__DOT__Min_reg;
            vlSelf->top__DOT__C_next5 = 0U;
        } else if (((IData)(vlSelf->top__DOT__div5__DOT__A_reg) 
                    >= (IData)(vlSelf->top__DOT__div5__DOT__B_reg))) {
            vlSelf->top__DOT__div5__DOT__Mid_reg = 
                (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->top__DOT__div5__DOT__Add_reg), 1U));
            vlSelf->top__DOT__C_next5 = vlSelf->top__DOT__div5__DOT__C_reg;
            if (((IData)(vlSelf->top__DOT__div5__DOT__product) 
                 < (IData)(vlSelf->top__DOT__div5__DOT__A_reg))) {
                __Vdly__top__DOT__div5__DOT__C_reg 
                    = vlSelf->top__DOT__div5__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next5 = vlSelf->top__DOT__div5__DOT__Max_reg;
                vlSelf->top__DOT__Min_next5 = vlSelf->top__DOT__div5__DOT__Mid_reg;
            } else if (((IData)(vlSelf->top__DOT__div5__DOT__product) 
                        > (IData)(vlSelf->top__DOT__div5__DOT__A_reg))) {
                __Vdly__top__DOT__div5__DOT__C_reg 
                    = vlSelf->top__DOT__div5__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next5 = vlSelf->top__DOT__div5__DOT__Min_reg;
                vlSelf->top__DOT__Max_next5 = vlSelf->top__DOT__div5__DOT__Mid_reg;
            } else {
                __Vdly__top__DOT__div5__DOT__C_reg 
                    = vlSelf->top__DOT__div5__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next5 = vlSelf->top__DOT__div5__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next5 = vlSelf->top__DOT__div5__DOT__Mid_reg;
            }
        } else {
            vlSelf->top__DOT__C_next5 = vlSelf->top__DOT__div5__DOT__C_reg;
            vlSelf->top__DOT__Max_next5 = vlSelf->top__DOT__div5__DOT__Max_reg;
            vlSelf->top__DOT__Min_next5 = vlSelf->top__DOT__div5__DOT__Min_reg;
        }
        vlSelf->top__DOT__div5__DOT__C_reg = __Vdly__top__DOT__div5__DOT__C_reg;
        vlSelf->top__DOT__div5__DOT__Max_reg = __Vdly__top__DOT__div5__DOT__Max_reg;
        vlSelf->top__DOT__div5__DOT__A_reg = vlSelf->top__DOT__A_next4;
        vlSelf->top__DOT__div5__DOT__B_reg = vlSelf->top__DOT__B_next4;
    }
    vlSelf->top__DOT__div5__DOT__product = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div5__DOT__B_reg) 
                                               * (IData)(vlSelf->top__DOT__div5__DOT__Mid_reg)));
    vlSelf->top__DOT__div5__DOT__Min_reg = ((IData)(vlSelf->rst)
                                             ? 0U : (IData)(vlSelf->top__DOT__Min_next4));
    vlSelf->top__DOT__div5__DOT__Add_reg = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div5__DOT__Max_reg) 
                                               + (IData)(vlSelf->top__DOT__div5__DOT__Min_reg)));
    vlSelf->top__DOT__A_next4 = vlSelf->top__DOT__div4__DOT__A_reg;
    vlSelf->top__DOT__B_next4 = vlSelf->top__DOT__div4__DOT__B_reg;
    if (vlSelf->rst) {
        __Vdly__top__DOT__div4__DOT__C_reg = 0U;
        __Vdly__top__DOT__div4__DOT__Max_reg = 0U;
        vlSelf->top__DOT__div4__DOT__C_reg = __Vdly__top__DOT__div4__DOT__C_reg;
        vlSelf->top__DOT__div4__DOT__Max_reg = __Vdly__top__DOT__div4__DOT__Max_reg;
        vlSelf->top__DOT__div4__DOT__A_reg = 0U;
        vlSelf->top__DOT__div4__DOT__B_reg = 0U;
    } else {
        __Vdly__top__DOT__div4__DOT__C_reg = vlSelf->top__DOT__C_next3;
        __Vdly__top__DOT__div4__DOT__Max_reg = ((0U 
                                                 == (IData)(vlSelf->top__DOT__div4__DOT__C_reg))
                                                 ? (IData)(vlSelf->top__DOT__A_next3)
                                                 : (IData)(vlSelf->top__DOT__Max_next3));
        if ((0U == (IData)(vlSelf->top__DOT__div4__DOT__B_reg))) {
            __Vdly__top__DOT__div4__DOT__C_reg = 0U;
            vlSelf->top__DOT__Max_next4 = vlSelf->top__DOT__div4__DOT__Max_reg;
            vlSelf->top__DOT__Min_next4 = vlSelf->top__DOT__div4__DOT__Min_reg;
            vlSelf->top__DOT__C_next4 = 0U;
        } else if (((IData)(vlSelf->top__DOT__div4__DOT__A_reg) 
                    >= (IData)(vlSelf->top__DOT__div4__DOT__B_reg))) {
            vlSelf->top__DOT__div4__DOT__Mid_reg = 
                (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->top__DOT__div4__DOT__Add_reg), 1U));
            vlSelf->top__DOT__C_next4 = vlSelf->top__DOT__div4__DOT__C_reg;
            if (((IData)(vlSelf->top__DOT__div4__DOT__product) 
                 < (IData)(vlSelf->top__DOT__div4__DOT__A_reg))) {
                __Vdly__top__DOT__div4__DOT__C_reg 
                    = vlSelf->top__DOT__div4__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next4 = vlSelf->top__DOT__div4__DOT__Max_reg;
                vlSelf->top__DOT__Min_next4 = vlSelf->top__DOT__div4__DOT__Mid_reg;
            } else if (((IData)(vlSelf->top__DOT__div4__DOT__product) 
                        > (IData)(vlSelf->top__DOT__div4__DOT__A_reg))) {
                __Vdly__top__DOT__div4__DOT__C_reg 
                    = vlSelf->top__DOT__div4__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next4 = vlSelf->top__DOT__div4__DOT__Min_reg;
                vlSelf->top__DOT__Max_next4 = vlSelf->top__DOT__div4__DOT__Mid_reg;
            } else {
                __Vdly__top__DOT__div4__DOT__C_reg 
                    = vlSelf->top__DOT__div4__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next4 = vlSelf->top__DOT__div4__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next4 = vlSelf->top__DOT__div4__DOT__Mid_reg;
            }
        } else {
            vlSelf->top__DOT__C_next4 = vlSelf->top__DOT__div4__DOT__C_reg;
            vlSelf->top__DOT__Max_next4 = vlSelf->top__DOT__div4__DOT__Max_reg;
            vlSelf->top__DOT__Min_next4 = vlSelf->top__DOT__div4__DOT__Min_reg;
        }
        vlSelf->top__DOT__div4__DOT__C_reg = __Vdly__top__DOT__div4__DOT__C_reg;
        vlSelf->top__DOT__div4__DOT__Max_reg = __Vdly__top__DOT__div4__DOT__Max_reg;
        vlSelf->top__DOT__div4__DOT__A_reg = vlSelf->top__DOT__A_next3;
        vlSelf->top__DOT__div4__DOT__B_reg = vlSelf->top__DOT__B_next3;
    }
    vlSelf->top__DOT__div4__DOT__product = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div4__DOT__B_reg) 
                                               * (IData)(vlSelf->top__DOT__div4__DOT__Mid_reg)));
    vlSelf->top__DOT__div4__DOT__Min_reg = ((IData)(vlSelf->rst)
                                             ? 0U : (IData)(vlSelf->top__DOT__Min_next3));
    vlSelf->top__DOT__div4__DOT__Add_reg = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div4__DOT__Max_reg) 
                                               + (IData)(vlSelf->top__DOT__div4__DOT__Min_reg)));
    vlSelf->top__DOT__A_next3 = vlSelf->top__DOT__div3__DOT__A_reg;
    vlSelf->top__DOT__B_next3 = vlSelf->top__DOT__div3__DOT__B_reg;
    if (vlSelf->rst) {
        __Vdly__top__DOT__div3__DOT__C_reg = 0U;
        __Vdly__top__DOT__div3__DOT__Max_reg = 0U;
        vlSelf->top__DOT__div3__DOT__C_reg = __Vdly__top__DOT__div3__DOT__C_reg;
        vlSelf->top__DOT__div3__DOT__Max_reg = __Vdly__top__DOT__div3__DOT__Max_reg;
        vlSelf->top__DOT__div3__DOT__A_reg = 0U;
        vlSelf->top__DOT__div3__DOT__B_reg = 0U;
    } else {
        __Vdly__top__DOT__div3__DOT__C_reg = vlSelf->top__DOT__C_next2;
        __Vdly__top__DOT__div3__DOT__Max_reg = ((0U 
                                                 == (IData)(vlSelf->top__DOT__div3__DOT__C_reg))
                                                 ? (IData)(vlSelf->top__DOT__A_next2)
                                                 : (IData)(vlSelf->top__DOT__Max_next2));
        if ((0U == (IData)(vlSelf->top__DOT__div3__DOT__B_reg))) {
            __Vdly__top__DOT__div3__DOT__C_reg = 0U;
            vlSelf->top__DOT__Max_next3 = vlSelf->top__DOT__div3__DOT__Max_reg;
            vlSelf->top__DOT__Min_next3 = vlSelf->top__DOT__div3__DOT__Min_reg;
            vlSelf->top__DOT__C_next3 = 0U;
        } else if (((IData)(vlSelf->top__DOT__div3__DOT__A_reg) 
                    >= (IData)(vlSelf->top__DOT__div3__DOT__B_reg))) {
            vlSelf->top__DOT__div3__DOT__Mid_reg = 
                (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->top__DOT__div3__DOT__Add_reg), 1U));
            vlSelf->top__DOT__C_next3 = vlSelf->top__DOT__div3__DOT__C_reg;
            if (((IData)(vlSelf->top__DOT__div3__DOT__product) 
                 < (IData)(vlSelf->top__DOT__div3__DOT__A_reg))) {
                __Vdly__top__DOT__div3__DOT__C_reg 
                    = vlSelf->top__DOT__div3__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next3 = vlSelf->top__DOT__div3__DOT__Max_reg;
                vlSelf->top__DOT__Min_next3 = vlSelf->top__DOT__div3__DOT__Mid_reg;
            } else if (((IData)(vlSelf->top__DOT__div3__DOT__product) 
                        > (IData)(vlSelf->top__DOT__div3__DOT__A_reg))) {
                __Vdly__top__DOT__div3__DOT__C_reg 
                    = vlSelf->top__DOT__div3__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next3 = vlSelf->top__DOT__div3__DOT__Min_reg;
                vlSelf->top__DOT__Max_next3 = vlSelf->top__DOT__div3__DOT__Mid_reg;
            } else {
                __Vdly__top__DOT__div3__DOT__C_reg 
                    = vlSelf->top__DOT__div3__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next3 = vlSelf->top__DOT__div3__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next3 = vlSelf->top__DOT__div3__DOT__Mid_reg;
            }
        } else {
            vlSelf->top__DOT__C_next3 = vlSelf->top__DOT__div3__DOT__C_reg;
            vlSelf->top__DOT__Max_next3 = vlSelf->top__DOT__div3__DOT__Max_reg;
            vlSelf->top__DOT__Min_next3 = vlSelf->top__DOT__div3__DOT__Min_reg;
        }
        vlSelf->top__DOT__div3__DOT__C_reg = __Vdly__top__DOT__div3__DOT__C_reg;
        vlSelf->top__DOT__div3__DOT__Max_reg = __Vdly__top__DOT__div3__DOT__Max_reg;
        vlSelf->top__DOT__div3__DOT__A_reg = vlSelf->top__DOT__A_next2;
        vlSelf->top__DOT__div3__DOT__B_reg = vlSelf->top__DOT__B_next2;
    }
    vlSelf->top__DOT__div3__DOT__product = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div3__DOT__B_reg) 
                                               * (IData)(vlSelf->top__DOT__div3__DOT__Mid_reg)));
    vlSelf->top__DOT__div3__DOT__Min_reg = ((IData)(vlSelf->rst)
                                             ? 0U : (IData)(vlSelf->top__DOT__Min_next2));
    vlSelf->top__DOT__div3__DOT__Add_reg = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div3__DOT__Max_reg) 
                                               + (IData)(vlSelf->top__DOT__div3__DOT__Min_reg)));
    vlSelf->top__DOT__A_next2 = vlSelf->top__DOT__div2__DOT__A_reg;
    vlSelf->top__DOT__B_next2 = vlSelf->top__DOT__div2__DOT__B_reg;
    if (vlSelf->rst) {
        __Vdly__top__DOT__div2__DOT__C_reg = 0U;
        __Vdly__top__DOT__div2__DOT__Max_reg = 0U;
        vlSelf->top__DOT__div2__DOT__C_reg = __Vdly__top__DOT__div2__DOT__C_reg;
        vlSelf->top__DOT__div2__DOT__Max_reg = __Vdly__top__DOT__div2__DOT__Max_reg;
        vlSelf->top__DOT__div2__DOT__A_reg = 0U;
        vlSelf->top__DOT__div2__DOT__B_reg = 0U;
    } else {
        __Vdly__top__DOT__div2__DOT__C_reg = vlSelf->top__DOT__C_next1;
        __Vdly__top__DOT__div2__DOT__Max_reg = ((0U 
                                                 == (IData)(vlSelf->top__DOT__div2__DOT__C_reg))
                                                 ? (IData)(vlSelf->top__DOT__A_next1)
                                                 : (IData)(vlSelf->top__DOT__Max_next1));
        if ((0U == (IData)(vlSelf->top__DOT__div2__DOT__B_reg))) {
            __Vdly__top__DOT__div2__DOT__C_reg = 0U;
            vlSelf->top__DOT__Max_next2 = vlSelf->top__DOT__div2__DOT__Max_reg;
            vlSelf->top__DOT__Min_next2 = vlSelf->top__DOT__div2__DOT__Min_reg;
            vlSelf->top__DOT__C_next2 = 0U;
        } else if (((IData)(vlSelf->top__DOT__div2__DOT__A_reg) 
                    >= (IData)(vlSelf->top__DOT__div2__DOT__B_reg))) {
            vlSelf->top__DOT__div2__DOT__Mid_reg = 
                (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->top__DOT__div2__DOT__Add_reg), 1U));
            vlSelf->top__DOT__C_next2 = vlSelf->top__DOT__div2__DOT__C_reg;
            if (((IData)(vlSelf->top__DOT__div2__DOT__product) 
                 < (IData)(vlSelf->top__DOT__div2__DOT__A_reg))) {
                __Vdly__top__DOT__div2__DOT__C_reg 
                    = vlSelf->top__DOT__div2__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next2 = vlSelf->top__DOT__div2__DOT__Max_reg;
                vlSelf->top__DOT__Min_next2 = vlSelf->top__DOT__div2__DOT__Mid_reg;
            } else if (((IData)(vlSelf->top__DOT__div2__DOT__product) 
                        > (IData)(vlSelf->top__DOT__div2__DOT__A_reg))) {
                __Vdly__top__DOT__div2__DOT__C_reg 
                    = vlSelf->top__DOT__div2__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next2 = vlSelf->top__DOT__div2__DOT__Min_reg;
                vlSelf->top__DOT__Max_next2 = vlSelf->top__DOT__div2__DOT__Mid_reg;
            } else {
                __Vdly__top__DOT__div2__DOT__C_reg 
                    = vlSelf->top__DOT__div2__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next2 = vlSelf->top__DOT__div2__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next2 = vlSelf->top__DOT__div2__DOT__Mid_reg;
            }
        } else {
            vlSelf->top__DOT__C_next2 = vlSelf->top__DOT__div2__DOT__C_reg;
            vlSelf->top__DOT__Max_next2 = vlSelf->top__DOT__div2__DOT__Max_reg;
            vlSelf->top__DOT__Min_next2 = vlSelf->top__DOT__div2__DOT__Min_reg;
        }
        vlSelf->top__DOT__div2__DOT__C_reg = __Vdly__top__DOT__div2__DOT__C_reg;
        vlSelf->top__DOT__div2__DOT__Max_reg = __Vdly__top__DOT__div2__DOT__Max_reg;
        vlSelf->top__DOT__div2__DOT__A_reg = vlSelf->top__DOT__A_next1;
        vlSelf->top__DOT__div2__DOT__B_reg = vlSelf->top__DOT__B_next1;
    }
    vlSelf->top__DOT__div2__DOT__product = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div2__DOT__B_reg) 
                                               * (IData)(vlSelf->top__DOT__div2__DOT__Mid_reg)));
    vlSelf->top__DOT__div2__DOT__Min_reg = ((IData)(vlSelf->rst)
                                             ? 0U : (IData)(vlSelf->top__DOT__Min_next1));
    vlSelf->top__DOT__div2__DOT__Add_reg = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div2__DOT__Max_reg) 
                                               + (IData)(vlSelf->top__DOT__div2__DOT__Min_reg)));
    vlSelf->top__DOT__A_next1 = vlSelf->top__DOT__div1__DOT__A_reg;
    vlSelf->top__DOT__B_next1 = vlSelf->top__DOT__div1__DOT__B_reg;
    if (vlSelf->rst) {
        __Vdly__top__DOT__div1__DOT__C_reg = 0U;
        __Vdly__top__DOT__div1__DOT__Max_reg = 0U;
        vlSelf->top__DOT__div1__DOT__A_reg = 0U;
        vlSelf->top__DOT__div1__DOT__B_reg = 0U;
    } else {
        __Vdly__top__DOT__div1__DOT__C_reg = 0U;
        __Vdly__top__DOT__div1__DOT__Max_reg = ((0U 
                                                 == (IData)(vlSelf->top__DOT__div1__DOT__C_reg))
                                                 ? (IData)(vlSelf->A)
                                                 : 0x64U);
        if ((0U == (IData)(vlSelf->top__DOT__div1__DOT__B_reg))) {
            __Vdly__top__DOT__div1__DOT__C_reg = 0U;
            vlSelf->top__DOT__Max_next1 = vlSelf->top__DOT__div1__DOT__Max_reg;
            vlSelf->top__DOT__Min_next1 = vlSelf->top__DOT__div1__DOT__Min_reg;
            vlSelf->top__DOT__C_next1 = 0U;
        } else if (((IData)(vlSelf->top__DOT__div1__DOT__A_reg) 
                    >= (IData)(vlSelf->top__DOT__div1__DOT__B_reg))) {
            vlSelf->top__DOT__div1__DOT__Mid_reg = 
                (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->top__DOT__div1__DOT__Add_reg), 1U));
            vlSelf->top__DOT__C_next1 = vlSelf->top__DOT__div1__DOT__C_reg;
            if (((IData)(vlSelf->top__DOT__div1__DOT__product) 
                 < (IData)(vlSelf->top__DOT__div1__DOT__A_reg))) {
                __Vdly__top__DOT__div1__DOT__C_reg 
                    = vlSelf->top__DOT__div1__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next1 = vlSelf->top__DOT__div1__DOT__Max_reg;
                vlSelf->top__DOT__Min_next1 = vlSelf->top__DOT__div1__DOT__Mid_reg;
            } else if (((IData)(vlSelf->top__DOT__div1__DOT__product) 
                        > (IData)(vlSelf->top__DOT__div1__DOT__A_reg))) {
                __Vdly__top__DOT__div1__DOT__C_reg 
                    = vlSelf->top__DOT__div1__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next1 = vlSelf->top__DOT__div1__DOT__Min_reg;
                vlSelf->top__DOT__Max_next1 = vlSelf->top__DOT__div1__DOT__Mid_reg;
            } else {
                __Vdly__top__DOT__div1__DOT__C_reg 
                    = vlSelf->top__DOT__div1__DOT__Mid_reg;
                vlSelf->top__DOT__Max_next1 = vlSelf->top__DOT__div1__DOT__Mid_reg;
                vlSelf->top__DOT__Min_next1 = vlSelf->top__DOT__div1__DOT__Mid_reg;
            }
        } else {
            vlSelf->top__DOT__C_next1 = vlSelf->top__DOT__div1__DOT__C_reg;
            vlSelf->top__DOT__Max_next1 = vlSelf->top__DOT__div1__DOT__Max_reg;
            vlSelf->top__DOT__Min_next1 = vlSelf->top__DOT__div1__DOT__Min_reg;
        }
        vlSelf->top__DOT__div1__DOT__A_reg = vlSelf->A;
        vlSelf->top__DOT__div1__DOT__B_reg = vlSelf->B;
    }
    vlSelf->top__DOT__div1__DOT__C_reg = __Vdly__top__DOT__div1__DOT__C_reg;
    vlSelf->top__DOT__div1__DOT__Max_reg = __Vdly__top__DOT__div1__DOT__Max_reg;
    vlSelf->top__DOT__div1__DOT__Min_reg = 0U;
    vlSelf->top__DOT__div1__DOT__Add_reg = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div1__DOT__Max_reg) 
                                               + (IData)(vlSelf->top__DOT__div1__DOT__Min_reg)));
    vlSelf->top__DOT__div1__DOT__product = (0xffffU 
                                            & ((IData)(vlSelf->top__DOT__div1__DOT__B_reg) 
                                               * (IData)(vlSelf->top__DOT__div1__DOT__Mid_reg)));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
