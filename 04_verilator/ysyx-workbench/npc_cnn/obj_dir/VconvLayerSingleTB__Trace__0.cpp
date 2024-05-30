// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VconvLayerSingleTB__Syms.h"


void VconvLayerSingleTB___024root__trace_chg_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VconvLayerSingleTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_chg_0\n"); );
    // Init
    VconvLayerSingleTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerSingleTB___024root*>(voidSelf);
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VconvLayerSingleTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<13>/*415:0*/ VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0;

void VconvLayerSingleTB___024root__trace_chg_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<13>/*415:0*/ __Vtemp_2;
    VlWide<13>/*415:0*/ __Vtemp_4;
    VlWide<13>/*415:0*/ __Vtemp_6;
    VlWide<13>/*415:0*/ __Vtemp_8;
    VlWide<13>/*415:0*/ __Vtemp_10;
    VlWide<13>/*415:0*/ __Vtemp_12;
    VlWide<13>/*415:0*/ __Vtemp_14;
    VlWide<13>/*415:0*/ __Vtemp_16;
    VlWide<13>/*415:0*/ __Vtemp_18;
    VlWide<13>/*415:0*/ __Vtemp_20;
    VlWide<13>/*415:0*/ __Vtemp_22;
    VlWide<13>/*415:0*/ __Vtemp_24;
    VlWide<13>/*415:0*/ __Vtemp_26;
    VlWide<13>/*415:0*/ __Vtemp_28;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->convLayerSingleTB__DOT__rst));
        bufp->chgWData(oldp+1,(vlSelf->convLayerSingleTB__DOT__img),16384);
        bufp->chgWData(oldp+513,(vlSelf->convLayerSingleTB__DOT__fit),400);
        bufp->chgIData(oldp+526,(vlSelf->convLayerSingleTB__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+527,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst));
        bufp->chgCData(oldp+528,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum),6);
        bufp->chgCData(oldp+529,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel),6);
        bufp->chgIData(oldp+530,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt),32);
        bufp->chgIData(oldp+531,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt),32);
        bufp->chgIData(oldp+532,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+533,(vlSelf->convLayerSingleTB__DOT__res),12544);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgWData(oldp+925,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart),5600);
        bufp->chgIData(oldp+1100,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address),32);
        __Vtemp_2[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa3U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa2U] 
                                          >> 0x10U)));
        __Vtemp_2[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa4U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa3U] 
                                          >> 0x10U)));
        __Vtemp_2[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa5U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa4U] 
                                          >> 0x10U)));
        __Vtemp_2[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa6U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa5U] 
                                          >> 0x10U)));
        __Vtemp_2[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa7U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa6U] 
                                          >> 0x10U)));
        __Vtemp_2[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa8U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa7U] 
                                          >> 0x10U)));
        __Vtemp_2[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa9U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa8U] 
                                          >> 0x10U)));
        __Vtemp_2[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xaaU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa9U] 
                                          >> 0x10U)));
        __Vtemp_2[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xabU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xaaU] 
                                          >> 0x10U)));
        __Vtemp_2[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xacU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xabU] 
                                          >> 0x10U)));
        __Vtemp_2[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xadU] 
                               << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xacU] 
                                            >> 0x10U)));
        __Vtemp_2[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xaeU] 
                               << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xadU] 
                                            >> 0x10U)));
        __Vtemp_2[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xaeU] 
                              >> 0x10U));
        bufp->chgWData(oldp+1101,(__Vtemp_2),400);
        __Vtemp_4[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x96U]);
        __Vtemp_4[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x97U]);
        __Vtemp_4[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x98U]);
        __Vtemp_4[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x99U]);
        __Vtemp_4[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x9aU]);
        __Vtemp_4[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x9bU]);
        __Vtemp_4[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x9cU]);
        __Vtemp_4[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x9dU]);
        __Vtemp_4[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x9eU]);
        __Vtemp_4[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x9fU]);
        __Vtemp_4[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa0U]);
        __Vtemp_4[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa1U]);
        __Vtemp_4[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xa2U]);
        bufp->chgWData(oldp+1114,(__Vtemp_4),400);
        __Vtemp_6[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8aU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x89U] 
                                          >> 0x10U)));
        __Vtemp_6[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8bU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8aU] 
                                          >> 0x10U)));
        __Vtemp_6[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8cU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8bU] 
                                          >> 0x10U)));
        __Vtemp_6[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8dU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8cU] 
                                          >> 0x10U)));
        __Vtemp_6[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8eU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8dU] 
                                          >> 0x10U)));
        __Vtemp_6[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8fU] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8eU] 
                                          >> 0x10U)));
        __Vtemp_6[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x90U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x8fU] 
                                          >> 0x10U)));
        __Vtemp_6[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x91U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x90U] 
                                          >> 0x10U)));
        __Vtemp_6[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x92U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x91U] 
                                          >> 0x10U)));
        __Vtemp_6[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x93U] 
                             << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x92U] 
                                          >> 0x10U)));
        __Vtemp_6[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x94U] 
                               << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x93U] 
                                            >> 0x10U)));
        __Vtemp_6[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x95U] 
                               << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x94U] 
                                            >> 0x10U)));
        __Vtemp_6[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x96U] 
                               << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x95U] 
                                            >> 0x10U)));
        bufp->chgWData(oldp+1127,(__Vtemp_6),400);
        __Vtemp_8[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7dU]);
        __Vtemp_8[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7eU]);
        __Vtemp_8[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7fU]);
        __Vtemp_8[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x80U]);
        __Vtemp_8[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x81U]);
        __Vtemp_8[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x82U]);
        __Vtemp_8[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x83U]);
        __Vtemp_8[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x84U]);
        __Vtemp_8[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x85U]);
        __Vtemp_8[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                         & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x86U]);
        __Vtemp_8[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                           & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x87U]);
        __Vtemp_8[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                           & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x88U]);
        __Vtemp_8[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                           & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x89U]);
        bufp->chgWData(oldp+1140,(__Vtemp_8),400);
        __Vtemp_10[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x71U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x70U] 
                                           >> 0x10U)));
        __Vtemp_10[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x72U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x71U] 
                                           >> 0x10U)));
        __Vtemp_10[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x73U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x72U] 
                                           >> 0x10U)));
        __Vtemp_10[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x74U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x73U] 
                                           >> 0x10U)));
        __Vtemp_10[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x75U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x74U] 
                                           >> 0x10U)));
        __Vtemp_10[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x76U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x75U] 
                                           >> 0x10U)));
        __Vtemp_10[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x77U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x76U] 
                                           >> 0x10U)));
        __Vtemp_10[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x78U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x77U] 
                                           >> 0x10U)));
        __Vtemp_10[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x79U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x78U] 
                                           >> 0x10U)));
        __Vtemp_10[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7aU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x79U] 
                                           >> 0x10U)));
        __Vtemp_10[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7bU] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7aU] 
                                             >> 0x10U)));
        __Vtemp_10[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7cU] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7bU] 
                                             >> 0x10U)));
        __Vtemp_10[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7dU] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x7cU] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+1153,(__Vtemp_10),400);
        __Vtemp_12[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x64U]);
        __Vtemp_12[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x65U]);
        __Vtemp_12[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x66U]);
        __Vtemp_12[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x67U]);
        __Vtemp_12[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x68U]);
        __Vtemp_12[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x69U]);
        __Vtemp_12[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x6aU]);
        __Vtemp_12[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x6bU]);
        __Vtemp_12[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x6cU]);
        __Vtemp_12[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x6dU]);
        __Vtemp_12[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x6eU]);
        __Vtemp_12[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x6fU]);
        __Vtemp_12[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x70U]);
        bufp->chgWData(oldp+1166,(__Vtemp_12),400);
        __Vtemp_14[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x58U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x57U] 
                                           >> 0x10U)));
        __Vtemp_14[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x59U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x58U] 
                                           >> 0x10U)));
        __Vtemp_14[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5aU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x59U] 
                                           >> 0x10U)));
        __Vtemp_14[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5bU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5aU] 
                                           >> 0x10U)));
        __Vtemp_14[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5cU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5bU] 
                                           >> 0x10U)));
        __Vtemp_14[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5dU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5cU] 
                                           >> 0x10U)));
        __Vtemp_14[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5eU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5dU] 
                                           >> 0x10U)));
        __Vtemp_14[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5fU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5eU] 
                                           >> 0x10U)));
        __Vtemp_14[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x60U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x5fU] 
                                           >> 0x10U)));
        __Vtemp_14[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x61U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x60U] 
                                           >> 0x10U)));
        __Vtemp_14[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x62U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x61U] 
                                             >> 0x10U)));
        __Vtemp_14[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x63U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x62U] 
                                             >> 0x10U)));
        __Vtemp_14[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x64U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x63U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+1179,(__Vtemp_14),400);
        __Vtemp_16[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4bU]);
        __Vtemp_16[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4cU]);
        __Vtemp_16[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4dU]);
        __Vtemp_16[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4eU]);
        __Vtemp_16[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4fU]);
        __Vtemp_16[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x50U]);
        __Vtemp_16[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x51U]);
        __Vtemp_16[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x52U]);
        __Vtemp_16[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x53U]);
        __Vtemp_16[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x54U]);
        __Vtemp_16[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x55U]);
        __Vtemp_16[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x56U]);
        __Vtemp_16[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x57U]);
        bufp->chgWData(oldp+1192,(__Vtemp_16),400);
        __Vtemp_18[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3fU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3eU] 
                                           >> 0x10U)));
        __Vtemp_18[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x40U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3fU] 
                                           >> 0x10U)));
        __Vtemp_18[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x41U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x40U] 
                                           >> 0x10U)));
        __Vtemp_18[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x42U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x41U] 
                                           >> 0x10U)));
        __Vtemp_18[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x43U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x42U] 
                                           >> 0x10U)));
        __Vtemp_18[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x44U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x43U] 
                                           >> 0x10U)));
        __Vtemp_18[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x45U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x44U] 
                                           >> 0x10U)));
        __Vtemp_18[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x46U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x45U] 
                                           >> 0x10U)));
        __Vtemp_18[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x47U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x46U] 
                                           >> 0x10U)));
        __Vtemp_18[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x48U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x47U] 
                                           >> 0x10U)));
        __Vtemp_18[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x49U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x48U] 
                                             >> 0x10U)));
        __Vtemp_18[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4aU] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x49U] 
                                             >> 0x10U)));
        __Vtemp_18[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4bU] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x4aU] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+1205,(__Vtemp_18),400);
        __Vtemp_20[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x32U]);
        __Vtemp_20[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x33U]);
        __Vtemp_20[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x34U]);
        __Vtemp_20[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x35U]);
        __Vtemp_20[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x36U]);
        __Vtemp_20[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x37U]);
        __Vtemp_20[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x38U]);
        __Vtemp_20[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x39U]);
        __Vtemp_20[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3aU]);
        __Vtemp_20[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3bU]);
        __Vtemp_20[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3cU]);
        __Vtemp_20[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3dU]);
        __Vtemp_20[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x3eU]);
        bufp->chgWData(oldp+1218,(__Vtemp_20),400);
        __Vtemp_22[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x26U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x25U] 
                                           >> 0x10U)));
        __Vtemp_22[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x27U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x26U] 
                                           >> 0x10U)));
        __Vtemp_22[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x28U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x27U] 
                                           >> 0x10U)));
        __Vtemp_22[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x29U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x28U] 
                                           >> 0x10U)));
        __Vtemp_22[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2aU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x29U] 
                                           >> 0x10U)));
        __Vtemp_22[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2bU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2aU] 
                                           >> 0x10U)));
        __Vtemp_22[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2cU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2bU] 
                                           >> 0x10U)));
        __Vtemp_22[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2dU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2cU] 
                                           >> 0x10U)));
        __Vtemp_22[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2eU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2dU] 
                                           >> 0x10U)));
        __Vtemp_22[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2fU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2eU] 
                                           >> 0x10U)));
        __Vtemp_22[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x30U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x2fU] 
                                             >> 0x10U)));
        __Vtemp_22[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x31U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x30U] 
                                             >> 0x10U)));
        __Vtemp_22[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x32U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x31U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+1231,(__Vtemp_22),400);
        __Vtemp_24[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x19U]);
        __Vtemp_24[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x1aU]);
        __Vtemp_24[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x1bU]);
        __Vtemp_24[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x1cU]);
        __Vtemp_24[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x1dU]);
        __Vtemp_24[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x1eU]);
        __Vtemp_24[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x1fU]);
        __Vtemp_24[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x20U]);
        __Vtemp_24[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x21U]);
        __Vtemp_24[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x22U]);
        __Vtemp_24[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x23U]);
        __Vtemp_24[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x24U]);
        __Vtemp_24[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x25U]);
        bufp->chgWData(oldp+1244,(__Vtemp_24),400);
        __Vtemp_26[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xdU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xcU] 
                                           >> 0x10U)));
        __Vtemp_26[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xeU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xdU] 
                                           >> 0x10U)));
        __Vtemp_26[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xfU] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xeU] 
                                           >> 0x10U)));
        __Vtemp_26[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x10U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xfU] 
                                           >> 0x10U)));
        __Vtemp_26[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x11U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x10U] 
                                           >> 0x10U)));
        __Vtemp_26[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x12U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x11U] 
                                           >> 0x10U)));
        __Vtemp_26[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x13U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x12U] 
                                           >> 0x10U)));
        __Vtemp_26[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x14U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x13U] 
                                           >> 0x10U)));
        __Vtemp_26[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x15U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x14U] 
                                           >> 0x10U)));
        __Vtemp_26[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x16U] 
                              << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x15U] 
                                           >> 0x10U)));
        __Vtemp_26[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x17U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x16U] 
                                             >> 0x10U)));
        __Vtemp_26[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x18U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x17U] 
                                             >> 0x10U)));
        __Vtemp_26[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & ((vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x19U] 
                                << 0x10U) | (vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0x18U] 
                                             >> 0x10U)));
        bufp->chgWData(oldp+1257,(__Vtemp_26),400);
        __Vtemp_28[0U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0U]);
        __Vtemp_28[1U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[1U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[1U]);
        __Vtemp_28[2U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[2U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[2U]);
        __Vtemp_28[3U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[3U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[3U]);
        __Vtemp_28[4U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[4U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[4U]);
        __Vtemp_28[5U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[5U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[5U]);
        __Vtemp_28[6U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[6U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[6U]);
        __Vtemp_28[7U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[7U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[7U]);
        __Vtemp_28[8U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[8U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[8U]);
        __Vtemp_28[9U] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[9U] 
                          & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[9U]);
        __Vtemp_28[0xaU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xaU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xaU]);
        __Vtemp_28[0xbU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xbU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xbU]);
        __Vtemp_28[0xcU] = (VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0[0xcU] 
                            & vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart[0xcU]);
        bufp->chgWData(oldp+1270,(__Vtemp_28),400);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+1283,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes),224);
        bufp->chgSData(oldp+1290,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1291,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1292,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1293,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1294,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1295,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1298,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1299,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1300,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1301,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1302,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1303,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1306,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1307,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1310,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1311,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1312,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1313,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1315,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1316,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1317,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1318,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1319,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1320,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1321,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1323,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1324,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1325,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1328,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1329,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1333,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1335,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1336,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1337,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1338,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1339,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1341,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1342,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1343,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1344,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1345,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1346,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1347,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1349,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1350,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1351,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1352,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1353,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1354,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1355,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1356,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1359,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1362,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1363,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1364,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1365,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1367,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1368,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1369,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1370,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1371,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1372,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1373,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1375,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1376,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1377,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1379,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1380,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1381,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1385,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1388,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1389,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1390,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1391,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1392,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1393,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1394,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1395,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1396,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1397,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1398,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1399,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1400,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1401,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1402,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1403,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1406,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1407,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1408,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1409,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1410,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1411,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1412,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1413,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1414,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1416,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1417,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1418,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1419,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1420,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1421,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1422,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1423,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1424,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1425,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1426,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1427,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1428,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1429,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1431,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1432,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1433,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1434,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1435,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1436,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1437,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1438,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1439,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1440,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1441,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1442,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1443,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1444,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1445,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1446,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1447,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1448,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1449,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1450,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1451,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1453,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1454,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1455,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1456,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1457,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1458,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1459,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1460,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1463,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1464,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1465,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1466,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1467,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1468,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1469,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1471,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1472,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1473,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1474,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1475,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1476,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1477,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1479,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1480,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1481,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1482,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1483,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1484,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1485,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1486,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1489,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1491,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1492,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1493,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1494,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1495,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1496,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1497,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1498,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1499,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1500,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1502,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1503,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1505,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1506,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1507,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1508,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1509,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1510,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1511,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1512,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1513,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1515,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1516,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1517,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1518,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1519,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1520,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1521,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1523,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1524,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1525,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1526,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1527,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1528,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1529,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1531,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1532,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1533,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1535,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1536,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1537,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1538,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1539,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1540,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1541,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1543,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1544,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1545,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1546,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1547,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1549,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1550,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1551,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1552,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1553,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1554,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1555,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1556,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1557,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1558,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1559,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1560,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1561,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1562,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1563,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1564,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1565,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1567,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1568,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1570,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1571,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1572,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1573,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1575,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1576,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1577,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1578,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1579,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1580,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1581,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1582,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1583,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1584,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1585,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1586,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1587,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1588,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1589,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1590,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1592,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1593,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1594,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1595,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1596,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1597,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1598,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1599,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1600,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1601,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1602,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1603,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1604,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1605,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1606,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1607,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1608,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1609,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1610,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1611,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1612,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1613,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1614,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1615,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1616,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1617,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1618,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1619,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1620,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1621,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1622,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1623,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1624,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1625,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1627,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+1628,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.res),16);
        bufp->chgSData(oldp+1629,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInA),16);
        bufp->chgSData(oldp+1630,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInB),16);
        bufp->chgIData(oldp+1631,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__i),32);
        bufp->chgSData(oldp+1632,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+1633,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__addC),16);
        bufp->chgBit(oldp+1634,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+1635,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
        bufp->chgSData(oldp+1636,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
        bufp->chgSData(oldp+1637,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
        bufp->chgCData(oldp+1638,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
        bufp->chgCData(oldp+1639,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
        bufp->chgSData(oldp+1640,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
        bufp->chgSData(oldp+1641,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
        bufp->chgCData(oldp+1642,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+1645,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1646,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+1647,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
        bufp->chgSData(oldp+1648,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
        bufp->chgIData(oldp+1649,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
        bufp->chgSData(oldp+1650,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
        bufp->chgSData(oldp+1651,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
        bufp->chgBit(oldp+1652,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+1653,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+1654,(vlSelf->convLayerSingleTB__DOT__clk));
    bufp->chgIData(oldp+1655,(vlSelf->convLayerSingleTB__DOT__clkCnt),32);
    bufp->chgIData(oldp+1656,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k),32);
    bufp->chgIData(oldp+1657,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i),32);
}

void VconvLayerSingleTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_cleanup\n"); );
    // Init
    VconvLayerSingleTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerSingleTB___024root*>(voidSelf);
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
