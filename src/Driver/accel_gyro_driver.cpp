#include "accel_gyro_driver.h"

namespace driver {

AccelGyro::AccelGyro()
    :   mpu_()   
        {           
        }
    
    void AccelGyro::init() {
        Serial.begin(115200); //initialize serial monitor for debugging
        Wire.begin(21, 22);  //Initialize wire for i2c
        Wire.setClock(400000); //Increase speed
        mpu_.Begin(); //start mpu6500
        mpu_.Config(&Wire, bfs::Mpu6500::I2C_ADDR_PRIM); //configure mpu6500@address 0x68

    }

    void AccelGyro::readData() {
        
    }
}