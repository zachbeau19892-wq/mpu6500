#pragma once

#include <Arduino.h>
#include <Wire.h>
#include "mpu6500.h"

namespace driver {

class AccelGyro {
public:
    AccelGyro();

    void init(); 
    void readData();

private:
    
    bfs::Mpu6500 mpu_;
    
};
}