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

void single_cycle() {
    top->clk = 1;
    top->eval();
    single_cycle_vcd_record();
    top->clk = 0;
    top->eval();
    single_cycle_vcd_record();
}

void reset(int n) {
    top->rst = 1;
    while (n-- > 0) single_cycle();
    top->rst = 0;
}

float float_valueA;
float float_valueB;
float float_valueC;

void elem_init() {
    float_valueA = (float)rand() / RAND_MAX * 400 - 200;  // -200.0~400.0
    float_valueB = (float)rand() / RAND_MAX * 400 - 200; 
    float_valueC += float_valueA * float_valueB;
    top->A = *(uint32_t *)&float_valueA;
    top->B = *(uint32_t *)&float_valueB;
}

void elem_display() {
    float float_valueA_hw = *(float *)&top->A;
    float float_valueB_hw = *(float *)&top->B;
    float float_valueC_hw = *(float *)&top->C;
    printf("A = %10.3f, B = %10.3f, C = %12.3f, C_hw = %12.3f, Bias = %8.3f\n", 
        float_valueA_hw, 
        float_valueB_hw, 
        float_valueC, 
        float_valueC_hw,
        float_valueC - float_valueC_hw);
}


// =================================================== //
//                       Main
// =================================================== //

int main(int argc, char **argv, char **env) {

    srand((unsigned int)time(NULL));

    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    top = new Vtop{contextp};
    int sim_steps = 20;  // Set the number of simulation steps

    // VCD wave initialization
    tfp = new VerilatedVcdC;            // Initialize VCD pointer
    contextp->traceEverOn(true);        // Enable tracing
    top->trace(tfp, 0);

    // VCD wave setting
    tfp->open("top.vcd");              // VCD file path
    tfp->set_time_unit("ns");           // Set time unit to nanoseconds
    
    reset(10);

    // Start simulation
    for (int i = 0; i < sim_steps; i++) {   // start until sim_step
        elem_init();
        single_cycle();
        elem_display();
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