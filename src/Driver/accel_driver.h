#include <Arduino.h>

#include "mpu6500.h"

namespace driver {

class AccelGyro {
public:
    AccelGyro(TwoWire &i2c, uint8_t I2CAddress );

private:


};
}