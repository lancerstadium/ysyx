// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VprocElemTB__Syms.h"


VL_ATTR_COLD void VprocElemTB___024root__trace_init_sub__TOP__0(VprocElemTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("procElemTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("PE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"FLOAT_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"mulC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"addC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("sint_mode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fAdd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+15,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+16,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+19,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+20,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+21,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+5,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+7,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+8,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+9,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VprocElemTB___024root__trace_init_top(VprocElemTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_init_top\n"); );
    // Body
    VprocElemTB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VprocElemTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VprocElemTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VprocElemTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VprocElemTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VprocElemTB___024root__trace_register(VprocElemTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VprocElemTB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VprocElemTB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VprocElemTB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VprocElemTB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VprocElemTB___024root__trace_const_0_sub_0(VprocElemTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VprocElemTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_const_0\n"); );
    // Init
    VprocElemTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VprocElemTB___024root*>(voidSelf);
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VprocElemTB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VprocElemTB___024root__trace_const_0_sub_0(VprocElemTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+30,(0x64U),32);
    bufp->fullIData(oldp+31,(0x20U),32);
    bufp->fullIData(oldp+32,(1U),32);
    bufp->fullIData(oldp+33,(8U),32);
    bufp->fullIData(oldp+34,(0x17U),32);
    bufp->fullIData(oldp+35,(0x7dU),32);
    bufp->fullIData(oldp+36,(0x2fU),32);
}

VL_ATTR_COLD void VprocElemTB___024root__trace_full_0_sub_0(VprocElemTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VprocElemTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_full_0\n"); );
    // Init
    VprocElemTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VprocElemTB___024root*>(voidSelf);
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VprocElemTB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VprocElemTB___024root__trace_full_0_sub_0(VprocElemTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->procElemTB__DOT__PE__DOT__mulC),32);
    bufp->fullBit(oldp+2,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
    bufp->fullCData(oldp+3,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),8);
    bufp->fullIData(oldp+4,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),23);
    bufp->fullQData(oldp+5,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),48);
    bufp->fullIData(oldp+7,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),24);
    bufp->fullIData(oldp+8,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),24);
    bufp->fullBit(oldp+9,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
    bufp->fullIData(oldp+10,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+11,(vlSelf->procElemTB__DOT__PE__DOT__addC),32);
    bufp->fullBit(oldp+12,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
    bufp->fullCData(oldp+13,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),8);
    bufp->fullIData(oldp+14,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),23);
    bufp->fullIData(oldp+15,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),24);
    bufp->fullCData(oldp+16,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),8);
    bufp->fullCData(oldp+17,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),8);
    bufp->fullIData(oldp+18,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),24);
    bufp->fullIData(oldp+19,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),24);
    bufp->fullSData(oldp+20,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),9);
    bufp->fullBit(oldp+21,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
    bufp->fullBit(oldp+22,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
    bufp->fullIData(oldp+23,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+24,(vlSelf->procElemTB__DOT__clk));
    bufp->fullBit(oldp+25,(vlSelf->procElemTB__DOT__rst));
    bufp->fullIData(oldp+26,(vlSelf->procElemTB__DOT__A),32);
    bufp->fullIData(oldp+27,(vlSelf->procElemTB__DOT__B),32);
    bufp->fullIData(oldp+28,(vlSelf->procElemTB__DOT__R),32);
    bufp->fullIData(oldp+29,(vlSelf->procElemTB__DOT__C),32);
}