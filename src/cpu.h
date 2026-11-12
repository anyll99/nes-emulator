#ifndef CPU_H
#define CPU_H

#include <stdint.h>

typedef struct {
    uint8_t a;
    uint8_t x;
    uint8_t y;
    uint8_t sp;
    uint8_t p;
    uint16_t pc;
    uint64_t cycles;
} CPU;


void cpu_power_on(CPU *cpu);
void cpu_step(CPU *cpu);
#endif