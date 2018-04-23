#pragma config(Sensor, in1,    pwrExp,         sensorAnalog)
#pragma config(Sensor, dgtl1,  quadLeft,       sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ledGreen,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl6,  ledYellow,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  ledRed,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  jumper,         sensorTouch)
#pragma config(Sensor, dgtl11, quadRight,      sensorQuadEncoder)
#pragma config(Motor,  port1,           claw,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           leftCLift,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           leftMGLift,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           drvTopLeft,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           drvBottomLeft, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           drvBottomRight, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           drvTopRight,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightMGLift,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rightCLift,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void moveLeft()
{
	if(vexRT[Ch4] < - 40)
	{
		int c = vexRT[Ch4];
		motor[drvTopLeft] = c;
		motor[drvTopRight] = c;
		motor[drvBottomLeft] = c;
		motor[drvBottomRight] = c;
	}
}
void moveRight()
{
	if(vexRT[Ch4] > 40)
	{
		int c = vexRT[Ch4];
		motor[drvTopLeft] = c;
		motor[drvTopRight] = c;
		motor[drvBottomLeft] = c;
		motor[drvBottomRight] = c;
	}
}
void moveUp()
{
	if(vexRT[Ch3] < 40)
	{
		int c = vexRT[Ch3];
		motor[drvTopLeft] = c;
		motor[drvTopRight] = c;
		motor[drvBottomLeft] = c;
		motor[drvBottomRight] = c;
	}
}

void moveBack()
{
	if(vexRT[Ch3] < - 40)
	{
		int c = vexRT[Ch3];
		motor[drvTopLeft] = c;
		motor[drvTopRight] = c;
		motor[drvBottomLeft] = c;
		motor[drvBottomRight] = c;
	}
}

task main()
{
	while(true)
	{
		moveLeft();
		moveRight();
		moveUp();
		moveBack();
	}

}
