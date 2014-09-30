#pragma config(Motor,  port2,           frontRightMotor, tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port3,           backRightMotor, tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port4,           frontLeftMotor, tmotorNormal, openLoop)
#pragma config(Motor,  port5,           backLeftMotor, tmotorNormal, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*----------------------------------------------------------------------------------------------------*\
|*                                   - Moving Reverse with 4 Motors -                                 *|
|*                                      ROBOTC on VEX 2.0 CORTEX                                      *|
|*                                                                                                    *|
|*  This program instructs your robot to move reverse at full power for three seconds.  There is a    *|
|*  two second pause at the beginning of the program.                                                 *|
|*                                                                                                    *|
|*                                        ROBOT CONFIGURATION                                         *|
|*    NOTES:                                                                                          *|
|*    1)  Reversing both right-side motors (ports 2 and 3) in the "Motors and Sensors Setup" is       *|
|*        needed with the "VEX Tumbler" model, but may not be needed for all robot configurations.    *|
|*    2)  Power levels that can be assigned to a motor port range from -127 (full reverse) to         *|
|*        127 (full forward).                                                                         *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]          [Name]                [Type]                [Description]                   *|
|*    Motor Port 2        frontRightMotor       VEX 3-wire module     Right side motor                *|
|*    Motor Port 3        backRightMotor        VEX 3-wire module     Right side motor                *|
|*    Motor Port 4        frontLefttMotor       VEX 3-wire module     Left side motor                 *|
|*    Motor Port 5        backLeftMotor         VEX 3-wire module     Left side motor                 *|
\*----------------------------------------------------------------------------------------------------*/


//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
	wait1Msec(2000);						// Robot waits for 2000 milliseconds before executing program

	// Move backward at full power for 3 seconds
	motor[frontRightMotor] = -127;		  // Motor on port2 is run at full (-127) power reverse
	motor[backRightMotor]  = -127;		  // Motor on port3 is run at full (-127) power reverse
	motor[frontLeftMotor] = -127;		    // Motor on port4 is run at full (-127) power reverse
	motor[backLeftMotor]  = -127;		    // Motor on port5 is run at full (-127) power reverse
	wait1Msec(3000);			              // Robot runs previous code for 3000 milliseconds before moving on
}												              // Program ends, and the robot stops
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
