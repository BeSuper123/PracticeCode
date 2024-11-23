#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)

void drive();
void turn90Left();
void turn90Right();
void squarePerimiter();
void fullAndQuarter();
int calculations(int distance);
int calcTurning(int distance);

task main()
{
	squarePerimiter();
	fullAndQuarter();
}

int calculations(int distance) {
	// 360 rotations per 30cm
	int speed;
	int rotation = 360;


	speed = (distance/15)*rotation;

	return speed;
}

int calcTurning(int distance) {
	// 360 rotations per 30cm
	int speed;
	int rotation = 360;


	speed = ((distance/15)*rotation)+10;

	return speed;
}

void drive() {
	int speed = calculations(60);
	setMotorSyncEncoder(leftMotor, rightMotor, 0, speed, 50);
	sleep(3500);
}

void turn90Left() {
	int speed = calcTurning(15);
	setMotorSyncEncoder(leftMotor, rightMotor, 50, speed, 50);
	sleep(1500);

}

void turn90Right() {
	int speed = calcTurning(15);
	setMotorSyncEncoder(leftMotor, rightMotor, -50, speed, 50);
	sleep(1500);

}

void squarePerimiter() {
	int randomNumber, i = 0;

	srand(nSysTime);

	randomNumber = random(2);


	if(randomNumber == 1){
		while (i < 4) {
			drive();

			turn90Left();
			i++;
		}
	}
	else {
		while (i < 4) {
			drive();

			turn90Right();
			i++;
		}
	}

}

void fullAndQuarter()
{
		setMotorSyncEncoder(leftMotor, rightMotor, 0, 1200, 100);
		sleep(2000);

		setMotorSyncEncoder(leftMotor, rightMotor, 50, 720, 100);
		sleep(2000);

		setMotorSyncEncoder(leftMotor, rightMotor, 0, 1200, 25);
		sleep(5000);

		setMotorSyncEncoder(leftMotor, rightMotor, 50, 750, 25);
		sleep(4000);

}
