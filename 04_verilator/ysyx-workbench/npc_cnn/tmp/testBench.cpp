// verilator
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VtestBenchTB.h"

// glibc
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


// =================================================== //
//                    Environment
// =================================================== //

VerilatedContext* contextp;
VerilatedVcdC* tfp;
VtestBenchTB* testBenchTB_t;


// =================================================== //
//                   Helper Functions
// =================================================== //

// Test Simulation Environment Initialization
void env_init(int argc, char **argv) {
    contextp = new VerilatedContext;                // Init Verilated context
    tfp = new VerilatedVcdC;                        // Init VCD pointer
    testBenchTB_t = new VtestBenchTB;                // TestBench: testBench
    
    contextp->commandArgs(argc, argv);              // Parse command line arguments
    contextp->traceEverOn(true);                    // Enable tracing
    tfp->open("testBenchTB.vcd");                   // VCD file path
}


void env_clean() {
    tfp->close();
    delete testBenchTB_t;
    delete tfp;
    delete contextp;
}

void sim() {
    testBenchTB_t->eval();
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