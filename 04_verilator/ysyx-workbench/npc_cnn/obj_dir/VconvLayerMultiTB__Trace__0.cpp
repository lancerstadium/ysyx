// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VconvLayerMultiTB__Syms.h"


void VconvLayerMultiTB___024root__trace_chg_0_sub_0(VconvLayerMultiTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VconvLayerMultiTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root__trace_chg_0\n"); );
    // Init
    VconvLayerMultiTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerMultiTB___024root*>(voidSelf);
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VconvLayerMultiTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<13>/*415:0*/ VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0;

void VconvLayerMultiTB___024root__trace_chg_0_sub_0(VconvLayerMultiTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<784>/*25087:0*/ __Vtemp_1;
    VlWide<13>/*415:0*/ __Vtemp_3;
    VlWide<13>/*415:0*/ __Vtemp_5;
    VlWide<13>/*415:0*/ __Vtemp_7;
    VlWide<13>/*415:0*/ __Vtemp_9;
    VlWide<13>/*415:0*/ __Vtemp_11;
    VlWide<13>/*415:0*/ __Vtemp_13;
    VlWide<13>/*415:0*/ __Vtemp_15;
    VlWide<13>/*415:0*/ __Vtemp_17;
    VlWide<13>/*415:0*/ __Vtemp_19;
    VlWide<13>/*415:0*/ __Vtemp_21;
    VlWide<13>/*415:0*/ __Vtemp_23;
    VlWide<13>/*415:0*/ __Vtemp_25;
    VlWide<13>/*415:0*/ __Vtemp_27;
    VlWide<13>/*415:0*/ __Vtemp_29;
    VlWide<13>/*415:0*/ __Vtemp_31;
    VlWide<13>/*415:0*/ __Vtemp_33;
    VlWide<13>/*415:0*/ __Vtemp_35;
    VlWide<13>/*415:0*/ __Vtemp_37;
    VlWide<13>/*415:0*/ __Vtemp_39;
    VlWide<13>/*415:0*/ __Vtemp_41;
    VlWide<13>/*415:0*/ __Vtemp_43;
    VlWide<13>/*415:0*/ __Vtemp_45;
    VlWide<13>/*415:0*/ __Vtemp_47;
    VlWide<13>/*415:0*/ __Vtemp_49;
    VlWide<13>/*415:0*/ __Vtemp_51;
    VlWide<13>/*415:0*/ __Vtemp_53;
    VlWide<13>/*415:0*/ __Vtemp_55;
    VlWide<13>/*415:0*/ __Vtemp_57;
    VlWide<13>/*415:0*/ __Vtemp_59;
    VlWide<13>/*415:0*/ __Vtemp_61;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__k),32);
        bufp->chgIData(oldp+1,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__k),32);
        bufp->chgIData(oldp+3,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+4,(vlSelf->convLayerMultiTB__DOT__rst));
        bufp->chgWData(oldp+5,(vlSelf->convLayerMultiTB__DOT__img),16384);
        bufp->chgWData(oldp+517,(vlSelf->convLayerMultiTB__DOT__fits),2400);
        bufp->chgIData(oldp+592,(vlSelf->convLayerMultiTB__DOT__i),32);
        bufp->chgIData(oldp+593,(vlSelf->convLayerMultiTB__DOT__rCnt),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+594,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__gRst));
        bufp->chgIData(oldp+595,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__fitIdx),32);
        bufp->chgIData(oldp+596,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__clkCnt),32);
        bufp->chgIData(oldp+597,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__outputCounter),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+598,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__gRst));
        bufp->chgCData(oldp+599,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__rowNum),6);
        bufp->chgCData(oldp+600,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__colSel),6);
        bufp->chgIData(oldp+601,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__clkCnt),32);
        bufp->chgIData(oldp+602,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuCnt),32);
        bufp->chgIData(oldp+603,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__c),32);
        bufp->chgBit(oldp+604,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__gRst));
        bufp->chgCData(oldp+605,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__rowNum),6);
        bufp->chgCData(oldp+606,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__colSel),6);
        bufp->chgIData(oldp+607,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__clkCnt),32);
        bufp->chgIData(oldp+608,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuCnt),32);
        bufp->chgIData(oldp+609,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__c),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgWData(oldp+610,(vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__0__KET____DOT__UUT__res),12544);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[8U]) 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        VL_CONCAT_WWW(25088,12544,12544, __Vtemp_1, vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__0__KET____DOT__UUT__res, vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__1__KET____DOT__UUT__res);
        bufp->chgWData(oldp+1002,(__Vtemp_1),25088);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgWData(oldp+1786,(vlSelf->convLayerMultiTB__DOT__UUT__DOT____Vcellout__genblk1__BRA__1__KET____DOT__UUT__res),12544);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgWData(oldp+2178,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits),800);
        __Vtemp_3[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xdU] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xcU] 
                                          >> 0x10U)));
        __Vtemp_3[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xeU] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xdU] 
                                          >> 0x10U)));
        __Vtemp_3[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xfU] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xeU] 
                                          >> 0x10U)));
        __Vtemp_3[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x10U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xfU] 
                                          >> 0x10U)));
        __Vtemp_3[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x11U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x10U] 
                                          >> 0x10U)));
        __Vtemp_3[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x12U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x11U] 
                                          >> 0x10U)));
        __Vtemp_3[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x13U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x12U] 
                                          >> 0x10U)));
        __Vtemp_3[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x14U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x13U] 
                                          >> 0x10U)));
        __Vtemp_3[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x15U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x14U] 
                                          >> 0x10U)));
        __Vtemp_3[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x16U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x15U] 
                                          >> 0x10U)));
        __Vtemp_3[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x17U] 
                               << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x16U] 
                                            >> 0x10U)));
        __Vtemp_3[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x18U] 
                               << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x17U] 
                                            >> 0x10U)));
        __Vtemp_3[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & (vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0x18U] 
                              >> 0x10U));
        bufp->chgWData(oldp+2203,(__Vtemp_3),400);
        __Vtemp_5[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0U]);
        __Vtemp_5[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[1U]);
        __Vtemp_5[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[2U]);
        __Vtemp_5[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[3U]);
        __Vtemp_5[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[4U]);
        __Vtemp_5[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[5U]);
        __Vtemp_5[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[6U]);
        __Vtemp_5[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[7U]);
        __Vtemp_5[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[8U]);
        __Vtemp_5[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[9U]);
        __Vtemp_5[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xaU]);
        __Vtemp_5[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xbU]);
        __Vtemp_5[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & vlSelf->convLayerMultiTB__DOT__UUT__DOT__inFits[0xcU]);
        bufp->chgWData(oldp+2216,(__Vtemp_5),400);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgWData(oldp+2229,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart),5600);
        bufp->chgIData(oldp+2404,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__RF__DOT__address),32);
        bufp->chgWData(oldp+2405,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart),5600);
        bufp->chgIData(oldp+2580,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__RF__DOT__address),32);
        __Vtemp_7[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa3U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa2U] 
                                          >> 0x10U)));
        __Vtemp_7[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa4U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa3U] 
                                          >> 0x10U)));
        __Vtemp_7[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa5U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa4U] 
                                          >> 0x10U)));
        __Vtemp_7[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa6U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa5U] 
                                          >> 0x10U)));
        __Vtemp_7[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa7U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa6U] 
                                          >> 0x10U)));
        __Vtemp_7[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa8U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa7U] 
                                          >> 0x10U)));
        __Vtemp_7[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa9U] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa8U] 
                                          >> 0x10U)));
        __Vtemp_7[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xaaU] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa9U] 
                                          >> 0x10U)));
        __Vtemp_7[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xabU] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xaaU] 
                                          >> 0x10U)));
        __Vtemp_7[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xacU] 
                             << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xabU] 
                                          >> 0x10U)));
        __Vtemp_7[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xadU] 
                               << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xacU] 
                                            >> 0x10U)));
        __Vtemp_7[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xaeU] 
                               << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xadU] 
                                            >> 0x10U)));
        __Vtemp_7[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xaeU] 
                              >> 0x10U));
        bufp->chgWData(oldp+2581,(__Vtemp_7),400);
        __Vtemp_9[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x96U]);
        __Vtemp_9[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x97U]);
        __Vtemp_9[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x98U]);
        __Vtemp_9[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x99U]);
        __Vtemp_9[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x9aU]);
        __Vtemp_9[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x9bU]);
        __Vtemp_9[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x9cU]);
        __Vtemp_9[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x9dU]);
        __Vtemp_9[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x9eU]);
        __Vtemp_9[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x9fU]);
        __Vtemp_9[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa0U]);
        __Vtemp_9[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa1U]);
        __Vtemp_9[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xa2U]);
        bufp->chgWData(oldp+2594,(__Vtemp_9),400);
        __Vtemp_11[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x89U] 
                                           >> 0x10U)));
        __Vtemp_11[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8bU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8aU] 
                                           >> 0x10U)));
        __Vtemp_11[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8cU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8bU] 
                                           >> 0x10U)));
        __Vtemp_11[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8dU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8cU] 
                                           >> 0x10U)));
        __Vtemp_11[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8eU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8dU] 
                                           >> 0x10U)));
        __Vtemp_11[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8eU] 
                                           >> 0x10U)));
        __Vtemp_11[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x90U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x8fU] 
                                           >> 0x10U)));
        __Vtemp_11[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x91U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x90U] 
                                           >> 0x10U)));
        __Vtemp_11[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x92U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x91U] 
                                           >> 0x10U)));
        __Vtemp_11[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x93U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x92U] 
                                           >> 0x10U)));
        __Vtemp_11[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x94U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x93U] 
                                             >> 0x10U)));
        __Vtemp_11[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x95U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x94U] 
                                             >> 0x10U)));
        __Vtemp_11[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x96U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x95U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2607,(__Vtemp_11),400);
        __Vtemp_13[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7dU]);
        __Vtemp_13[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7eU]);
        __Vtemp_13[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7fU]);
        __Vtemp_13[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x80U]);
        __Vtemp_13[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x81U]);
        __Vtemp_13[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x82U]);
        __Vtemp_13[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x83U]);
        __Vtemp_13[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x84U]);
        __Vtemp_13[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x85U]);
        __Vtemp_13[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x86U]);
        __Vtemp_13[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x87U]);
        __Vtemp_13[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x88U]);
        __Vtemp_13[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x89U]);
        bufp->chgWData(oldp+2620,(__Vtemp_13),400);
        __Vtemp_15[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x71U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x70U] 
                                           >> 0x10U)));
        __Vtemp_15[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x72U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x71U] 
                                           >> 0x10U)));
        __Vtemp_15[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x73U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x72U] 
                                           >> 0x10U)));
        __Vtemp_15[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x74U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x73U] 
                                           >> 0x10U)));
        __Vtemp_15[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x75U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x74U] 
                                           >> 0x10U)));
        __Vtemp_15[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x76U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x75U] 
                                           >> 0x10U)));
        __Vtemp_15[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x77U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x76U] 
                                           >> 0x10U)));
        __Vtemp_15[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x78U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x77U] 
                                           >> 0x10U)));
        __Vtemp_15[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x79U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x78U] 
                                           >> 0x10U)));
        __Vtemp_15[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x79U] 
                                           >> 0x10U)));
        __Vtemp_15[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7bU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7aU] 
                                             >> 0x10U)));
        __Vtemp_15[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7cU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7bU] 
                                             >> 0x10U)));
        __Vtemp_15[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7dU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x7cU] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2633,(__Vtemp_15),400);
        __Vtemp_17[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x64U]);
        __Vtemp_17[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x65U]);
        __Vtemp_17[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x66U]);
        __Vtemp_17[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x67U]);
        __Vtemp_17[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x68U]);
        __Vtemp_17[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x69U]);
        __Vtemp_17[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x6aU]);
        __Vtemp_17[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x6bU]);
        __Vtemp_17[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x6cU]);
        __Vtemp_17[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x6dU]);
        __Vtemp_17[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x6eU]);
        __Vtemp_17[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x6fU]);
        __Vtemp_17[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x70U]);
        bufp->chgWData(oldp+2646,(__Vtemp_17),400);
        __Vtemp_19[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x58U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x57U] 
                                           >> 0x10U)));
        __Vtemp_19[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x59U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x58U] 
                                           >> 0x10U)));
        __Vtemp_19[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x59U] 
                                           >> 0x10U)));
        __Vtemp_19[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5bU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5aU] 
                                           >> 0x10U)));
        __Vtemp_19[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5cU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5bU] 
                                           >> 0x10U)));
        __Vtemp_19[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5dU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5cU] 
                                           >> 0x10U)));
        __Vtemp_19[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5eU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5dU] 
                                           >> 0x10U)));
        __Vtemp_19[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5eU] 
                                           >> 0x10U)));
        __Vtemp_19[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x60U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x5fU] 
                                           >> 0x10U)));
        __Vtemp_19[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x61U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x60U] 
                                           >> 0x10U)));
        __Vtemp_19[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x62U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x61U] 
                                             >> 0x10U)));
        __Vtemp_19[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x63U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x62U] 
                                             >> 0x10U)));
        __Vtemp_19[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x64U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x63U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2659,(__Vtemp_19),400);
        __Vtemp_21[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4bU]);
        __Vtemp_21[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4cU]);
        __Vtemp_21[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4dU]);
        __Vtemp_21[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4eU]);
        __Vtemp_21[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4fU]);
        __Vtemp_21[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x50U]);
        __Vtemp_21[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x51U]);
        __Vtemp_21[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x52U]);
        __Vtemp_21[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x53U]);
        __Vtemp_21[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x54U]);
        __Vtemp_21[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x55U]);
        __Vtemp_21[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x56U]);
        __Vtemp_21[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x57U]);
        bufp->chgWData(oldp+2672,(__Vtemp_21),400);
        __Vtemp_23[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3eU] 
                                           >> 0x10U)));
        __Vtemp_23[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x40U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3fU] 
                                           >> 0x10U)));
        __Vtemp_23[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x41U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x40U] 
                                           >> 0x10U)));
        __Vtemp_23[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x42U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x41U] 
                                           >> 0x10U)));
        __Vtemp_23[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x43U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x42U] 
                                           >> 0x10U)));
        __Vtemp_23[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x44U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x43U] 
                                           >> 0x10U)));
        __Vtemp_23[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x45U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x44U] 
                                           >> 0x10U)));
        __Vtemp_23[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x46U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x45U] 
                                           >> 0x10U)));
        __Vtemp_23[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x47U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x46U] 
                                           >> 0x10U)));
        __Vtemp_23[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x48U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x47U] 
                                           >> 0x10U)));
        __Vtemp_23[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x49U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x48U] 
                                             >> 0x10U)));
        __Vtemp_23[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4aU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x49U] 
                                             >> 0x10U)));
        __Vtemp_23[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4bU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x4aU] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2685,(__Vtemp_23),400);
        __Vtemp_25[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x32U]);
        __Vtemp_25[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x33U]);
        __Vtemp_25[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x34U]);
        __Vtemp_25[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x35U]);
        __Vtemp_25[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x36U]);
        __Vtemp_25[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x37U]);
        __Vtemp_25[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x38U]);
        __Vtemp_25[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x39U]);
        __Vtemp_25[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3aU]);
        __Vtemp_25[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3bU]);
        __Vtemp_25[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3cU]);
        __Vtemp_25[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3dU]);
        __Vtemp_25[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x3eU]);
        bufp->chgWData(oldp+2698,(__Vtemp_25),400);
        __Vtemp_27[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x26U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x25U] 
                                           >> 0x10U)));
        __Vtemp_27[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x27U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x26U] 
                                           >> 0x10U)));
        __Vtemp_27[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x28U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x27U] 
                                           >> 0x10U)));
        __Vtemp_27[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x29U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x28U] 
                                           >> 0x10U)));
        __Vtemp_27[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x29U] 
                                           >> 0x10U)));
        __Vtemp_27[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2bU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2aU] 
                                           >> 0x10U)));
        __Vtemp_27[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2cU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2bU] 
                                           >> 0x10U)));
        __Vtemp_27[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2dU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2cU] 
                                           >> 0x10U)));
        __Vtemp_27[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2eU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2dU] 
                                           >> 0x10U)));
        __Vtemp_27[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2eU] 
                                           >> 0x10U)));
        __Vtemp_27[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x30U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x2fU] 
                                             >> 0x10U)));
        __Vtemp_27[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x31U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x30U] 
                                             >> 0x10U)));
        __Vtemp_27[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x32U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x31U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2711,(__Vtemp_27),400);
        __Vtemp_29[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x19U]);
        __Vtemp_29[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x1aU]);
        __Vtemp_29[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x1bU]);
        __Vtemp_29[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x1cU]);
        __Vtemp_29[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x1dU]);
        __Vtemp_29[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x1eU]);
        __Vtemp_29[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x1fU]);
        __Vtemp_29[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x20U]);
        __Vtemp_29[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x21U]);
        __Vtemp_29[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x22U]);
        __Vtemp_29[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x23U]);
        __Vtemp_29[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x24U]);
        __Vtemp_29[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x25U]);
        bufp->chgWData(oldp+2724,(__Vtemp_29),400);
        __Vtemp_31[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xdU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xcU] 
                                           >> 0x10U)));
        __Vtemp_31[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xeU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xdU] 
                                           >> 0x10U)));
        __Vtemp_31[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xfU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xeU] 
                                           >> 0x10U)));
        __Vtemp_31[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x10U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xfU] 
                                           >> 0x10U)));
        __Vtemp_31[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x11U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x10U] 
                                           >> 0x10U)));
        __Vtemp_31[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x12U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x11U] 
                                           >> 0x10U)));
        __Vtemp_31[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x13U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x12U] 
                                           >> 0x10U)));
        __Vtemp_31[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x14U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x13U] 
                                           >> 0x10U)));
        __Vtemp_31[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x15U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x14U] 
                                           >> 0x10U)));
        __Vtemp_31[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x16U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x15U] 
                                           >> 0x10U)));
        __Vtemp_31[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x17U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x16U] 
                                             >> 0x10U)));
        __Vtemp_31[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x18U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x17U] 
                                             >> 0x10U)));
        __Vtemp_31[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x19U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0x18U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2737,(__Vtemp_31),400);
        __Vtemp_33[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0U]);
        __Vtemp_33[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[1U]);
        __Vtemp_33[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[2U]);
        __Vtemp_33[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[3U]);
        __Vtemp_33[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[4U]);
        __Vtemp_33[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[5U]);
        __Vtemp_33[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[6U]);
        __Vtemp_33[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[7U]);
        __Vtemp_33[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[8U]);
        __Vtemp_33[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[9U]);
        __Vtemp_33[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xaU]);
        __Vtemp_33[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xbU]);
        __Vtemp_33[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__imgPart[0xcU]);
        bufp->chgWData(oldp+2750,(__Vtemp_33),400);
        __Vtemp_35[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa3U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa2U] 
                                           >> 0x10U)));
        __Vtemp_35[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa4U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa3U] 
                                           >> 0x10U)));
        __Vtemp_35[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa5U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa4U] 
                                           >> 0x10U)));
        __Vtemp_35[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa6U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa5U] 
                                           >> 0x10U)));
        __Vtemp_35[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa7U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa6U] 
                                           >> 0x10U)));
        __Vtemp_35[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa8U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa7U] 
                                           >> 0x10U)));
        __Vtemp_35[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa9U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa8U] 
                                           >> 0x10U)));
        __Vtemp_35[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xaaU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa9U] 
                                           >> 0x10U)));
        __Vtemp_35[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xabU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xaaU] 
                                           >> 0x10U)));
        __Vtemp_35[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xacU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xabU] 
                                           >> 0x10U)));
        __Vtemp_35[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xadU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xacU] 
                                             >> 0x10U)));
        __Vtemp_35[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xaeU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xadU] 
                                             >> 0x10U)));
        __Vtemp_35[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xaeU] 
                               >> 0x10U));
        bufp->chgWData(oldp+2763,(__Vtemp_35),400);
        __Vtemp_37[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x96U]);
        __Vtemp_37[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x97U]);
        __Vtemp_37[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x98U]);
        __Vtemp_37[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x99U]);
        __Vtemp_37[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x9aU]);
        __Vtemp_37[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x9bU]);
        __Vtemp_37[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x9cU]);
        __Vtemp_37[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x9dU]);
        __Vtemp_37[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x9eU]);
        __Vtemp_37[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x9fU]);
        __Vtemp_37[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa0U]);
        __Vtemp_37[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa1U]);
        __Vtemp_37[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xa2U]);
        bufp->chgWData(oldp+2776,(__Vtemp_37),400);
        __Vtemp_39[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x89U] 
                                           >> 0x10U)));
        __Vtemp_39[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8bU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8aU] 
                                           >> 0x10U)));
        __Vtemp_39[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8cU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8bU] 
                                           >> 0x10U)));
        __Vtemp_39[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8dU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8cU] 
                                           >> 0x10U)));
        __Vtemp_39[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8eU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8dU] 
                                           >> 0x10U)));
        __Vtemp_39[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8eU] 
                                           >> 0x10U)));
        __Vtemp_39[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x90U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x8fU] 
                                           >> 0x10U)));
        __Vtemp_39[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x91U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x90U] 
                                           >> 0x10U)));
        __Vtemp_39[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x92U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x91U] 
                                           >> 0x10U)));
        __Vtemp_39[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x93U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x92U] 
                                           >> 0x10U)));
        __Vtemp_39[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x94U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x93U] 
                                             >> 0x10U)));
        __Vtemp_39[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x95U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x94U] 
                                             >> 0x10U)));
        __Vtemp_39[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x96U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x95U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2789,(__Vtemp_39),400);
        __Vtemp_41[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7dU]);
        __Vtemp_41[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7eU]);
        __Vtemp_41[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7fU]);
        __Vtemp_41[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x80U]);
        __Vtemp_41[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x81U]);
        __Vtemp_41[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x82U]);
        __Vtemp_41[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x83U]);
        __Vtemp_41[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x84U]);
        __Vtemp_41[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x85U]);
        __Vtemp_41[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x86U]);
        __Vtemp_41[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x87U]);
        __Vtemp_41[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x88U]);
        __Vtemp_41[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x89U]);
        bufp->chgWData(oldp+2802,(__Vtemp_41),400);
        __Vtemp_43[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x71U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x70U] 
                                           >> 0x10U)));
        __Vtemp_43[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x72U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x71U] 
                                           >> 0x10U)));
        __Vtemp_43[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x73U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x72U] 
                                           >> 0x10U)));
        __Vtemp_43[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x74U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x73U] 
                                           >> 0x10U)));
        __Vtemp_43[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x75U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x74U] 
                                           >> 0x10U)));
        __Vtemp_43[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x76U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x75U] 
                                           >> 0x10U)));
        __Vtemp_43[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x77U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x76U] 
                                           >> 0x10U)));
        __Vtemp_43[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x78U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x77U] 
                                           >> 0x10U)));
        __Vtemp_43[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x79U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x78U] 
                                           >> 0x10U)));
        __Vtemp_43[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x79U] 
                                           >> 0x10U)));
        __Vtemp_43[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7bU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7aU] 
                                             >> 0x10U)));
        __Vtemp_43[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7cU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7bU] 
                                             >> 0x10U)));
        __Vtemp_43[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7dU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x7cU] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2815,(__Vtemp_43),400);
        __Vtemp_45[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x64U]);
        __Vtemp_45[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x65U]);
        __Vtemp_45[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x66U]);
        __Vtemp_45[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x67U]);
        __Vtemp_45[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x68U]);
        __Vtemp_45[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x69U]);
        __Vtemp_45[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x6aU]);
        __Vtemp_45[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x6bU]);
        __Vtemp_45[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x6cU]);
        __Vtemp_45[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x6dU]);
        __Vtemp_45[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x6eU]);
        __Vtemp_45[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x6fU]);
        __Vtemp_45[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x70U]);
        bufp->chgWData(oldp+2828,(__Vtemp_45),400);
        __Vtemp_47[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x58U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x57U] 
                                           >> 0x10U)));
        __Vtemp_47[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x59U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x58U] 
                                           >> 0x10U)));
        __Vtemp_47[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x59U] 
                                           >> 0x10U)));
        __Vtemp_47[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5bU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5aU] 
                                           >> 0x10U)));
        __Vtemp_47[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5cU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5bU] 
                                           >> 0x10U)));
        __Vtemp_47[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5dU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5cU] 
                                           >> 0x10U)));
        __Vtemp_47[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5eU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5dU] 
                                           >> 0x10U)));
        __Vtemp_47[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5eU] 
                                           >> 0x10U)));
        __Vtemp_47[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x60U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x5fU] 
                                           >> 0x10U)));
        __Vtemp_47[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x61U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x60U] 
                                           >> 0x10U)));
        __Vtemp_47[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x62U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x61U] 
                                             >> 0x10U)));
        __Vtemp_47[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x63U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x62U] 
                                             >> 0x10U)));
        __Vtemp_47[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x64U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x63U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2841,(__Vtemp_47),400);
        __Vtemp_49[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4bU]);
        __Vtemp_49[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4cU]);
        __Vtemp_49[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4dU]);
        __Vtemp_49[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4eU]);
        __Vtemp_49[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4fU]);
        __Vtemp_49[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x50U]);
        __Vtemp_49[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x51U]);
        __Vtemp_49[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x52U]);
        __Vtemp_49[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x53U]);
        __Vtemp_49[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x54U]);
        __Vtemp_49[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x55U]);
        __Vtemp_49[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x56U]);
        __Vtemp_49[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x57U]);
        bufp->chgWData(oldp+2854,(__Vtemp_49),400);
        __Vtemp_51[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3eU] 
                                           >> 0x10U)));
        __Vtemp_51[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x40U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3fU] 
                                           >> 0x10U)));
        __Vtemp_51[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x41U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x40U] 
                                           >> 0x10U)));
        __Vtemp_51[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x42U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x41U] 
                                           >> 0x10U)));
        __Vtemp_51[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x43U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x42U] 
                                           >> 0x10U)));
        __Vtemp_51[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x44U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x43U] 
                                           >> 0x10U)));
        __Vtemp_51[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x45U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x44U] 
                                           >> 0x10U)));
        __Vtemp_51[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x46U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x45U] 
                                           >> 0x10U)));
        __Vtemp_51[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x47U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x46U] 
                                           >> 0x10U)));
        __Vtemp_51[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x48U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x47U] 
                                           >> 0x10U)));
        __Vtemp_51[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x49U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x48U] 
                                             >> 0x10U)));
        __Vtemp_51[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4aU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x49U] 
                                             >> 0x10U)));
        __Vtemp_51[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4bU] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x4aU] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2867,(__Vtemp_51),400);
        __Vtemp_53[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x32U]);
        __Vtemp_53[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x33U]);
        __Vtemp_53[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x34U]);
        __Vtemp_53[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x35U]);
        __Vtemp_53[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x36U]);
        __Vtemp_53[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x37U]);
        __Vtemp_53[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x38U]);
        __Vtemp_53[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x39U]);
        __Vtemp_53[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3aU]);
        __Vtemp_53[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3bU]);
        __Vtemp_53[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3cU]);
        __Vtemp_53[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3dU]);
        __Vtemp_53[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x3eU]);
        bufp->chgWData(oldp+2880,(__Vtemp_53),400);
        __Vtemp_55[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x26U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x25U] 
                                           >> 0x10U)));
        __Vtemp_55[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x27U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x26U] 
                                           >> 0x10U)));
        __Vtemp_55[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x28U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x27U] 
                                           >> 0x10U)));
        __Vtemp_55[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x29U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x28U] 
                                           >> 0x10U)));
        __Vtemp_55[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2aU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x29U] 
                                           >> 0x10U)));
        __Vtemp_55[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2bU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2aU] 
                                           >> 0x10U)));
        __Vtemp_55[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2cU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2bU] 
                                           >> 0x10U)));
        __Vtemp_55[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2dU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2cU] 
                                           >> 0x10U)));
        __Vtemp_55[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2eU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2dU] 
                                           >> 0x10U)));
        __Vtemp_55[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2fU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2eU] 
                                           >> 0x10U)));
        __Vtemp_55[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x30U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x2fU] 
                                             >> 0x10U)));
        __Vtemp_55[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x31U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x30U] 
                                             >> 0x10U)));
        __Vtemp_55[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x32U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x31U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2893,(__Vtemp_55),400);
        __Vtemp_57[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x19U]);
        __Vtemp_57[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x1aU]);
        __Vtemp_57[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x1bU]);
        __Vtemp_57[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x1cU]);
        __Vtemp_57[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x1dU]);
        __Vtemp_57[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x1eU]);
        __Vtemp_57[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x1fU]);
        __Vtemp_57[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x20U]);
        __Vtemp_57[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x21U]);
        __Vtemp_57[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x22U]);
        __Vtemp_57[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x23U]);
        __Vtemp_57[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x24U]);
        __Vtemp_57[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x25U]);
        bufp->chgWData(oldp+2906,(__Vtemp_57),400);
        __Vtemp_59[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xdU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xcU] 
                                           >> 0x10U)));
        __Vtemp_59[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xeU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xdU] 
                                           >> 0x10U)));
        __Vtemp_59[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xfU] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xeU] 
                                           >> 0x10U)));
        __Vtemp_59[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x10U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xfU] 
                                           >> 0x10U)));
        __Vtemp_59[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x11U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x10U] 
                                           >> 0x10U)));
        __Vtemp_59[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x12U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x11U] 
                                           >> 0x10U)));
        __Vtemp_59[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x13U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x12U] 
                                           >> 0x10U)));
        __Vtemp_59[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x14U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x13U] 
                                           >> 0x10U)));
        __Vtemp_59[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x15U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x14U] 
                                           >> 0x10U)));
        __Vtemp_59[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x16U] 
                              << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x15U] 
                                           >> 0x10U)));
        __Vtemp_59[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x17U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x16U] 
                                             >> 0x10U)));
        __Vtemp_59[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x18U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x17U] 
                                             >> 0x10U)));
        __Vtemp_59[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x19U] 
                                << 0x10U) | (vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0x18U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+2919,(__Vtemp_59),400);
        __Vtemp_61[0U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0U]);
        __Vtemp_61[1U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[1U]);
        __Vtemp_61[2U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[2U]);
        __Vtemp_61[3U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[3U]);
        __Vtemp_61[4U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[4U]);
        __Vtemp_61[5U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[5U]);
        __Vtemp_61[6U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[6U]);
        __Vtemp_61[7U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[7U]);
        __Vtemp_61[8U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[8U]);
        __Vtemp_61[9U] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[9U]);
        __Vtemp_61[0xaU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xaU]);
        __Vtemp_61[0xbU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xbU]);
        __Vtemp_61[0xcU] = (VconvLayerMultiTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__imgPart[0xcU]);
        bufp->chgWData(oldp+2932,(__Vtemp_61),400);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgWData(oldp+2945,(vlSelf->convLayerMultiTB__DOT__res),75264);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgWData(oldp+5297,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__cuRes),224);
        bufp->chgSData(oldp+5304,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5305,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5306,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5307,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5308,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5309,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5310,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5311,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5312,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5313,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5314,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5315,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5316,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5317,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5318,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5319,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5320,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5321,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5322,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5323,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5324,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5325,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5326,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5327,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5328,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5329,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5330,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5331,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5332,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5333,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5334,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5335,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5336,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5337,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5338,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5339,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5340,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5341,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5342,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5343,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5344,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5345,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5346,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5347,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5348,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5349,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5350,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5351,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5352,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5353,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5354,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5355,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5356,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5357,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5358,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5359,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5360,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5361,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5362,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5363,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5364,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5365,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5366,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5367,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5368,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5369,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5370,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5371,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5372,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5373,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5374,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5375,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5376,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5377,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5378,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5379,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5380,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5381,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5382,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5383,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5384,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5385,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5386,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5387,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5388,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5389,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5390,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5391,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5392,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5393,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5394,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5395,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5396,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5397,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5398,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5399,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5400,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5401,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5402,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5403,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5404,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5405,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5406,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5407,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5408,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5409,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5410,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5411,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5412,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5413,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5414,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5415,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5416,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5417,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5418,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5419,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5420,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5421,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5422,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5423,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5424,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5425,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5426,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5427,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5428,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5429,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5430,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5431,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5432,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5433,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5434,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5435,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5436,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5437,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5438,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5439,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5440,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5441,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5442,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5443,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5444,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5445,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5446,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5447,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5448,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5449,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5450,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5451,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5452,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5453,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5454,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5455,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5456,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5457,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5458,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5459,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5460,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5461,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5462,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5463,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5464,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5465,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5466,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5467,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5468,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5469,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5470,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5471,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5472,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5473,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5474,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5475,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5476,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5477,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5478,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5479,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5480,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5481,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5482,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5483,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5484,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5485,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5486,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5487,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5488,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5489,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5490,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5491,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5492,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5493,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5494,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5495,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5496,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5497,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5498,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5499,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5500,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5501,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5502,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5503,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5504,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5505,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5506,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5507,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5508,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5509,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5510,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5511,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5512,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5513,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5514,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5515,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5516,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5517,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5518,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5519,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5520,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5521,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5522,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5523,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5524,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5525,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5526,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5527,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5528,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5529,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5530,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5531,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5532,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5533,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5534,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5535,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5536,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5537,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5538,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5539,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5540,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5541,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5542,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5543,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5544,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5545,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5546,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5547,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5548,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5549,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5550,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5551,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5552,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5553,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5554,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5555,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5556,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5557,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5558,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5559,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5560,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5561,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5562,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5563,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5564,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5565,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5566,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5567,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5568,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5569,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5570,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5571,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5572,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5573,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5574,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5575,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5576,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5577,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5578,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5579,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5580,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5581,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5582,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5583,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5584,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5585,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5586,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5587,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5588,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5589,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5590,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5591,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5592,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5593,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5594,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5595,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5596,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5597,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5598,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5599,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5600,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5601,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5602,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5603,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5604,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5605,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5606,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5607,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5608,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5609,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5610,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5611,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5612,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5613,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5614,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5615,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5616,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5617,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5618,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5619,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5620,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5621,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5622,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5623,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5624,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5625,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5626,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5627,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5628,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5629,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5630,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5631,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5632,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5633,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5634,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5635,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5636,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5637,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5638,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5639,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5640,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5641,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5642,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5643,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5644,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5645,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5646,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5647,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5648,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5649,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5650,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5651,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5652,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5653,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5654,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5655,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5656,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5657,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5658,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5659,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5660,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5661,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5662,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5663,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5664,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5665,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5666,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5667,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgWData(oldp+5668,(vlSelf->convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__cuRes),224);
        bufp->chgSData(oldp+5675,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5676,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5677,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5678,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5679,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5680,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5681,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5682,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5683,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5684,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5685,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5686,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5687,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5688,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5689,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5690,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5691,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5692,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5693,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5694,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5695,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5696,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5697,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5698,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5699,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5700,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5701,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5702,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5703,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5704,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5705,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5706,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5707,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5708,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5709,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5710,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5711,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5712,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5713,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5714,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5715,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5716,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5717,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5718,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5719,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5720,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5721,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5722,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5723,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5724,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5725,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5726,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5727,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5728,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5729,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5730,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5731,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5732,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5733,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5734,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5735,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5736,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5737,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5738,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5739,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5740,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5741,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5742,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5743,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5744,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5745,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5746,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5747,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5748,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5749,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5750,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5751,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5752,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5753,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5754,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5755,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5756,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5757,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5758,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5759,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5760,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5761,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5762,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5763,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5764,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5765,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5766,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5767,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5768,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5769,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5770,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5771,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5772,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5773,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5774,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5775,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5776,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5777,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5778,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5779,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5780,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5781,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5782,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5783,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5784,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5785,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5786,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5787,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5788,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5789,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5790,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5791,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5792,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5793,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5794,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5795,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5796,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5797,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5798,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5799,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5800,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5801,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5802,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5803,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5804,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5805,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5806,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5807,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5808,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5809,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5810,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5811,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5812,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5813,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5814,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5815,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5816,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5817,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5818,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5819,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5820,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5821,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5822,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5823,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5824,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5825,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5826,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5827,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5828,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5829,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5830,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5831,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5832,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5833,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5834,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5835,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5836,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5837,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5838,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5839,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5840,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5841,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5842,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5843,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5844,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5845,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5846,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5847,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5848,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5849,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5850,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5851,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5852,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5853,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5854,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5855,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5856,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5857,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5858,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5859,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5860,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5861,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5862,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5863,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5864,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5865,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5866,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5867,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5868,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5869,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5870,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5871,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5872,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5873,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5874,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5875,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5876,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5877,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5878,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5879,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5880,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5881,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5882,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5883,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5884,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5885,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5886,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5887,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5888,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5889,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5890,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5891,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5892,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5893,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5894,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5895,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5896,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5897,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5898,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5899,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5900,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5901,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5902,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5903,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5904,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5905,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5906,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5907,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5908,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5909,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5910,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5911,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5912,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5913,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5914,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5915,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5916,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5917,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5918,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5919,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5920,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5921,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5922,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5923,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5924,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5925,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5926,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5927,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5928,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5929,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5930,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5931,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5932,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5933,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5934,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5935,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5936,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5937,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5938,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5939,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5940,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5941,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5942,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5943,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5944,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5945,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5946,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5947,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5948,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5949,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5950,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5951,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5952,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5953,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5954,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5955,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5956,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5957,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5958,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5959,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5960,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5961,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5962,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5963,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5964,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5965,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5966,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5967,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5968,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5969,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5970,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5971,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5972,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5973,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+5974,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+5975,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+5976,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+5977,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+5978,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+5979,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+5980,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+5981,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+5982,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+5983,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+5984,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+5985,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+5986,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+5987,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+5988,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+5989,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+5990,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+5991,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+5992,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+5993,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+5994,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+5995,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+5996,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+5997,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+5998,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+5999,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+6000,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+6001,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+6002,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+6003,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+6004,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+6005,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+6006,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+6007,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+6008,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+6009,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+6010,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+6011,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+6012,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+6013,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+6014,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+6015,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+6016,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+6017,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+6018,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+6019,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+6020,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+6021,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+6022,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+6023,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+6024,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+6025,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+6026,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+6027,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+6028,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+6029,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+6030,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+6031,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+6032,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+6033,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+6034,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+6035,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+6036,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+6037,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+6038,(vlSymsp->TOP__convLayerMultiTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+6039,(vlSelf->convLayerMultiTB__DOT__clk));
}

void VconvLayerMultiTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerMultiTB___024root__trace_cleanup\n"); );
    // Init
    VconvLayerMultiTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerMultiTB___024root*>(voidSelf);
    VconvLayerMultiTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
}
