#include <Wire.h>
#define SDA 2
#define SCL 3

void setup() {
  Wire.begin(0x101);
}
bool sw = false;
void loop() {
  Wire.beginTransmission(0x100);
  Wire.write('t');
  Wire.endTransmission();
  delay(150);
}
