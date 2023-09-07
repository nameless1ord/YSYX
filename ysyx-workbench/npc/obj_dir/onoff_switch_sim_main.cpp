#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <assert.h>
#include "Vonoff_switch.h"
#include "Vonoff_switch___024root.h"
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 50
vluint64_t sim_time = 0;
int main(int argc, char **argv, char **env) {
	Vonoff_switch *onoff_switch = new Vonoff_switch;
	Verilated::traceEverOn(true);
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	onoff_switch->trace(m_trace,1);
	m_trace->open("waveform.vcd");

		while (sim_time < MAX_SIM_TIME) {
		   int a = rand() & 1;
			 int b = rand() & 1;
			 onoff_switch->a = a;
			 onoff_switch->b = b;
			 onoff_switch->eval();
			 m_trace->dump(sim_time);
			 sim_time++;
			 printf("a = %d, b = %d, f = %d\n", a, b, onoff_switch->f);
			 assert(onoff_switch->f == (a ^ b));
		}
		m_trace->close();
		delete onoff_switch;
		exit(EXIT_SUCCESS);
}
