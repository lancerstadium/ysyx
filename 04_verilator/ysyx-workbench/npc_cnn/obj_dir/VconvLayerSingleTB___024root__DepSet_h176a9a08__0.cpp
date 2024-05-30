// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VconvLayerSingleTB.h for the primary calling header

#include "VconvLayerSingleTB__pch.h"
#include "VconvLayerSingleTB___024root.h"

VL_ATTR_COLD void VconvLayerSingleTB___024root___eval_initial__TOP(VconvLayerSingleTB___024root* vlSelf);
VlCoroutine VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__0(VconvLayerSingleTB___024root* vlSelf);
VlCoroutine VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__1(VconvLayerSingleTB___024root* vlSelf);

void VconvLayerSingleTB___024root___eval_initial(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_initial\n"); );
    // Body
    VconvLayerSingleTB___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0 
        = vlSelf->convLayerSingleTB__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__rst__0 
        = vlSelf->convLayerSingleTB__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__convLayerSingleTB__DOT__UUT__DOT__gRst__0 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst;
}

extern const VlWide<13>/*415:0*/ VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0;

VL_INLINE_OPT VlCoroutine VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__0(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0U, nullptr, 
                                       "vsrc/conv/convLayerSingleTB.v", 
                                       26);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->convLayerSingleTB__DOT__clkCnt = 0U;
    vlSelf->convLayerSingleTB__DOT__clk = 0U;
    vlSelf->convLayerSingleTB__DOT__rst = 1U;
    vlSelf->convLayerSingleTB__DOT__img[0U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[0U];
    vlSelf->convLayerSingleTB__DOT__img[1U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[1U];
    vlSelf->convLayerSingleTB__DOT__img[2U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[2U];
    vlSelf->convLayerSingleTB__DOT__img[3U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[3U];
    vlSelf->convLayerSingleTB__DOT__img[4U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[4U];
    vlSelf->convLayerSingleTB__DOT__img[5U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[5U];
    vlSelf->convLayerSingleTB__DOT__img[6U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[6U];
    vlSelf->convLayerSingleTB__DOT__img[7U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[7U];
    vlSelf->convLayerSingleTB__DOT__img[8U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[8U];
    vlSelf->convLayerSingleTB__DOT__img[9U] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[9U];
    vlSelf->convLayerSingleTB__DOT__img[0xaU] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[0xaU];
    vlSelf->convLayerSingleTB__DOT__img[0xbU] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[0xbU];
    vlSelf->convLayerSingleTB__DOT__img[0xcU] = VconvLayerSingleTB__ConstPool__CONST_h1fefa1db_0[0xcU];
    vlSelf->convLayerSingleTB__DOT__fit[0U] = 0xffff0000U;
    vlSelf->convLayerSingleTB__DOT__fit[1U] = 0xffff0000U;
    vlSelf->convLayerSingleTB__DOT__fit[2U] = 0x10000U;
    vlSelf->convLayerSingleTB__DOT__fit[3U] = 0x10000U;
    vlSelf->convLayerSingleTB__DOT__fit[4U] = 0U;
    VL_WRITEF_NX("[img]: \n",0);
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[0xcU]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x17U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[0xbU] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x16U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[0xbU]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x15U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[0xaU] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x14U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[0xaU]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x13U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[9U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x12U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[9U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x11U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[8U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0x10U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[8U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xfU;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[7U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xeU;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[7U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xdU;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[6U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xcU;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[6U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xbU;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[5U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xaU;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[5U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 9U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[4U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 8U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[4U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 7U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[3U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 6U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[3U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 5U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[2U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 4U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[2U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 3U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[1U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 2U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[1U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 1U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__img[0U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__img[0U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xffffffffU;
    VL_WRITEF_NX("[fit]: \n",0);
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__fit[4U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 7U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__fit[3U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 6U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__fit[3U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 5U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__fit[2U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 4U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__fit[2U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 3U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__fit[1U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 2U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__fit[1U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 1U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__fit[0U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__fit[0U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "vsrc/conv/convLayerSingleTB.v", 
                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->convLayerSingleTB__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x264e4ULL, 
                                       nullptr, "vsrc/conv/convLayerSingleTB.v", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[conv1]: \n",0);
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__res[4U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 7U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__res[3U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 6U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__res[3U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 5U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__res[2U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 4U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__res[2U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 3U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__res[1U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 2U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__res[1U]);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 1U;
    vlSelf->convLayerSingleTB__DOT__tmp = (vlSelf->convLayerSingleTB__DOT__res[0U] 
                                           >> 0x10U);
    VL_WRITEF_NX(" %4d",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0U;
    vlSelf->convLayerSingleTB__DOT__tmp = (0xffffU 
                                           & vlSelf->convLayerSingleTB__DOT__res[0U]);
    VL_WRITEF_NX(" %4d\n",0,16,vlSelf->convLayerSingleTB__DOT__tmp);
    vlSelf->convLayerSingleTB__DOT__i = 0xffffffffU;
    VL_FINISH_MT("vsrc/conv/convLayerSingleTB.v", 66, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__1(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "vsrc/conv/convLayerSingleTB.v", 
                                           19);
        vlSelf->convLayerSingleTB__DOT__clk = (1U & 
                                               (~ (IData)(vlSelf->convLayerSingleTB__DOT__clk)));
    }
}

void VconvLayerSingleTB___024root___act_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf);
void VconvLayerSingleTB___024root___act_comb__TOP__0(VconvLayerSingleTB___024root* vlSelf);

void VconvLayerSingleTB___024root___eval_act(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VconvLayerSingleTB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((9ULL & vlSelf->__VactTriggered.word(0U))) {
        VconvLayerSingleTB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void VconvLayerSingleTB___024root___act_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___act_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0;
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0 = 0;
    // Body
    if (vlSelf->convLayerSingleTB__DOT__rst) {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst = 1U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum = 0U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel = 0U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt = 0U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt = 0U;
    } else if ((3U > (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))) {
        if ((0xbU == vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt)) {
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt 
                = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt);
            if ((0U == (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel))) {
                vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel = 1U;
            } else {
                vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)));
                vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel = 0U;
            }
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt = 0U;
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst = 1U;
        } else {
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt 
                = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt);
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst = 0U;
        }
    }
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes;
    if ((0x8fU >= (0xffU & ((IData)(0x80U) - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt, 4U))))) {
        VL_ASSIGNSEL_WI(144,16,(0xffU & ((IData)(0x80U) 
                                         - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt, 4U))), vlSelf->convLayerSingleTB__DOT__res, convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0);
    }
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c 
        = ((0U == (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel))
            ? 1U : 3U);
}

VL_INLINE_OPT void VconvLayerSingleTB___024root___act_comb__TOP__0(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address = 0U;
    if ((0U == (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel))) {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x50U) 
                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x50U) 
                                                                * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x50U) 
                                                  * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x50U) 
                                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x50U) 
                                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x50U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x50U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x50U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x50U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x50U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x50U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x50U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0xa0U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0xa0U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0xa0U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xa0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0xa0U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0xa0U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xa0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0xa0U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xa0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
    } else {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x10U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x10U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x10U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x10U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x10U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x60U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x60U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x60U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x60U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x60U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x60U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x60U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x60U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x60U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0xb0U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0xb0U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0xb0U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xb0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0xb0U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0xb0U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xb0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0xb0U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xb0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x20U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x20U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x20U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x20U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x20U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x20U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0x70U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0x70U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0x70U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x70U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0x70U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0x70U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x70U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0x70U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0x70U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1 
            = ((0x18fU >= (0x1ffU & ((IData)(0x160U) 
                                     - ((IData)(0xc0U) 
                                        + ((IData)(0x50U) 
                                           * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                ? (0xffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->convLayerSingleTB__DOT__img[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x160U) 
                                                               - 
                                                               ((IData)(0xc0U) 
                                                                + 
                                                                ((IData)(0x50U) 
                                                                 * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x160U) 
                                                  - 
                                                  ((IData)(0xc0U) 
                                                   + 
                                                   ((IData)(0x50U) 
                                                    * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x160U) 
                                                 - 
                                                 ((IData)(0xc0U) 
                                                  + 
                                                  ((IData)(0x50U) 
                                                   * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum))))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelf->convLayerSingleTB__DOT__img[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & ((IData)(0x160U) 
                                                                      - 
                                                                      ((IData)(0xc0U) 
                                                                       + 
                                                                       ((IData)(0x50U) 
                                                                        * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))) 
                                           | ((QData)((IData)(
                                                              vlSelf->convLayerSingleTB__DOT__img[
                                                              (0xfU 
                                                               & (((IData)(0x160U) 
                                                                   - 
                                                                   ((IData)(0xc0U) 
                                                                    + 
                                                                    ((IData)(0x50U) 
                                                                     * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x160U) 
                                                     - 
                                                     ((IData)(0xc0U) 
                                                      + 
                                                      ((IData)(0x50U) 
                                                       * (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum)))))))))
                : 0ULL);
        if ((0x8fU >= (0xffU & ((IData)(0x60U) - ((IData)(0x30U) 
                                                  * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))))) {
            VL_ASSIGNSEL_WQ(144,48,(0xffU & ((IData)(0x60U) 
                                             - ((IData)(0x30U) 
                                                * vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address))), vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart, vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1);
        }
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address 
            = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address);
    }
}

void VconvLayerSingleTB___024root___nba_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf);
void VconvLayerSingleTB___024root___nba_sequent__TOP__1(VconvLayerSingleTB___024root* vlSelf);

void VconvLayerSingleTB___024root___eval_nba(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvLayerSingleTB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvLayerSingleTB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VconvLayerSingleTB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void VconvLayerSingleTB___024root___nba_sequent__TOP__0(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->convLayerSingleTB__DOT__clkCnt = ((IData)(1U) 
                                              + vlSelf->convLayerSingleTB__DOT__clkCnt);
}

VL_INLINE_OPT void VconvLayerSingleTB___024root___nba_sequent__TOP__1(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0;
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0 = 0;
    // Body
    if (vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst) {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes = 0U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA = 0U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB = 0U;
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i = 0U;
    } else {
        vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes 
            = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC;
        if (VL_LTS_III(32, 8U, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i)) {
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA = 0U;
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB = 0U;
        } else {
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA 
                = ((0x8fU >= (0xffU & ((IData)(0x80U) 
                                       - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U))))
                    ? (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(0x80U) 
                                            - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U))))
                                    ? 0U : (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                            (((IData)(0xfU) 
                                              + (0xffU 
                                                 & ((IData)(0x80U) 
                                                    - 
                                                    VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x80U) 
                                                      - 
                                                      VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U)))))) 
                                  | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[
                                     (7U & (((IData)(0x80U) 
                                             - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U)) 
                                            >> 5U))] 
                                     >> (0x1fU & ((IData)(0x80U) 
                                                  - 
                                                  VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U))))))
                    : 0U);
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB 
                = ((0x8fU >= (0xffU & ((IData)(0x80U) 
                                       - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U))))
                    ? (0xffffU & (((0U == (0x1fU & 
                                           ((IData)(0x80U) 
                                            - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U))))
                                    ? 0U : (vlSelf->convLayerSingleTB__DOT__fit[
                                            (((IData)(0xfU) 
                                              + (0xffU 
                                                 & ((IData)(0x80U) 
                                                    - 
                                                    VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x80U) 
                                                      - 
                                                      VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U)))))) 
                                  | (vlSelf->convLayerSingleTB__DOT__fit[
                                     (7U & (((IData)(0x80U) 
                                             - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U)) 
                                            >> 5U))] 
                                     >> (0x1fU & ((IData)(0x80U) 
                                                  - 
                                                  VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i, 4U))))))
                    : 0U);
            vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i 
                = ((IData)(1U) + vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i);
        }
    }
    convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes;
    if ((0x8fU >= (0xffU & ((IData)(0x80U) - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt, 4U))))) {
        VL_ASSIGNSEL_WI(144,16,(0xffU & ((IData)(0x80U) 
                                         - VL_SHIFTL_III(8,32,32, vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt, 4U))), vlSelf->convLayerSingleTB__DOT__res, convLayerSingleTB__DOT__UUT__DOT____Vlvbound_h496fc0b8__0);
    }
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed 
        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed), (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed)));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes;
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed 
        = (0xffffU & ((IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed) 
                      + (IData)(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed)));
    vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC 
        = vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed;
}

void VconvLayerSingleTB___024root___timing_resume(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VconvLayerSingleTB___024root___eval_triggers__act(VconvLayerSingleTB___024root* vlSelf);

bool VconvLayerSingleTB___024root___eval_phase__act(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VconvLayerSingleTB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VconvLayerSingleTB___024root___timing_resume(vlSelf);
        VconvLayerSingleTB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VconvLayerSingleTB___024root___eval_phase__nba(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VconvLayerSingleTB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__nba(VconvLayerSingleTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VconvLayerSingleTB___024root___dump_triggers__act(VconvLayerSingleTB___024root* vlSelf);
#endif  // VL_DEBUG

void VconvLayerSingleTB___024root___eval(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VconvLayerSingleTB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/conv/convLayerSingleTB.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VconvLayerSingleTB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/conv/convLayerSingleTB.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VconvLayerSingleTB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VconvLayerSingleTB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VconvLayerSingleTB___024root___eval_debug_assertions(VconvLayerSingleTB___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
