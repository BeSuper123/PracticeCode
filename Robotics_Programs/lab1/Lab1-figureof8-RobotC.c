#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)

task main()
{
	//way one of doing it:
	
	// Move in a circle at half power for 4.5 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 20); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(5000);//Wait for 4.5 seconds before continuing on in the program.
	
	// Move in a circle at half power for 4.5 seconds
	setMotorSpeed(leftMotor, 20);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(5000);//Wait for 4.5 seconds before continuing on in the program.
	
	
/*	

//other way of doing it:

	// Move forward at half power for 2.5 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 20); 	//Set the rightMotor (motor6) to some power forward (20)
	sleep(2500);			//Wait for 2.5 seconds before continuing on in the program.
	
	// Move reverse at half power for 3 seconds
	setMotorSpeed(leftMotor, 20);	//Set the leftMotor (motor1) to some power reverse (20)
	setMotorSpeed(rightMotor, 50);	//Set the rightMotor (motor6) to half power reverse (50)
	sleep(3000);			//Wait for 3 seconds before continuing on in the program.
	
	
	// Move reverse at half power for 2 seconds
	setMotorSpeed(leftMotor, 20);	//Set the leftMotor (motor1) to some power reverse (20)
	setMotorSpeed(rightMotor, 50);	//Set the rightMotor (motor6) to half power reverse (50)
	sleep(2000);			//Wait for 2 seconds before continuing on in the program.
	
	// Move forward at half power for 2.5 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 20); 	//Set the rightMotor (motor6) to some power forward (20)
	sleep(2500);			//Wait for 2.5 seconds before continuing on in the program.
	
*/	
}