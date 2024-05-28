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


vluint16_t f32tof16(float value) {
    uint32_t f32 = *(uint32_t*)&value;
    vluint16_t sign = (f32 >> 16) & 0x8000;
    int16_t exponent = ((f32 >> 23) & 0xFF) - 127 + 15;
    vluint16_t fraction = (f32 >> 13) & 0x3FF;
    
    if (exponent <= 0) {
        return sign;
    } else if (exponent >= 31) {
        return sign | 0x7C00;
    }
    
    return sign | (exponent << 10) | fraction;
}

float f16tof32(vluint16_t value) {
    int sign = (value >> 15) & 0x1;
    int exponent = (value >> 10) & 0x1F;
    int fraction = value & 0x3FF;

    if (exponent == 0) {
        if (fraction == 0) {
            return (sign == 0) ? 0.0 : -0.0;
        } else {
            float result = pow(-1, sign) * pow(2, -14) * (fraction / 1024.0);
            return result;
        }
    } else if (exponent == 31) {
        if (fraction == 0) {
            return (sign == 0) ? INFINITY : -INFINITY;
        } else {
            return NAN;
        }
    } else {
        float result = pow(-1, sign) * pow(2, exponent - 15) * (1 + fraction / 1024.0);
        return result;
    }
}


void reset(int n) {
    top->rst = 1;
    while (n-- > 0) single_cycle();
    top->rst = 0;
}



// =================================================== //
//                       Main
// =================================================== //

int main(int argc, char **argv, char **env) {

    srand(time(0));

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
    
    reset(10);
    

    float float_valueA = 3.15;
    float float_valueB = 6.23;
    top->A = *reinterpret_cast<uint32_t*>(&float_valueA);
    top->B = *reinterpret_cast<uint32_t*>(&float_valueB);
    // Start simulation
    for (int i = 0; i < sim_steps; i++) {   // start until sim_step
        single_cycle();
    }
    float float_valueA_hw = *reinterpret_cast<float*>(&top->A);
    float float_valueB_hw = *reinterpret_cast<float*>(&top->B);
    float float_valueC_hw = *reinterpret_cast<float*>(&top->C);
    printf("A = %f, B = %f, C = %f\n", float_valueA_hw, float_valueB_hw, float_valueC_hw);

    // VCD wave dump
    tfp->close();
    // End of simulation
    top->final();

    delete tfp;
    delete top; 
    delete contextp;

    return 0;
}