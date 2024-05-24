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


void single_cycle_vcd_record() {
    tfp->dump(contextp->time());
    contextp->timeInc(1);
}

void single_cycle_bit_add(int i) {
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();                    // Evaluate model
    printf("[%3d]  a = %d, b = %d, f = %d\n", i, a, b, top->f);
    assert(top->f == (a ^ b));
    single_cycle_vcd_record();
}

void single_cycle_light() {
    top->clk = 1;
    top->eval();
    single_cycle_vcd_record();
    top->clk = 0;
    top->eval();
    single_cycle_vcd_record();
}

void reset_light(int n) {
    top->rst = 1;
    while (n-- > 0) single_cycle_light();
    top->rst = 0;
}



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
    
    reset_light(10);
    // Start simulation
    for (int i = 0; i < sim_steps; i++) {   // start until sim_step
        // single_cycle_bit_add(i);
        single_cycle_light();
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