// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VconvUnitTB__Syms.h"


VL_ATTR_COLD void VconvUnitTB___024root__trace_init_sub__TOP__0(VconvUnitTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("convUnitTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+15,0,"fit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+28,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+58,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"img",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declArray(c+15,0,"fit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,399);
    tracep->declBus(c+28,0,"res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,15);
    tracep->declBus(c+29,0,"selInA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"selInB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+37,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+38,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+41,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+42,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+43,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+49,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+50,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+51,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+52,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+53,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VconvUnitTB___024root__trace_init_top(VconvUnitTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_init_top\n"); );
    // Body
    VconvUnitTB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VconvUnitTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VconvUnitTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VconvUnitTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VconvUnitTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VconvUnitTB___024root__trace_register(VconvUnitTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VconvUnitTB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VconvUnitTB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VconvUnitTB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VconvUnitTB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VconvUnitTB___024root__trace_const_0_sub_0(VconvUnitTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VconvUnitTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_const_0\n"); );
    // Init
    VconvUnitTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvUnitTB___024root*>(voidSelf);
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VconvUnitTB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VconvUnitTB___024root__trace_const_0_sub_0(VconvUnitTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+55,(0x10U),32);
    bufp->fullIData(oldp+56,(1U),32);
    bufp->fullIData(oldp+57,(5U),32);
    bufp->fullIData(oldp+58,(0x64U),32);
    bufp->fullIData(oldp+59,(0xaU),32);
    bufp->fullIData(oldp+60,(0xdU),32);
    bufp->fullIData(oldp+61,(0x15U),32);
}

VL_ATTR_COLD void VconvUnitTB___024root__trace_full_0_sub_0(VconvUnitTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VconvUnitTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_full_0\n"); );
    // Init
    VconvUnitTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvUnitTB___024root*>(voidSelf);
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VconvUnitTB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VconvUnitTB___024root__trace_full_0_sub_0(VconvUnitTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->convUnitTB__DOT__rst));
    bufp->fullWData(oldp+2,(vlSelf->convUnitTB__DOT__img),400);
    bufp->fullWData(oldp+15,(vlSelf->convUnitTB__DOT__fit),400);
    bufp->fullSData(oldp+28,(vlSelf->convUnitTB__DOT__res),16);
    bufp->fullSData(oldp+29,(vlSelf->convUnitTB__DOT__UUT__DOT__selInA),16);
    bufp->fullSData(oldp+30,(vlSelf->convUnitTB__DOT__UUT__DOT__selInB),16);
    bufp->fullIData(oldp+31,(vlSelf->convUnitTB__DOT__UUT__DOT__i),32);
    bufp->fullSData(oldp+32,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC),16);
    bufp->fullSData(oldp+33,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC),16);
    bufp->fullBit(oldp+34,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+35,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),5);
    bufp->fullSData(oldp+36,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),10);
    bufp->fullSData(oldp+37,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),11);
    bufp->fullCData(oldp+38,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),5);
    bufp->fullCData(oldp+39,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),5);
    bufp->fullSData(oldp+40,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),11);
    bufp->fullSData(oldp+41,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),11);
    bufp->fullCData(oldp+42,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),6);
    bufp->fullBit(oldp+43,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+44,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+45,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+46,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+47,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),5);
    bufp->fullSData(oldp+48,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),10);
    bufp->fullIData(oldp+49,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),22);
    bufp->fullSData(oldp+50,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),11);
    bufp->fullSData(oldp+51,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),11);
    bufp->fullBit(oldp+52,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+53,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+54,(vlSelf->convUnitTB__DOT__clk));
}
