// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfloatRecTB__Syms.h"


VL_ATTR_COLD void VfloatRecTB___024root__trace_init_sub__TOP__0(VfloatRecTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("floatRecTB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"P1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"P2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"P2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"y1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"y1Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"D1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"y1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"y1S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"y2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"y2Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"D2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"y2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"y2S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"y3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"y3Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"D3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"y3D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"y3S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"y4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"y4Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"D4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fMul2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+106,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+108,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+109,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+110,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+111,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+72,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+74,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+75,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+76,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+77,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+38,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+40,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+41,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+42,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"P1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"P2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("yAdd1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+14,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+15,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+18,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+19,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+20,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yMul1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+26,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+28,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+29,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+30,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yMul3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+115,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+117,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+118,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+119,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yMul4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+81,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+83,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+84,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+85,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yMul5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+47,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+49,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+50,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+51,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ySub2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+125,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+126,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+128,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+129,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+130,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+131,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+133,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ySub3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+91,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+92,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+95,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+96,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+97,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ySub4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+57,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+58,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+61,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+62,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+63,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VfloatRecTB___024root__trace_init_top(VfloatRecTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_init_top\n"); );
    // Body
    VfloatRecTB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VfloatRecTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VfloatRecTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfloatRecTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfloatRecTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VfloatRecTB___024root__trace_register(VfloatRecTB___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VfloatRecTB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VfloatRecTB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VfloatRecTB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VfloatRecTB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VfloatRecTB___024root__trace_const_0_sub_0(VfloatRecTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VfloatRecTB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_const_0\n"); );
    // Init
    VfloatRecTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatRecTB___024root*>(voidSelf);
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VfloatRecTB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VfloatRecTB___024root__trace_const_0_sub_0(VfloatRecTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+141,(0x20U),32);
    bufp->fullIData(oldp+142,(0x64U),32);
    bufp->fullIData(oldp+143,(0x4034b4b5U),32);
    bufp->fullIData(oldp+144,(0xbff0f0f1U),32);
    bufp->fullIData(oldp+145,(0x40000000U),32);
    bufp->fullIData(oldp+146,(8U),32);
    bufp->fullIData(oldp+147,(0x17U),32);
    bufp->fullIData(oldp+148,(0x7dU),32);
    bufp->fullIData(oldp+149,(0x2fU),32);
}

VL_ATTR_COLD void VfloatRecTB___024root__trace_full_0_sub_0(VfloatRecTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VfloatRecTB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_full_0\n"); );
    // Init
    VfloatRecTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatRecTB___024root*>(voidSelf);
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VfloatRecTB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VfloatRecTB___024root__trace_full_0_sub_0(VfloatRecTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->floatRecTB__DOT__FA__DOT__P2D),32);
    bufp->fullIData(oldp+2,(vlSelf->floatRecTB__DOT__FA__DOT__x1),32);
    bufp->fullIData(oldp+3,(vlSelf->floatRecTB__DOT__FA__DOT__y1Out),32);
    bufp->fullIData(oldp+4,(vlSelf->floatRecTB__DOT__FA__DOT__D1),32);
    bufp->fullIData(oldp+5,(vlSelf->floatRecTB__DOT__FA__DOT__x2),32);
    bufp->fullIData(oldp+6,(vlSelf->floatRecTB__DOT__FA__DOT__D2),32);
    bufp->fullIData(oldp+7,(vlSelf->floatRecTB__DOT__FA__DOT__x3),32);
    bufp->fullIData(oldp+8,(vlSelf->floatRecTB__DOT__FA__DOT__D3),32);
    bufp->fullIData(oldp+9,(vlSelf->floatRecTB__DOT__FA__DOT__x4),32);
    bufp->fullIData(oldp+10,(vlSelf->floatRecTB__DOT__FA__DOT__D4),32);
    bufp->fullBit(oldp+11,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign));
    bufp->fullCData(oldp+12,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent),8);
    bufp->fullIData(oldp+13,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa),23);
    bufp->fullIData(oldp+14,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction),24);
    bufp->fullCData(oldp+15,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA),8);
    bufp->fullCData(oldp+16,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB),8);
    bufp->fullIData(oldp+17,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA),24);
    bufp->fullIData(oldp+18,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB),24);
    bufp->fullSData(oldp+19,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount),9);
    bufp->fullBit(oldp+20,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout));
    bufp->fullBit(oldp+21,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout));
    bufp->fullIData(oldp+22,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+23,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__sign));
    bufp->fullCData(oldp+24,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent),8);
    bufp->fullIData(oldp+25,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa),23);
    bufp->fullQData(oldp+26,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction),48);
    bufp->fullIData(oldp+28,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionA),24);
    bufp->fullIData(oldp+29,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB),24);
    bufp->fullBit(oldp+30,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout));
    bufp->fullIData(oldp+31,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+32,(vlSelf->floatRecTB__DOT__FA__DOT__y3D),32);
    bufp->fullIData(oldp+33,(vlSelf->floatRecTB__DOT__FA__DOT__y3S),32);
    bufp->fullIData(oldp+34,(vlSelf->floatRecTB__DOT__FA__DOT__y4Out),32);
    bufp->fullBit(oldp+35,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__sign));
    bufp->fullCData(oldp+36,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent),8);
    bufp->fullIData(oldp+37,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa),23);
    bufp->fullQData(oldp+38,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction),48);
    bufp->fullIData(oldp+40,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA),24);
    bufp->fullIData(oldp+41,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB),24);
    bufp->fullBit(oldp+42,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout));
    bufp->fullIData(oldp+43,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+44,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__sign));
    bufp->fullCData(oldp+45,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent),8);
    bufp->fullIData(oldp+46,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa),23);
    bufp->fullQData(oldp+47,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction),48);
    bufp->fullIData(oldp+49,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionA),24);
    bufp->fullIData(oldp+50,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionB),24);
    bufp->fullBit(oldp+51,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__eout));
    bufp->fullIData(oldp+52,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+53,((0x80000000U | (0x7fffffffU 
                                             & vlSelf->floatRecTB__DOT__FA__DOT__y3D))),32);
    bufp->fullBit(oldp+54,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign));
    bufp->fullCData(oldp+55,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent),8);
    bufp->fullIData(oldp+56,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa),23);
    bufp->fullIData(oldp+57,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction),24);
    bufp->fullCData(oldp+58,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA),8);
    bufp->fullCData(oldp+59,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB),8);
    bufp->fullIData(oldp+60,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA),24);
    bufp->fullIData(oldp+61,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB),24);
    bufp->fullSData(oldp+62,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount),9);
    bufp->fullBit(oldp+63,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__cout));
    bufp->fullBit(oldp+64,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__eout));
    bufp->fullIData(oldp+65,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+66,(vlSelf->floatRecTB__DOT__FA__DOT__y2D),32);
    bufp->fullIData(oldp+67,(vlSelf->floatRecTB__DOT__FA__DOT__y2S),32);
    bufp->fullIData(oldp+68,(vlSelf->floatRecTB__DOT__FA__DOT__y3Out),32);
    bufp->fullBit(oldp+69,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__sign));
    bufp->fullCData(oldp+70,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent),8);
    bufp->fullIData(oldp+71,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa),23);
    bufp->fullQData(oldp+72,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction),48);
    bufp->fullIData(oldp+74,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA),24);
    bufp->fullIData(oldp+75,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB),24);
    bufp->fullBit(oldp+76,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout));
    bufp->fullIData(oldp+77,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+78,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__sign));
    bufp->fullCData(oldp+79,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent),8);
    bufp->fullIData(oldp+80,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa),23);
    bufp->fullQData(oldp+81,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction),48);
    bufp->fullIData(oldp+83,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionA),24);
    bufp->fullIData(oldp+84,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionB),24);
    bufp->fullBit(oldp+85,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__eout));
    bufp->fullIData(oldp+86,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+87,((0x80000000U | (0x7fffffffU 
                                             & vlSelf->floatRecTB__DOT__FA__DOT__y2D))),32);
    bufp->fullBit(oldp+88,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign));
    bufp->fullCData(oldp+89,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent),8);
    bufp->fullIData(oldp+90,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa),23);
    bufp->fullIData(oldp+91,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction),24);
    bufp->fullCData(oldp+92,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA),8);
    bufp->fullCData(oldp+93,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB),8);
    bufp->fullIData(oldp+94,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA),24);
    bufp->fullIData(oldp+95,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB),24);
    bufp->fullSData(oldp+96,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount),9);
    bufp->fullBit(oldp+97,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__cout));
    bufp->fullBit(oldp+98,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__eout));
    bufp->fullIData(oldp+99,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+100,(vlSelf->floatRecTB__DOT__FA__DOT__y1D),32);
    bufp->fullIData(oldp+101,(vlSelf->floatRecTB__DOT__FA__DOT__y1S),32);
    bufp->fullIData(oldp+102,(vlSelf->floatRecTB__DOT__FA__DOT__y2Out),32);
    bufp->fullBit(oldp+103,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__sign));
    bufp->fullCData(oldp+104,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent),8);
    bufp->fullIData(oldp+105,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa),23);
    bufp->fullQData(oldp+106,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction),48);
    bufp->fullIData(oldp+108,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA),24);
    bufp->fullIData(oldp+109,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB),24);
    bufp->fullBit(oldp+110,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout));
    bufp->fullIData(oldp+111,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+112,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__sign));
    bufp->fullCData(oldp+113,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent),8);
    bufp->fullIData(oldp+114,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa),23);
    bufp->fullQData(oldp+115,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction),48);
    bufp->fullIData(oldp+117,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionA),24);
    bufp->fullIData(oldp+118,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionB),24);
    bufp->fullBit(oldp+119,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__eout));
    bufp->fullIData(oldp+120,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+121,((0x80000000U | (0x7fffffffU 
                                              & vlSelf->floatRecTB__DOT__FA__DOT__y1D))),32);
    bufp->fullBit(oldp+122,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign));
    bufp->fullCData(oldp+123,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent),8);
    bufp->fullIData(oldp+124,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa),23);
    bufp->fullIData(oldp+125,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction),24);
    bufp->fullCData(oldp+126,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA),8);
    bufp->fullCData(oldp+127,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB),8);
    bufp->fullIData(oldp+128,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA),24);
    bufp->fullIData(oldp+129,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB),24);
    bufp->fullSData(oldp+130,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount),9);
    bufp->fullBit(oldp+131,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__cout));
    bufp->fullBit(oldp+132,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__eout));
    bufp->fullIData(oldp+133,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+134,(vlSelf->floatRecTB__DOT__clk));
    bufp->fullIData(oldp+135,(vlSelf->floatRecTB__DOT__X),32);
    bufp->fullIData(oldp+136,(vlSelf->floatRecTB__DOT__Y),32);
    bufp->fullIData(oldp+137,(vlSelf->floatRecTB__DOT__FA__DOT__y1),32);
    bufp->fullIData(oldp+138,(vlSelf->floatRecTB__DOT__FA__DOT__y2),32);
    bufp->fullIData(oldp+139,(vlSelf->floatRecTB__DOT__FA__DOT__y3),32);
    bufp->fullIData(oldp+140,(vlSelf->floatRecTB__DOT__FA__DOT__y4),32);
}
