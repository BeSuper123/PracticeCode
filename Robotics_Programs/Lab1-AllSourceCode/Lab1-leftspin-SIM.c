/*
     Make the robot go forward exactly 50cm then spin 360 to the left
*/
task main()
{
	
	int leftMotor = 1;
	int rightMotor = 2;
	
	// Move forward at half power for 1 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50);   //Set the rightMotor (motor6) to half power forward (50)
	sleep(1000);//Wait for 2 seconds before continuing on in the program.
	
	
	// Spin 360 degrees to the left at half power for 2 seconds
	setMotorSpeed(leftMotor, -50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50);   //Set the rightMotor (motor6) to half power forward (50)
	sleep(1650);//Wait for 2 seconds before continuing on in the program.
	
}
