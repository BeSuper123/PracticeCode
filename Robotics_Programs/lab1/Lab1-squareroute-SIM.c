/*
	 make the robot go in a large square (1 metre per side) returning back to the exact same location
*/
task main()
{
	
	int leftMotor = 1;
	int rightMotor = 2;
	
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
