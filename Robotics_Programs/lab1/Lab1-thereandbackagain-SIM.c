/*	
	 the robot go forward for 5 seconds, turn 180 degrees and travel back to the exact same location it
	 started at.
*/

task main()
{
	int leftMotor = 1;
	int rightMotor = 2;
	
	//car moving forward for 5 seconds
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(5000);
	
	//car turns 180 degrees 	
	setMotorSpeed(leftMotor, 30);
	setMotorSpeed(rightMotor, -30);
	sleep(1450);
	
	//car moves forward
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(5000);
	
	//car turns 180 degrees 	
	setMotorSpeed(leftMotor, 30);
	setMotorSpeed(rightMotor, -30);
	sleep(1450);
	
	
}