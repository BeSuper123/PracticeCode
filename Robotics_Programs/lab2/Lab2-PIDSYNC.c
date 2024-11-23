#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)

void moveRobot(void);
void randomDirection(void);



task main()
{
	moveRobot();
	randomDirection();
}

void moveRobot()
{
	setMotorSyncTime(leftMotor, rightMotor, 0, 1000, 50);
	sleep(1500);

}

void randomDirection()
{
		int randomNumber;

		srand(nSysTime);
		
		randomNumber = random(2);


		if(randomNumber == 1){
			// This makes it go left (all power to right)
			setMotorSyncTime(leftMotor, rightMotor, -50, 1000, 39);
			sleep(1500);
	} else {
			// This makes it go right (all power to left)
			setMotorSyncTime(leftMotor, rightMotor, 50, 1000, 39);
			sleep(1500);
	}
}