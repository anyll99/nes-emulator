#ifndef BUS_H
#define BUS_H

#include <stdint.h>

uint8_t bus_read(uint16_t addr);
void bbus_write(uint16_t addr, uint8_t value);

#endif