#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorNormal, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// This program is a very simple example of writing functions to
// move forward, backward, rightTurn, and leftTurn.

void forward(int forwardTime)
{
  motor[rightMotor] = 75;
  motor[leftMotor]  = 75;
  wait1Msec(forwardTime);

  motor[rightMotor] = 0;
  motor[leftMotor]  = 0;
  wait1Msec(1000);
}
void backward(int backwardTime)
{
  motor[rightMotor] = -75;
  motor[leftMotor]  = -75;
  wait1Msec(backwardTime);

  motor[rightMotor] = 0;
  motor[leftMotor]  = 0;
  wait1Msec(1000);
}
void rightTurn(int rightTurnTime)
{
  motor[rightMotor] = -75;
  motor[leftMotor]  = 75;
  wait1Msec(rightTurnTime);

  motor[rightMotor] = 0;
  motor[leftMotor]  = 0;
  wait1Msec(1000);
}

void leftTurn(int leftTurnTime)
{
  motor[rightMotor] = 75;
  motor[leftMotor]  = -75;
  wait1Msec(leftTurnTime);

  motor[rightMotor] = 0;
  motor[leftMotor]  = 0;
  wait1Msec(1000);
}

task main()
{
  forward(1000);   //change the value of 1000 to change how long the
  backward(1000);  //robot moves forward, backward, or turns
  rightTurn(1000);
  leftTurn(1000);
}
