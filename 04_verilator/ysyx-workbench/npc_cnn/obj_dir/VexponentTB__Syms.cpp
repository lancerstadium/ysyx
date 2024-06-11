// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VexponentTB__pch.h"
#include "VexponentTB.h"
#include "VexponentTB___024root.h"

// FUNCTIONS
VexponentTB__Syms::~VexponentTB__Syms()
{
}

VexponentTB__Syms::VexponentTB__Syms(VerilatedContext* contextp, const char* namep, VexponentTB* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(74);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
