#include "verilated.h"
//#include "verilated_vcd_c.h"
#include "Vtop.h"
#include <nvboard.h>

//VerilatedContext* contextp = NULL;
//VerilatedVcdC* tfp = NULL;

//static Vtop* top;
static TOP_NAME dut;
void nvboard_bind_all_pins(Vtop* top);
//void step_and_dump_wave(){
 // top->eval();
 // contextp->timeInc(1);
 // tfp->dump(contextp->time());
//}
//void sim_init(){
//  contextp = new VerilatedContext;
 // tfp = new VerilatedVcdC;
  //top = new Vtop;
 // contextp->traceEverOn(true);
 // top->trace(tfp, 0);
 // tfp->open("wave.vcd");
//}

//void sim_exit(){
 // step_and_dump_wave();
//	top->final();
 // tfp->close();
//  delete top;
//	delete tfp;
//	delete contextp;
//	return 0;
//}

int main() {
	nvboard_bind_all_pins(&dut);
	nvboard_init();
while(1)
{
	dut.eval();
	nvboard_update();
}

}
