#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
void moveRobot(void);
void directions(void);
task main()
{
	moveRobot();
	moveRobot();
	moveRobot();
	moveRobot();
	directions();
}
void moveRobot()
{
	// This makes it go forward
	setMotorSyncTime(leftMotor, rightMotor, 0, 1000, 50);
	sleep(1000);
	// This makes it go right (all power to left)
	setMotorSyncTime(leftMotor, rightMotor, -50, 1000, 36.5);
	sleep(1000);
}
void directions()
{
	// This makes it go forward
	setMotorSyncTime(leftMotor, rightMotor, 0, 1000, 100);
	sleep(1500);
	// This makes it turn around 180 degrees
	setMotorSyncTime(leftMotor, rightMotor, -100, 800, 45);
	sleep(1500);
	// This makes it go forward
	setMotorSyncTime(leftMotor, rightMotor, 0, 2000, 50);
	sleep(3000);
}