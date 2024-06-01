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
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"P1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"P2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"P2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"y1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"y1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"y1S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"y2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"y2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"y2S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"y3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"y3D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"y3S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"y4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fMul2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+15,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+17,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+18,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+19,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+24,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+26,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+27,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+28,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fMul4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+33,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+35,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+36,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+37,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yAdd1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+42,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+43,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+46,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+47,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+48,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yMul1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+54,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+56,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+57,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+58,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+59,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yMul3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+63,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+65,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+66,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+67,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("yMul4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->pushPrefix("yMul5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"EXPONENT_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"FRACTION_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->pushPrefix("ySub2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    tracep->pushPrefix("ySub3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+101,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+104,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+105,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+108,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+109,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+110,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ySub4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"EXPONENT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"MANTISSA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"exponent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"mantissa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+117,0,"fraction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+118,0,"exponentA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"exponentB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+120,0,"fractionA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+121,0,"fractionB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+122,0,"shiftAmount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+123,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"eout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    bufp->fullIData(oldp+130,(0x20U),32);
    bufp->fullIData(oldp+131,(0x64U),32);
    bufp->fullIData(oldp+132,(0x4034b4b5U),32);
    bufp->fullIData(oldp+133,(0xbff0f0f1U),32);
    bufp->fullIData(oldp+134,(0x40000000U),32);
    bufp->fullIData(oldp+135,(8U),32);
    bufp->fullIData(oldp+136,(0x17U),32);
    bufp->fullIData(oldp+137,(0x7dU),32);
    bufp->fullIData(oldp+138,(0x2fU),32);
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
    bufp->fullIData(oldp+2,(vlSelf->floatRecTB__DOT__FA__DOT__y1),32);
    bufp->fullIData(oldp+3,(vlSelf->floatRecTB__DOT__FA__DOT__y1D),32);
    bufp->fullIData(oldp+4,(vlSelf->floatRecTB__DOT__FA__DOT__y1S),32);
    bufp->fullIData(oldp+5,(vlSelf->floatRecTB__DOT__FA__DOT__y2),32);
    bufp->fullIData(oldp+6,(vlSelf->floatRecTB__DOT__FA__DOT__y2D),32);
    bufp->fullIData(oldp+7,(vlSelf->floatRecTB__DOT__FA__DOT__y2S),32);
    bufp->fullIData(oldp+8,(vlSelf->floatRecTB__DOT__FA__DOT__y3),32);
    bufp->fullIData(oldp+9,(vlSelf->floatRecTB__DOT__FA__DOT__y3D),32);
    bufp->fullIData(oldp+10,(vlSelf->floatRecTB__DOT__FA__DOT__y3S),32);
    bufp->fullIData(oldp+11,(vlSelf->floatRecTB__DOT__FA__DOT__y4),32);
    bufp->fullBit(oldp+12,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__sign));
    bufp->fullCData(oldp+13,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent),8);
    bufp->fullIData(oldp+14,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa),23);
    bufp->fullQData(oldp+15,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction),48);
    bufp->fullIData(oldp+17,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA),24);
    bufp->fullIData(oldp+18,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB),24);
    bufp->fullBit(oldp+19,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout));
    bufp->fullIData(oldp+20,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+21,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__sign));
    bufp->fullCData(oldp+22,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent),8);
    bufp->fullIData(oldp+23,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa),23);
    bufp->fullQData(oldp+24,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction),48);
    bufp->fullIData(oldp+26,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA),24);
    bufp->fullIData(oldp+27,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB),24);
    bufp->fullBit(oldp+28,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout));
    bufp->fullIData(oldp+29,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+30,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__sign));
    bufp->fullCData(oldp+31,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent),8);
    bufp->fullIData(oldp+32,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa),23);
    bufp->fullQData(oldp+33,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction),48);
    bufp->fullIData(oldp+35,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA),24);
    bufp->fullIData(oldp+36,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB),24);
    bufp->fullBit(oldp+37,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout));
    bufp->fullIData(oldp+38,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+39,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign));
    bufp->fullCData(oldp+40,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent),8);
    bufp->fullIData(oldp+41,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa),23);
    bufp->fullIData(oldp+42,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction),24);
    bufp->fullCData(oldp+43,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA),8);
    bufp->fullCData(oldp+44,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB),8);
    bufp->fullIData(oldp+45,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA),24);
    bufp->fullIData(oldp+46,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB),24);
    bufp->fullSData(oldp+47,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount),9);
    bufp->fullBit(oldp+48,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout));
    bufp->fullBit(oldp+49,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout));
    bufp->fullIData(oldp+50,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+51,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__sign));
    bufp->fullCData(oldp+52,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent),8);
    bufp->fullIData(oldp+53,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa),23);
    bufp->fullQData(oldp+54,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction),48);
    bufp->fullIData(oldp+56,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionA),24);
    bufp->fullIData(oldp+57,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB),24);
    bufp->fullBit(oldp+58,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout));
    bufp->fullIData(oldp+59,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+60,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__sign));
    bufp->fullCData(oldp+61,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent),8);
    bufp->fullIData(oldp+62,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa),23);
    bufp->fullQData(oldp+63,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction),48);
    bufp->fullIData(oldp+65,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionA),24);
    bufp->fullIData(oldp+66,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionB),24);
    bufp->fullBit(oldp+67,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__eout));
    bufp->fullIData(oldp+68,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+69,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__sign));
    bufp->fullCData(oldp+70,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent),8);
    bufp->fullIData(oldp+71,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa),23);
    bufp->fullQData(oldp+72,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction),48);
    bufp->fullIData(oldp+74,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionA),24);
    bufp->fullIData(oldp+75,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionB),24);
    bufp->fullBit(oldp+76,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__eout));
    bufp->fullIData(oldp+77,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+78,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__sign));
    bufp->fullCData(oldp+79,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent),8);
    bufp->fullIData(oldp+80,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa),23);
    bufp->fullQData(oldp+81,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction),48);
    bufp->fullIData(oldp+83,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionA),24);
    bufp->fullIData(oldp+84,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionB),24);
    bufp->fullBit(oldp+85,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__eout));
    bufp->fullIData(oldp+86,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+87,((0x80000000U | (0x7fffffffU 
                                             & vlSelf->floatRecTB__DOT__FA__DOT__y1D))),32);
    bufp->fullBit(oldp+88,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign));
    bufp->fullCData(oldp+89,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent),8);
    bufp->fullIData(oldp+90,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa),23);
    bufp->fullIData(oldp+91,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction),24);
    bufp->fullCData(oldp+92,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA),8);
    bufp->fullCData(oldp+93,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB),8);
    bufp->fullIData(oldp+94,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA),24);
    bufp->fullIData(oldp+95,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB),24);
    bufp->fullSData(oldp+96,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount),9);
    bufp->fullBit(oldp+97,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__cout));
    bufp->fullBit(oldp+98,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__eout));
    bufp->fullIData(oldp+99,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+100,((0x80000000U | (0x7fffffffU 
                                              & vlSelf->floatRecTB__DOT__FA__DOT__y2D))),32);
    bufp->fullBit(oldp+101,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign));
    bufp->fullCData(oldp+102,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent),8);
    bufp->fullIData(oldp+103,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa),23);
    bufp->fullIData(oldp+104,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction),24);
    bufp->fullCData(oldp+105,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA),8);
    bufp->fullCData(oldp+106,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB),8);
    bufp->fullIData(oldp+107,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA),24);
    bufp->fullIData(oldp+108,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB),24);
    bufp->fullSData(oldp+109,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount),9);
    bufp->fullBit(oldp+110,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__cout));
    bufp->fullBit(oldp+111,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__eout));
    bufp->fullIData(oldp+112,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+113,((0x80000000U | (0x7fffffffU 
                                              & vlSelf->floatRecTB__DOT__FA__DOT__y3D))),32);
    bufp->fullBit(oldp+114,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign));
    bufp->fullCData(oldp+115,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent),8);
    bufp->fullIData(oldp+116,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa),23);
    bufp->fullIData(oldp+117,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction),24);
    bufp->fullCData(oldp+118,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA),8);
    bufp->fullCData(oldp+119,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB),8);
    bufp->fullIData(oldp+120,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA),24);
    bufp->fullIData(oldp+121,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB),24);
    bufp->fullSData(oldp+122,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount),9);
    bufp->fullBit(oldp+123,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__cout));
    bufp->fullBit(oldp+124,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__eout));
    bufp->fullIData(oldp+125,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+126,(vlSelf->floatRecTB__DOT__clk));
    bufp->fullIData(oldp+127,(vlSelf->floatRecTB__DOT__X),32);
    bufp->fullIData(oldp+128,(((0x80000000U & vlSelf->floatRecTB__DOT__X) 
                               | ((0x7f800000U & (((IData)(0xfdU) 
                                                   - 
                                                   (vlSelf->floatRecTB__DOT__X 
                                                    >> 0x17U)) 
                                                  << 0x17U)) 
                                  | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y4)))),32);
    bufp->fullIData(oldp+129,((0x3f000000U | (0x7fffffU 
                                              & vlSelf->floatRecTB__DOT__X))),32);
}
