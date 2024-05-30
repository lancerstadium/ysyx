// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VconvLayerSingleTB__Syms.h"


VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("convLayerSingleTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 399,0);
    tracep->declArray(c+15,0,"fit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBus(c+20,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+28,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBus(c+66,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+58,0,"clkCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+15,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,143);
    tracep->declArray(c+28,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,143);
    tracep->declBus(c+44,0,"cuRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declArray(c+33,0,"imgPart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,143);
    tracep->declBit(c+22,0,"gRst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"rowNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,0,"colSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+25,0,"clkCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+26,0,"cuCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+23,0,"rowNum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,0,"colSel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+33,0,"imgPart",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,143);
    tracep->declBus(c+38,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+27,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+59,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+60,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+39,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,143);
    tracep->declArray(c+15,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,143);
    tracep->declBus(c+45,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+46,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("float_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("iAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"A_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"B_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"C_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("iMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"A_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"B_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"C_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_top(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_top\n"); );
    // Body
    VconvLayerSingleTB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VconvLayerSingleTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VconvLayerSingleTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_register(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VconvLayerSingleTB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VconvLayerSingleTB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VconvLayerSingleTB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VconvLayerSingleTB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_const_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_const_0\n"); );
    // Init
    VconvLayerSingleTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerSingleTB___024root*>(voidSelf);
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VconvLayerSingleTB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_const_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+61,(0x10U),32);
    bufp->fullIData(oldp+62,(0U),32);
    bufp->fullIData(oldp+63,(1U),32);
    bufp->fullIData(oldp+64,(3U),32);
    bufp->fullIData(oldp+65,(5U),32);
    bufp->fullIData(oldp+66,(0x64U),32);
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_full_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_full_0\n"); );
    // Init
    VconvLayerSingleTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerSingleTB___024root*>(voidSelf);
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VconvLayerSingleTB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_full_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->convLayerSingleTB__DOT__rst));
    bufp->fullWData(oldp+2,(vlSelf->convLayerSingleTB__DOT__img),400);
    bufp->fullWData(oldp+15,(vlSelf->convLayerSingleTB__DOT__fit),144);
    bufp->fullSData(oldp+20,(vlSelf->convLayerSingleTB__DOT__tmp),16);
    bufp->fullIData(oldp+21,(vlSelf->convLayerSingleTB__DOT__i),32);
    bufp->fullBit(oldp+22,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst));
    bufp->fullCData(oldp+23,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum),6);
    bufp->fullCData(oldp+24,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel),6);
    bufp->fullIData(oldp+25,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt),32);
    bufp->fullIData(oldp+26,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt),32);
    bufp->fullIData(oldp+27,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c),32);
    bufp->fullWData(oldp+28,(vlSelf->convLayerSingleTB__DOT__res),144);
    bufp->fullWData(oldp+33,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart),144);
    bufp->fullIData(oldp+38,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address),32);
    bufp->fullWData(oldp+39,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart),144);
    bufp->fullSData(oldp+44,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes),16);
    bufp->fullSData(oldp+45,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes),16);
    bufp->fullSData(oldp+46,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA),16);
    bufp->fullSData(oldp+47,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB),16);
    bufp->fullIData(oldp+48,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i),32);
    bufp->fullSData(oldp+49,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+50,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC),16);
    bufp->fullSData(oldp+51,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed),16);
    bufp->fullSData(oldp+52,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed),16);
    bufp->fullSData(oldp+53,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed),16);
    bufp->fullSData(oldp+54,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed),16);
    bufp->fullSData(oldp+55,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed),16);
    bufp->fullSData(oldp+56,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed),16);
    bufp->fullBit(oldp+57,(vlSelf->convLayerSingleTB__DOT__clk));
    bufp->fullIData(oldp+58,(vlSelf->convLayerSingleTB__DOT__clkCnt),32);
    bufp->fullIData(oldp+59,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k),32);
    bufp->fullIData(oldp+60,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i),32);
}
