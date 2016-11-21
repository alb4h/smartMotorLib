#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, encoderPort, I2C_1)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed, encoderPort, I2C_2)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "SmartMotorLib.c"

task main()
{
    // Initialize smart motor library
    SmartMotorsInit();

    // run background tasks
    SmartMotorRun();

    // Tank drive
    while(1) {
      SetMotor( leftMotor,  vexRT[ Ch3 ] );
      SetMotor( rightMotor, vexRT[ Ch4 ] );

      wait1Msec(20);
    }
}
