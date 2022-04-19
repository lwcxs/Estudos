#include <Wire.h>
#define SDA 2
#define SCL 3

void setup() {
  Serial.begin(9600);
  Wire.begin(0x100);
  Wire.onReceive(&Receber);
}

void loop() {
  delay(1);
}

void Receber(int qnt) {
  while(Wire.available()>0 ) { 
    Serial.print(Wire.read());
  }
}
