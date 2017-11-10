#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, PIDControl, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, PIDControl, encoderPort, I2C_2)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*+++++++++++++++++++++++++++++++++++++++++++++| Notes |++++++++++++++++++++++++++++++++++++++++++++++
Forward for Target Distance

Robot Model(s): Modified Squarebot

[I/O Port]          [Name]              [Type]                [Description]
Motor Port 2        rightMotor          393 Motor             Right side motor, Reversed
Motor Port 3        leftMotor           393 Motor             Left side motor
I2C_1               rightIEM            Integrated Encoder    Encoder mounted on rightMotor
I2C_2               leftIEM             Integrated Encoder    Encoted mounted on leftMotor
----------------------------------------------------------------------------------------------------*/

task main()
{
  wait1Msec(2000);

  moveMotorTarget(rightMotor, 1800, 63, true);
  moveMotorTarget(leftMotor, 1800, 63, true);

  while(getMotorTargetCompleted(rightMotor) == false || getMotorTargetCompleted(leftMotor) == false)
  {
  }

}
