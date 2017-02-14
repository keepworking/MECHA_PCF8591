#include "MECHA_PCF8591.h"

#include <Wire.h>

void MECHA_PCF8591::setAddress(uint8_t addr){
  address |= addr;
}

uint8_t MECHA_PCF8591::analogRead(uint8_t pin){
  uint8_t value = 0;
  Wire.beginTransmission(address);
  Wire.write(PCF8591_CMD | (0x03 & pin));

  Wire.endTransmission();

  Wire.requestFrom(address,2);
  Wire.read();
  value = Wire.read();
  return value;
}

void MECHA_PCF8591::analogWrite(uint8_t val){
  Wire.beginTransmission(address);
  Wire.write(PCF8591_CMD);
  Wire.write(val);
  Wire.endTransmission();
}
