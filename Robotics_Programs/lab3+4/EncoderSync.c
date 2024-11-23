#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)

void drive();
void turn90();

task main()
{
	drive();
	turn90();
}

void drive() {
	setMotorSyncEncoder(leftMotor, rightMotor, 0, 360, 50);
	sleep(1500);
}

void turn90() {
	setMotorSyncEncoder(leftMotor, rightMotor, 50, 360, 50);	
	sleep(1500);
}