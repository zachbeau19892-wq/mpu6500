#include <Wire.h>
#include <Arduino.h>

#define MPU_ADDR 0x68
#define WHO_AM_I 0x75

void setup() {
  Serial.begin(115200);
  Wire.begin(); // SDA, SCL defaults

  Wire.beginTransmission(MPU_ADDR);
  Wire.write(WHO_AM_I);
  Wire.endTransmission(false);

  Wire.requestFrom(MPU_ADDR, 1);
  uint8_t id = Wire.read();

  Serial.print("WHO_AM_I = 0x");
  Serial.println(id, HEX);
}

void loop() {}