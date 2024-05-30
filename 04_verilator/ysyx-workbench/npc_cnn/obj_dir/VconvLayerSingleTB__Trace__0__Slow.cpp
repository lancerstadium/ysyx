// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VconvLayerSingleTB__Syms.h"


VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("convLayerSingleTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 399,0);
    tracep->declArray(c+534,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12543,0);
    tracep->declBus(c+1663,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+527,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1656,0,"clkCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,16383);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+534,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,12543);
    tracep->declArray(c+1284,0,"cuRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,223);
    tracep->declArray(c+926,0,"imgPart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,5599);
    tracep->declBit(c+528,0,"gRst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+529,0,"rowNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+530,0,"colSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+531,0,"clkCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+532,0,"cuCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,16383);
    tracep->declBus(c+529,0,"rowNum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+530,0,"colSel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+926,0,"imgPart",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,5599);
    tracep->declBus(c+1101,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+533,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1657,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1658,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("CU", VerilatedTracePrefixType::SCOPE_MODULE);
    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1102,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1291,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1292,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1293,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1294,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1292,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1293,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1291,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1295,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1296,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1295,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1291,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1296,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1297,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1298,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1299,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1300,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1301,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1302,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1303,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1304,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1305,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1306,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1307,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1308,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1292,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1293,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1295,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1309,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1310,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1311,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1312,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1313,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1314,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1315,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1316,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1115,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1317,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1318,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1319,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1320,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1318,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1319,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1317,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1321,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1322,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1321,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1317,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1322,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1323,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1324,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1325,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1326,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1327,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1328,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1329,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1330,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1331,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1332,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1333,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1334,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1318,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1319,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1321,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1335,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1336,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1337,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1338,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1339,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1340,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1341,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1342,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1128,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1343,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1344,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1345,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1346,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1344,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1345,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1343,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1347,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1348,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1347,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1343,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1348,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1349,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1350,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1351,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1352,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1353,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1354,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1355,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1356,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1357,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1358,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1359,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1360,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1344,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1345,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1347,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1361,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1362,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1363,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1364,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1365,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1366,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1367,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1368,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1141,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1369,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1370,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1371,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1372,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1371,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1369,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1373,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1374,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1373,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1369,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1374,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1375,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1376,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1377,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1378,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1379,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1380,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1381,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1382,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1383,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1384,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1385,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1386,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1371,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1373,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1387,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1389,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1390,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1391,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1392,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1393,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1394,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1154,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1395,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1396,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1397,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1398,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1396,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1397,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1395,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1399,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1400,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1399,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1395,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1400,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1401,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1402,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1403,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1404,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1405,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1406,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1407,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1408,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1409,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1410,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1411,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1412,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1396,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1397,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1399,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1413,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1414,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1415,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1416,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1417,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1418,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1419,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1420,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1167,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1421,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1422,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1423,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1424,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1422,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1423,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1421,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1425,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1426,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1425,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1421,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1426,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1427,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1428,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1429,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1430,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1431,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1432,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1433,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1434,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1435,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1436,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1437,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1438,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1422,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1423,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1425,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1439,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1440,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1441,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1442,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1443,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1444,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1445,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1446,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1180,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1447,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1448,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1449,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1450,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1448,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1449,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1447,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1451,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1452,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1451,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1447,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1452,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1453,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1454,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1455,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1456,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1457,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1458,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1459,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1460,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1461,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1462,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1463,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1464,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1448,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1449,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1451,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1465,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1466,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1467,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1468,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1469,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1470,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1471,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1472,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1193,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1473,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1474,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1475,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1476,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1474,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1475,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1473,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1477,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1478,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1477,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1473,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1478,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1479,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1480,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1481,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1482,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1483,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1484,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1485,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1486,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1487,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1488,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1489,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1490,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1474,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1475,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1477,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1491,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1492,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1493,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1494,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1495,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1496,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1497,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1498,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1206,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1499,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1500,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1501,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1502,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1500,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1501,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1499,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1503,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1504,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1503,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1499,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1504,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1505,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1506,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1507,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1508,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1509,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1510,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1511,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1512,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1513,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1514,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1515,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1516,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1500,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1501,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1503,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1517,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1518,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1519,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1520,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1521,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1522,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1523,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1524,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1219,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1525,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1526,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1527,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1528,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1527,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1525,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1529,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1530,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1529,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1525,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1530,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1531,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1532,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1533,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1534,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1535,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1536,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1537,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1538,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1539,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1540,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1541,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1542,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1526,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1527,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1529,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1543,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1544,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1545,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1546,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1547,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1548,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1549,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1550,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1232,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1551,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1552,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1553,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1554,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1552,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1553,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1551,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1555,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1556,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1555,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1551,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1556,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1557,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1558,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1559,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1560,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1561,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1562,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1563,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1564,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1565,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1566,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1567,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1568,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1552,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1553,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1555,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1569,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1570,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1571,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1572,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1573,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1574,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1575,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1576,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1245,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1577,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1578,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1579,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1580,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1578,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1579,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1577,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1581,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1582,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1581,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1577,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1582,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1583,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1584,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1585,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1586,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1587,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1588,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1589,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1590,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1591,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1592,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1593,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1594,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1578,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1579,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1581,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1595,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1596,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1597,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1598,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1599,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1600,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1601,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1602,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1258,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1603,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1604,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1605,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1606,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1604,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1605,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1603,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1607,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1608,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1603,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1608,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1609,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1610,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1611,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1612,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1613,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1614,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1615,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1616,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1617,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1618,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1619,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1620,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1604,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1605,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1607,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1621,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1622,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1623,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1624,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1625,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1626,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1627,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1628,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_init_sub__TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1271,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+514,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+1629,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+1630,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1631,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1632,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1655,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1630,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1631,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1629,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1633,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1634,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1633,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1629,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1634,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1635,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1636,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1637,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1638,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1639,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1640,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1641,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1642,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1643,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1644,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1645,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1646,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1630,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1631,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1633,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1661,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1647,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1648,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1649,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1650,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1651,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1652,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1653,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1654,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+1659,(0x10U),32);
    bufp->fullIData(oldp+1660,(1U),32);
    bufp->fullIData(oldp+1661,(5U),32);
    bufp->fullIData(oldp+1662,(0x20U),32);
    bufp->fullIData(oldp+1663,(0x64U),32);
    bufp->fullIData(oldp+1664,(0xaU),32);
    bufp->fullIData(oldp+1665,(0xdU),32);
    bufp->fullIData(oldp+1666,(0x15U),32);
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

extern const VlWide<13>/*415:0*/ VconvLayerSingleTB__ConstPool__CONST_h1ab850d3_0;

VL_ATTR_COLD void VconvLayerSingleTB___024root__trace_full_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+1,(vlSelf->convLayerSingleTB__DOT__rst));
    bufp->fullWData(oldp+2,(vlSelf->convLayerSingleTB__DOT__img),16384);
    bufp->fullWData(oldp+514,(vlSelf->convLayerSingleTB__DOT__fit),400);
    bufp->fullIData(oldp+527,(vlSelf->convLayerSingleTB__DOT__i),32);
    bufp->fullBit(oldp+528,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst));
    bufp->fullCData(oldp+529,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum),6);
    bufp->fullCData(oldp+530,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel),6);
    bufp->fullIData(oldp+531,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt),32);
    bufp->fullIData(oldp+532,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt),32);
    bufp->fullIData(oldp+533,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c),32);
    bufp->fullWData(oldp+534,(vlSelf->convLayerSingleTB__DOT__res),12544);
    bufp->fullWData(oldp+926,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart),5600);
    bufp->fullIData(oldp+1101,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address),32);
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
    bufp->fullWData(oldp+1102,(__Vtemp_2),400);
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
    bufp->fullWData(oldp+1115,(__Vtemp_4),400);
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
    bufp->fullWData(oldp+1128,(__Vtemp_6),400);
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
    bufp->fullWData(oldp+1141,(__Vtemp_8),400);
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
    bufp->fullWData(oldp+1154,(__Vtemp_10),400);
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
    bufp->fullWData(oldp+1167,(__Vtemp_12),400);
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
    bufp->fullWData(oldp+1180,(__Vtemp_14),400);
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
    bufp->fullWData(oldp+1193,(__Vtemp_16),400);
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
    bufp->fullWData(oldp+1206,(__Vtemp_18),400);
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
    bufp->fullWData(oldp+1219,(__Vtemp_20),400);
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
    bufp->fullWData(oldp+1232,(__Vtemp_22),400);
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
    bufp->fullWData(oldp+1245,(__Vtemp_24),400);
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
    bufp->fullWData(oldp+1258,(__Vtemp_26),400);
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
    bufp->fullWData(oldp+1271,(__Vtemp_28),400);
    bufp->fullWData(oldp+1284,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes),224);
    bufp->fullSData(oldp+1291,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1292,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1293,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1294,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1295,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1296,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1297,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1298,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1299,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1300,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1301,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1302,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1303,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1304,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1305,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1306,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1307,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1308,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1309,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1310,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1311,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1312,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1313,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1314,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1315,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1316,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1317,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1318,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1319,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1320,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1321,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1322,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1323,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1324,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1325,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1326,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1327,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1328,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1329,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1330,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1331,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1332,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1333,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1334,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1335,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1336,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1337,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1338,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1339,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1340,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1341,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1342,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1343,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1344,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1345,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1346,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1347,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1348,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1349,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1350,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1351,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1352,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1353,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1354,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1355,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1356,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1357,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1358,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1359,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1360,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1361,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1362,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1363,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1364,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1365,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1366,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1367,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1368,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1369,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1370,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1371,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1372,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1373,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1374,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1375,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1376,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1377,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1378,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1379,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1380,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1381,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1382,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1383,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1384,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1385,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1386,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1387,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1388,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1389,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1390,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1391,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1392,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1393,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1394,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1395,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1396,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1397,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1398,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1399,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1400,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1401,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1402,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1403,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1404,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1405,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1406,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1407,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1408,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1409,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1410,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1411,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1412,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1413,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1414,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1415,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1416,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1417,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1418,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1419,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1420,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1421,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1422,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1423,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1424,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1425,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1426,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1427,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1428,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1429,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1430,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1431,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1432,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1433,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1434,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1435,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1436,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1437,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1438,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1439,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1440,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1441,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1442,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1443,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1444,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1445,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1446,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1447,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1448,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1449,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1450,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1451,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1452,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1453,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1454,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1455,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1456,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1457,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1458,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1459,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1460,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1461,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1462,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1463,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1464,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1465,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1466,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1467,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1468,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1469,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1470,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1471,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1472,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1473,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1474,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1475,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1476,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1477,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1478,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1479,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1480,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1481,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1482,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1483,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1484,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1485,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1486,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1487,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1488,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1489,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1490,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1491,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1492,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1493,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1494,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1495,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1496,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1497,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1498,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1499,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1500,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1501,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1502,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1503,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1504,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1505,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1506,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1507,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1508,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1509,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1510,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1511,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1512,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1513,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1514,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1515,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1516,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1517,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1518,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1519,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1520,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1521,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1522,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1523,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1524,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1525,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1526,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1527,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1528,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1529,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1530,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1531,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1532,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1533,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1534,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1535,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1536,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1537,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1538,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1539,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1540,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1541,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1542,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1543,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1544,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1545,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1546,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1547,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1548,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1549,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1550,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1551,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1552,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1553,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1554,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1555,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1556,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1557,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1558,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1559,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1560,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1561,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1562,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1563,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1564,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1565,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1566,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1567,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1568,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1569,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1570,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1571,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1572,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1573,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1574,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1575,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1576,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1577,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1578,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1579,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1580,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1581,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1582,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1583,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1584,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1585,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1586,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1587,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1588,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1589,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1590,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1591,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1592,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1593,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1594,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1595,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1596,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1597,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1598,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1599,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1600,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1601,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1602,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1603,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1604,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1605,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1606,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1607,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1608,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1609,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1610,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1611,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1612,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1613,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1614,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1615,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1616,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1617,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1618,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1619,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1620,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1621,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1622,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1623,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1624,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1625,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1626,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1627,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1628,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+1629,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.res),16);
    bufp->fullSData(oldp+1630,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInA),16);
    bufp->fullSData(oldp+1631,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__selInB),16);
    bufp->fullIData(oldp+1632,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__i),32);
    bufp->fullSData(oldp+1633,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+1634,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__addC),16);
    bufp->fullBit(oldp+1635,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+1636,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+1637,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+1638,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+1639,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+1640,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+1641,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+1642,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+1643,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+1644,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+1645,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+1646,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1647,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+1648,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+1649,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+1650,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+1651,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+1652,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+1653,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+1654,(vlSymsp->TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU.__PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1655,(vlSelf->convLayerSingleTB__DOT__clk));
    bufp->fullIData(oldp+1656,(vlSelf->convLayerSingleTB__DOT__clkCnt),32);
    bufp->fullIData(oldp+1657,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k),32);
    bufp->fullIData(oldp+1658,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i),32);
}
