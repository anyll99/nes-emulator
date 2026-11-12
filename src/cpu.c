#include "cpu.h"
#include "bus.h"
#include <stdio.h>

void cpu_power_on(CPU *cpu) {
    cpu->a = 0;
    cpu->x = 0;
    cpu->y = 0;   
    cpu->pc = (bus_read(0xFFFD) << 8) | bus_read(0xFFFC);
    cpu->sp = 0xFD;
    cpu->p = 0x24;
    cpu->cycles = 7;
}

void cpu_step(CPU *cpu) {
    uint8_t opcode = bus_read(cpu->pc++);
    
    switch (opcode) {
        default:
            printf("Unknown opcode %02X at %04X\n", opcode, cpu->pc - 1);
            break;
    }
}