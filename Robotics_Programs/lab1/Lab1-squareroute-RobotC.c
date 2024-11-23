#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)

task main()
{
	// Move forward at half power for 2 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50);   //Set the rightMotor (motor6) to half power forward (50)
	sleep(2000);//Wait for 2 seconds before continuing on in the program.
	
	// turn up 90 degree
	setMotorSpeed(leftMotor, 30);	//Set the leftMotor (motor1) to Off
	setMotorSpeed(rightMotor, -30);  	//Set the rightMotor (motor6) to Off
	sleep(725);//Wait for 1 second before continuing on in the program.
	
	// Move forward at half power for 1.5 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power reverse (50)
	setMotorSpeed(rightMotor, 50);	//Set the rightMotor (motor6) to half power reverse (50)
	sleep(2000);//Wait for 1.5 seconds before continuing on in the program.
	
	// Turn left at full power for 0.725 seconds
	setMotorSpeed(leftMotor, 30);	//Set the leftMotor (motor1) to full power forward (30)
	setMotorSpeed(rightMotor, -30);    //Set the rightMotor (motor6) to full power reverse (-30)
	sleep(725);//Wait for 0.725 second before continuing on in the program.
	
	// Move reverse at half power for 2 seconds
	setMotorSpeed(leftMotor, 50);	
	setMotorSpeed(rightMotor, 50);	
	sleep(2000);//Wait for 2 seconds before continuing on in the program.
	
	// Turn 90 degrees left at 30 power for 0.725 seconds
	setMotorSpeed(leftMotor, 30);	
	setMotorSpeed(rightMotor, -30);
	sleep(725);//Wait for .725 second before continuing on in the program.
	
	
	// Move forward at half power for 2 seconds
	setMotorSpeed(leftMotor, 50);	
	setMotorSpeed(rightMotor, 50);	
	sleep(2000);//Wait for 2 seconds before continuing on in the program.
	
	// Turn right 90 degrees at 30 power for 0.725 seconds
	setMotorSpeed(leftMotor, 30);
	setMotorSpeed(rightMotor, -30);
	sleep(725);//Wait for .725 second before continuing on in the program.
}