#include <Wire.h>
#include <MECHA_PCF8591.h>

MECHA_PCF8591 pcf;

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Serial.print(pcf.analogRead(0));
  Serial.print(" ");
  Serial.print(pcf.analogRead(1));
  Serial.print(" ");
  Serial.print(pcf.analogRead(2));
  Serial.print(" ");
  Serial.print(pcf.analogRead(3));
  Serial.println();
  delay(100);
}
