// verilator
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"

// glibc
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// readline
#include <readline/readline.h>
#include <readline/history.h>

// sys
#include <sys/time.h>


// =================================================== //
//                    Environment
// =================================================== //

VerilatedContext* contextp;
Vtop* top;
VerilatedVcdC* tfp;

vluint64_t main_time = 0;       // current simulation time
double sc_time_stamp() {
    return main_time;
}

uint64_t ref_regs[32];
void hit_exit(int status) {}


// =================================================== //
//                       Main
// =================================================== //

int main(int argc, char **argv, char **env) {
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    top = new Vtop{contextp};

    // VCD wave setup
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");


    return 0;
}