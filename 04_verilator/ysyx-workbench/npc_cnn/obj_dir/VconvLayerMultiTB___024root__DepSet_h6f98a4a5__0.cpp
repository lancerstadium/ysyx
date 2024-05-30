// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerMultiTB.h for the primary calling header

#include "VconvLayerMultiTB__pch.h"
#include "VconvLayerMultiTB__Syms.h"
#include "VconvLayerMultiTB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerMultiTB___024root___dump_triggers__act(VconvLayerMultiTB___024root* vlSelf);
#endif  // VL_DEBUG

void VconvLayerMultiTB___024root___eval_triggers__act(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->convLayerMultiTB__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__clk__0))) 
                                     | ((IData)(vlSelf->convLayerMultiTB__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->convLayerMultiTB__DOT__UUT__DOT__gRst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__gRst__0))) 
                                     | ((IData)(vlSelf->convLayerMultiTB__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__gRst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__gRst__0))) 
                                     | ((IData)(vlSelf->convLayerMultiTB__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst__0))) 
                                     | ((IData)(vlSelf->convLayerMultiTB__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__clk__0 
        = vlSelf->convLayerMultiTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__rst__0 
        = vlSelf->convLayerMultiTB__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__gRst__0 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__gRst;
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__gRst__0 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__gRst;
    vlSelf->__Vtrigprevexpr___TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst__0 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VconvLayerMultiTB___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB___024root___nba_sequent__TOP__0(VconvLayerMultiTB___024root* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(VconvLayerMultiTB_convUnit__D10* vlSelf);
void VconvLayerMultiTB___024root___nba_sequent__TOP__1(VconvLayerMultiTB___024root* vlSelf);
void VconvLayerMultiTB___024root___nba_sequent__TOP__2(VconvLayerMultiTB___024root* vlSelf);
void VconvLayerMultiTB___024root___act_comb__TOP__2(VconvLayerMultiTB___024root* vlSelf);

void VconvLayerMultiTB___024root___eval_nba(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU));
        VconvLayerMultiTB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU));
        VconvLayerMultiTB_convUnit__D10___nba_sequent__TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0((&vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU));
        VconvLayerMultiTB___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvLayerMultiTB___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvLayerMultiTB___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
}

VL_INLINE_OPT void VconvLayerMultiTB___024root___nba_sequent__TOP__0(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0;
    VL_ZERO_W(224, convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0);
    // Body
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[0U] 
        = (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res) 
            << 0x10U) | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.res));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[1U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[2U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[3U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[4U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res)))))) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[5U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[6U] 
        = (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.res) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res))))) 
                                  >> 0x20U)) >> 0x10U));
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[0U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[0U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[1U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[1U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[2U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[2U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[3U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[3U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[4U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[4U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[5U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[5U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[6U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes[6U];
    if ((0x30ffU >= (0x3fffU & ((IData)(0x3020U) - 
                                ((IData)(0xe0U) * vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuCnt))))) {
        VL_ASSIGNSEL_WW(12544,224,(0x3fffU & ((IData)(0x3020U) 
                                              - ((IData)(0xe0U) 
                                                 * vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuCnt))), vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__0__KET____DOT__UUT__res, convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0);
    }
}

VL_INLINE_OPT void VconvLayerMultiTB___024root___nba_sequent__TOP__1(VconvLayerMultiTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlWide<7>/*223:0*/ convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0;
    VL_ZERO_W(224, convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0);
    // Body
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[0U] 
        = (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res) 
            << 0x10U) | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.res));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[1U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[2U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[3U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[4U] 
        = (((0xffffU & (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.res)) 
            | ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                         << 0x10U) 
                                                        | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res)))))) 
                             << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[5U] 
        = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                    << 0x10U) 
                                                   | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[6U] 
        = (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.res) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res) 
                                                      << 0x10U) 
                                                     | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res))))) 
                                  >> 0x20U)) >> 0x10U));
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[0U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[0U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[1U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[1U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[2U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[2U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[3U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[3U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[4U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[4U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[5U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[5U];
    convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0[6U] 
        = vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes[6U];
    if ((0x30ffU >= (0x3fffU & ((IData)(0x3020U) - 
                                ((IData)(0xe0U) * vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuCnt))))) {
        VL_ASSIGNSEL_WW(12544,224,(0x3fffU & ((IData)(0x3020U) 
                                              - ((IData)(0xe0U) 
                                                 * vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuCnt))), vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__1__KET____DOT__UUT__res, convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT____Vlvbound_h9d72c2ce__0);
    }
}
