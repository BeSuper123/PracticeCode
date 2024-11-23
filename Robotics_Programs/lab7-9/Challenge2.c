#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch, modeEV3Bump)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro)
#pragma config(Sensor, S3,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Sensor, S4,     lightSensor,    sensorEV3_Color)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// function assignments
void moving();
void changeLocation();
void ultrason();
void ultrasonMoving();
void reset();
void Angle_rotation();


task main()
{
	// functions to move the robot through obstacles
	moving();
	changeLocation();
	ultrason();
	changeLocation();
	ultrasonMoving();
	changeLocation();

	// moves the robot forward for 1 second
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(1000);
}

// moves the robot forward until the touch sensor is pressed
void moving() {
	SensorType[S1] = sensorEV3_Touch;
	while(SensorValue(touchSensor) == 0) {
		setMotorSpeed(leftMotor, 50);
		setMotorSpeed(rightMotor, 50);
	}
}

// checks to see if an object is detected close by
void ultrason() {
	SensorType[S4] = sensorEV3_Ultrasonic;
	while(SensorValue(sonarSensor) > 10) {
		setMotorSpeed(leftMotor, 50);
		setMotorSpeed(rightMotor, 50);
	}
}

// checks to see if something is detected close by or if something is touched
void ultrasonMoving() {
	SensorType[S1] = sensorEV3_Touch;
	SensorType[S3] = sensorEV3_Ultrasonic;
	while(SensorValue(touchSensor) == 0 && SensorValue(sonarSensor) > 10) {
		setMotorSpeed(leftMotor, 50);
		setMotorSpeed(rightMotor, 50);
	}
}

// moves the robot and turns it 90 degrees to fix it
void changeLocation() {
		reset();
		setMotorSpeed(leftMotor, -25);
		setMotorSpeed(rightMotor, -25);
		sleep(1500);

		// calls the angle function to turn the robot
		Angle_rotation();
}

// resets the motors
void reset() {
	resetMotorEncoder(leftMotor);
	resetMotorEncoder(rightMotor);
}

//function to turn an angle of 90 degrees
void Angle_rotation()
{
	int Angle;

	eraseDisplay(); // Clear the display
	displayCenteredTextLine(2,"gyro resetting");
	SensorType[S2] = sensorEV3_Gyro; // set sensor to port 2
	sleep(500);
	resetGyro(S2); //reset Gyro to get to 0 degrees
	sleep(3);
	displayCenteredTextLine(2,"Angle =%d",getGyroDegrees(S2));
	sleep(500);


	// Turn Robot 90 degrees around, then stop:
	eraseDisplay();
	Angle=getGyroDegrees(S2); // Get the starting angle which should be 0
	displayCenteredTextLine(2,"Angle =%d",Angle);

	setMotorSync(leftMotor, rightMotor, -100, 10); //start motor to
	displayCenteredTextLine(4,"rotating 90");

	// turns the robot until it reaches 90 degrees
	while (abs(Angle) < 84)
	{
		sleep(2);
		Angle=getGyroDegrees(S2);
		displayCenteredBigTextLine(5,"current angle %4d",Angle);

	}
	setMotorSync(leftMotor, rightMotor, 0, 0); // stop the motors
	sleep(500);

}