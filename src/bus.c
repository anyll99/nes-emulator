#include "bus.h"

static uint8_t memory[65536];

uint8_t bus_read(uint16_t addr) {
    return memory[addr];
}

void bus_write(uint16_t addr, uint8_t value) {
    memory[addr] = value;
}