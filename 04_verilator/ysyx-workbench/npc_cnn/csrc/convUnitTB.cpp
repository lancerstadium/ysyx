// verilator
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VconvUnitTB.h"

// glibc
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


// =================================================== //
//                    Environment
// =================================================== //

VerilatedContext* contextp;
VerilatedVcdC* tfp;
VconvUnitTB* convUnitTB_t;


// =================================================== //
//                   Helper Functions
// =================================================== //

// Test Simulation Environment Initialization
void env_init(int argc, char **argv) {
    contextp = new VerilatedContext;                // Init Verilated context
    tfp = new VerilatedVcdC;                        // Init VCD pointer
    convUnitTB_t = new VconvUnitTB;                // TestBench: testBench
    
    contextp->commandArgs(argc, argv);              // Parse command line arguments
    contextp->traceEverOn(true);                    // Enable tracing
    tfp->open("convUnitTB.vcd");                   // VCD file path
}


void env_clean() {
    tfp->close();
    delete convUnitTB_t;
    delete tfp;
    delete contextp;
}

void sim() {
    convUnitTB_t->eval();
}

// Single Cycle Vcd Record
void trace() {
    tfp->dump(contextp->time());
    contextp->timeInc(1);
}


// =================================================== //
//                   Testbench Program
// =================================================== //

int main(int argc, char **argv, char **env) {
    env_init(argc, argv);
    while (!contextp->gotFinish()) {
        sim();
        trace();
    }
    env_clean();
    return 0;
}