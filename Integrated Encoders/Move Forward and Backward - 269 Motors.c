#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,	 rightIEM,			 sensorQuadEncoderOnI2CPort,		, AutoAssign)
#pragma config(Sensor, I2C_2,	 leftIEM,				 sensorQuadEncoderOnI2CPort,		, AutoAssign)
#pragma config(Motor,	 port1,						rightMotor,		 tmotorVex269, openLoop, reversed, encoder, encoderPort, I2C_1, 1000)
#pragma config(Motor,	 port10,					leftMotor,		 tmotorVex269, openLoop, encoder, encoderPort, I2C_2, 1000)
//*!!Code automatically generated by 'ROBOTC' configuration wizard							 !!*//

/*+++++++++++++++++++++++++++++++++++++++++++++| Notes |++++++++++++++++++++++++++++++++++++++++++++++
Move Forward and Backward - 269 Motors
This program instructs your robot to move forward at half power for 1000 encoder counts, then reverse
at half power for 1000 encoder counts. There is a two second pause at the beginning of the program.

Robot Model(s): Modified Squarebot

[I/O Port]          [Name]              [Type]                [Description]
Motor Port 1        rightMotor          269 Motor             Right side motor, Reversed
Motor Port 10       leftMotor           269 Motor             Left side motor
I2C_1               rightIEM            Integrated Encoder    Encoder mounted on rightMotor
I2C_2               leftIEM             Integrated Encoder    Encoted mounted on leftMotor
----------------------------------------------------------------------------------------------------*/

task main
{
	wait1Msec(2000);

	//Clear the encoders associated with the left and right motors
	nMotorEncoder[rightMotor] = 0;
	nMotorEncoder[leftMotor] = 0;

	//While less than 1000 encoder counts of the right motor
	while(nMotorEncoder[rightMotor] < 1000)
	{
		//Move forward at half power
		motor[rightMotor] = 63;
		motor[leftMotor]	= 63;
	}

  //Clear the encoders associated with the left and right motors
	nMotorEncoder[rightMotor] = 0;
	nMotorEncoder[leftMotor] = 0;

	//While less than 1000 encoder counts of the right motor
	while(nMotorEncoder[rightMotor] > -1000)
	{
		//Move in reverse at half power
		motor[rightMotor] = -63;
		motor[leftMotor]	= -63;
	}
}
