#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmux41_2.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux41_2* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux41_2;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("mux41_2.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();

  top->y=0b00;  top->x0=0b10;  step_and_dump_wave();
                top->x1=0b01;  step_and_dump_wave();
  top->y=0b01;  top->x1=0b11;  step_and_dump_wave();
                top->x2=0b11;  step_and_dump_wave();
  top->y=0b10;  top->x2=0b10;  step_and_dump_wave();
                top->x3=0b01;  step_and_dump_wave();
  top->y=0b11;  top->x3=0b11;  step_and_dump_wave();
                top->x0=0b01;  step_and_dump_wave();

  sim_exit();
}