#include <Wire.h>
#include <MECHA_PCF8591.h>

MECHA_PCF8591 pcf;

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 110; i < 150;i++){
    pcf.analogWrite(i);
    delay(10);
  }
  for(int i = 150; i > 110;i--){
    pcf.analogWrite(i);
    delay(10);
  }  
}
