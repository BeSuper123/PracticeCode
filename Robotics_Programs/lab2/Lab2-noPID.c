#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
void turn90degreesLeft(void);
void turn90degreesRight(void);
void sleeptime();
void goForward1second(void);
void reverse1second(void);
void swingRight90degrees(void);
void swingLeft90degrees(void);
task main()
{
	turn90degreesLeft();
	sleeptime();
	turn90degreesRight();
	sleeptime();
	goForward1second();
	sleeptime();
	reverse1second();
	sleeptime();
	swingLeft90degrees();
	sleeptime();
	swingRight90degrees();
}
//moves 90 degrees to Left
void turn90degreesLeft()
{
	setMotorSpeed(rightMotor, 30);
	setMotorSpeed(leftMotor, -10);
	sleep(900);
}
//sleep
void sleeptime()
{
	setMotorSpeed(rightMotor, 0);
	setMotorSpeed(leftMotor, 0);
	sleep(2000);
}
//moves 90 degrees to Right
void turn90degreesRight()
{
	setMotorSpeed(leftMotor, 30);
	setMotorSpeed(rightMotor, -10);
	sleep(900);
}
void goForward1second()
{
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(1000);
}
void reverse1second()
{
	setMotorSpeed(leftMotor, -50);
	setMotorSpeed(rightMotor, -50);
	sleep(1000);
}
void swingRight90degrees()
{
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 20);
	sleep(1350);
}
void swingLeft90degrees()
{
	setMotorSpeed(leftMotor, 20);
	setMotorSpeed(rightMotor, 50);
	sleep(1350);
}