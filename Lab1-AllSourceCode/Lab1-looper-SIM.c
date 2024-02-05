/*
	Make the robot go in a large circle (1 metre diameter)returning back to the exact
     same location and stopping.
*/
task main()
{
	
	int leftMotor = 1;
	int rightMotor = 2;
	
	// Move forward at half power for 2 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 20);   //Set the rightMotor (motor6) to half power forward (50)
	sleep(5000);//Wait for 2 seconds before continuing on in the program.
	
}