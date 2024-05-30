// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvUnitTB.h for the primary calling header

#include "VconvUnitTB__pch.h"
#include "VconvUnitTB___024root.h"

VlCoroutine VconvUnitTB___024root___eval_initial__TOP__Vtiming__0(VconvUnitTB___024root* vlSelf);
VlCoroutine VconvUnitTB___024root___eval_initial__TOP__Vtiming__1(VconvUnitTB___024root* vlSelf);

void VconvUnitTB___024root___eval_initial(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VconvUnitTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VconvUnitTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__clk__0 
        = vlSelf->convUnitTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__convUnitTB__DOT__rst__0 
        = vlSelf->convUnitTB__DOT__rst;
}

extern const VlWide<13>/*415:0*/ VconvUnitTB__ConstPool__CONST_h1fefa1db_0;
extern const VlWide<13>/*415:0*/ VconvUnitTB__ConstPool__CONST_h1429fd22_0;

VL_INLINE_OPT VlCoroutine VconvUnitTB___024root___eval_initial__TOP__Vtiming__0(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0U, nullptr, 
                                       "vsrc/conv/convUnitTB.v", 
                                       19);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->convUnitTB__DOT__clk = 0U;
    vlSelf->convUnitTB__DOT__rst = 1U;
    vlSelf->convUnitTB__DOT__img[0U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[0U];
    vlSelf->convUnitTB__DOT__img[1U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[1U];
    vlSelf->convUnitTB__DOT__img[2U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[2U];
    vlSelf->convUnitTB__DOT__img[3U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[3U];
    vlSelf->convUnitTB__DOT__img[4U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[4U];
    vlSelf->convUnitTB__DOT__img[5U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[5U];
    vlSelf->convUnitTB__DOT__img[6U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[6U];
    vlSelf->convUnitTB__DOT__img[7U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[7U];
    vlSelf->convUnitTB__DOT__img[8U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[8U];
    vlSelf->convUnitTB__DOT__img[9U] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[9U];
    vlSelf->convUnitTB__DOT__img[0xaU] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[0xaU];
    vlSelf->convUnitTB__DOT__img[0xbU] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[0xbU];
    vlSelf->convUnitTB__DOT__img[0xcU] = VconvUnitTB__ConstPool__CONST_h1fefa1db_0[0xcU];
    vlSelf->convUnitTB__DOT__fit[0U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[0U];
    vlSelf->convUnitTB__DOT__fit[1U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[1U];
    vlSelf->convUnitTB__DOT__fit[2U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[2U];
    vlSelf->convUnitTB__DOT__fit[3U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[3U];
    vlSelf->convUnitTB__DOT__fit[4U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[4U];
    vlSelf->convUnitTB__DOT__fit[5U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[5U];
    vlSelf->convUnitTB__DOT__fit[6U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[6U];
    vlSelf->convUnitTB__DOT__fit[7U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[7U];
    vlSelf->convUnitTB__DOT__fit[8U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[8U];
    vlSelf->convUnitTB__DOT__fit[9U] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[9U];
    vlSelf->convUnitTB__DOT__fit[0xaU] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[0xaU];
    vlSelf->convUnitTB__DOT__fit[0xbU] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[0xbU];
    vlSelf->convUnitTB__DOT__fit[0xcU] = VconvUnitTB__ConstPool__CONST_h1429fd22_0[0xcU];
    VL_WRITEF_NX("[img]: \n",0);
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[0xcU]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x17U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[0xbU] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x16U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[0xbU]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x15U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[0xaU] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x14U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[0xaU]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x13U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[9U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x12U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[9U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x11U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[8U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x10U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[8U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xfU;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[7U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xeU;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[7U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xdU;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[6U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xcU;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[6U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xbU;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[5U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xaU;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[5U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 9U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[4U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 8U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[4U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 7U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[3U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 6U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[3U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 5U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[2U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 4U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[2U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 3U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[1U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 2U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[1U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 1U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__img[0U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__img[0U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xffffffffU;
    VL_WRITEF_NX("[fit]: \n",0);
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[0xcU]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x17U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[0xbU] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x16U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[0xbU]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x15U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[0xaU] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x14U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[0xaU]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x13U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[9U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x12U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[9U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x11U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[8U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0x10U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[8U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xfU;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[7U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xeU;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[7U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xdU;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[6U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xcU;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[6U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xbU;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[5U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xaU;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[5U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 9U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[4U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 8U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[4U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 7U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[3U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 6U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[3U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 5U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[2U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 4U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[2U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 3U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[1U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 2U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[1U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 1U;
    vlSelf->convUnitTB__DOT__tmp = (vlSelf->convUnitTB__DOT__fit[0U] 
                                    >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0U;
    vlSelf->convUnitTB__DOT__tmp = (0xffffU & vlSelf->convUnitTB__DOT__fit[0U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convUnitTB__DOT__tmp);
    vlSelf->convUnitTB__DOT__i = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/conv/convUnitTB.v", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->convUnitTB__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0xbb8ULL, nullptr, 
                                       "vsrc/conv/convUnitTB.v", 
                                       46);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[conv]: %4#\n",0,16,vlSelf->convUnitTB__DOT__res);
    VL_FINISH_MT("vsrc/conv/convUnitTB.v", 48, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VconvUnitTB___024root___eval_initial__TOP__Vtiming__1(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "vsrc/conv/convUnitTB.v", 
                                           16);
        vlSelf->convUnitTB__DOT__clk = (1U & (~ (IData)(vlSelf->convUnitTB__DOT__clk)));
    }
}

void VconvUnitTB___024root___eval_act(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_act\n"); );
}

void VconvUnitTB___024root___nba_sequent__TOP__0(VconvUnitTB___024root* vlSelf);

void VconvUnitTB___024root___eval_nba(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvUnitTB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VconvUnitTB___024root___nba_sequent__TOP__0(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->convUnitTB__DOT__rst) {
        vlSelf->convUnitTB__DOT__res = 0U;
        vlSelf->convUnitTB__DOT__UUT__DOT__selInA = 0U;
        vlSelf->convUnitTB__DOT__UUT__DOT__selInB = 0U;
        vlSelf->convUnitTB__DOT__UUT__DOT__i = 0U;
    } else {
        vlSelf->convUnitTB__DOT__res = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC;
        if (VL_LTS_III(32, 0x18U, vlSelf->convUnitTB__DOT__UUT__DOT__i)) {
            vlSelf->convUnitTB__DOT__UUT__DOT__selInA = 0U;
            vlSelf->convUnitTB__DOT__UUT__DOT__selInB = 0U;
        } else {
            vlSelf->convUnitTB__DOT__UUT__DOT__selInA 
                = ((0x18fU >= (0x1ffU & ((IData)(0x180U) 
                                         - VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U))))
                    ? (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(0x180U) 
                                            - VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U))))
                                    ? 0U : (vlSelf->convUnitTB__DOT__img[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U)))))) 
                                  | (vlSelf->convUnitTB__DOT__img[
                                     (0xfU & (((IData)(0x180U) 
                                               - VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U)) 
                                              >> 5U))] 
                                     >> (0x1fU & ((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U))))))
                    : 0U);
            vlSelf->convUnitTB__DOT__UUT__DOT__selInB 
                = ((0x18fU >= (0x1ffU & ((IData)(0x180U) 
                                         - VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U))))
                    ? (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(0x180U) 
                                            - VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U))))
                                    ? 0U : (vlSelf->convUnitTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & ((IData)(0x180U) 
                                                    - 
                                                    VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x180U) 
                                                      - 
                                                      VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U)))))) 
                                  | (vlSelf->convUnitTB__DOT__fit[
                                     (0xfU & (((IData)(0x180U) 
                                               - VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U)) 
                                              >> 5U))] 
                                     >> (0x1fU & ((IData)(0x180U) 
                                                  - 
                                                  VL_SHIFTL_III(9,32,32, vlSelf->convUnitTB__DOT__UUT__DOT__i, 4U))))))
                    : 0U);
            vlSelf->convUnitTB__DOT__UUT__DOT__i = 
                ((IData)(1U) + vlSelf->convUnitTB__DOT__UUT__DOT__i);
        }
    }
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed 
        = vlSelf->convUnitTB__DOT__UUT__DOT__selInA;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed 
        = vlSelf->convUnitTB__DOT__UUT__DOT__selInB;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed 
        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed), (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC 
        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed 
        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed 
        = vlSelf->convUnitTB__DOT__res;
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed 
        = (0xffffU & ((IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed) 
                      + (IData)(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed)));
    vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC 
        = vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed;
}

void VconvUnitTB___024root___timing_resume(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VconvUnitTB___024root___eval_triggers__act(VconvUnitTB___024root* vlSelf);

bool VconvUnitTB___024root___eval_phase__act(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VconvUnitTB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VconvUnitTB___024root___timing_resume(vlSelf);
        VconvUnitTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VconvUnitTB___024root___eval_phase__nba(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VconvUnitTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__nba(VconvUnitTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VconvUnitTB___024root___dump_triggers__act(VconvUnitTB___024root* vlSelf);
#endif  // VL_DEBUG

void VconvUnitTB___024root___eval(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VconvUnitTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/convUnitTB.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VconvUnitTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/conv/convUnitTB.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VconvUnitTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VconvUnitTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VconvUnitTB___024root___eval_debug_assertions(VconvUnitTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
