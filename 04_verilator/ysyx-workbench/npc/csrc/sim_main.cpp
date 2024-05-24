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
    int sim_steps = 20;  // Set the number of simulation steps

    // VCD wave initialization
    tfp = new VerilatedVcdC;            // Initialize VCD pointer
    contextp->traceEverOn(true);        // Enable tracing
    top->trace(tfp, 0);

    // VCD wave setting
    tfp->open("wave.vcd");              // VCD file path
    tfp->set_time_unit("ns");           // Set time unit to nanoseconds
    

    // Start simulation
    for (int i = 0; i < sim_steps; i++) {   // start until sim_step
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();                    // Evaluate model
        printf("[%3d]  a = %d, b = %d, f = %d\n", i, a, b, top->f);
        assert(top->f == (a ^ b));

        tfp->dump(contextp->time());    // Save waveforms
        contextp->timeInc(1);           // Increment time
    }

    // VCD wave dump
    tfp->close();
    // End of simulation
    top->final();

    delete tfp;
    delete top; 
    delete contextp;

    return 0;
}