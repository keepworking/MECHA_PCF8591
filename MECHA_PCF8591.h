#ifndef LIB_PCF8591
#define LIB_PCF8591

#include "Arduino.h"

#define PCF8591_ADDR 0x48

#define PCF8591_CMD 0x40

class MECHA_PCF8591{
public:

void setAddress(uint8_t addr);

uint8_t analogRead(uint8_t pin);

void analogWrite(uint8_t val);


private:

uint8_t address = PCF8591_ADDR;

};



#endif
