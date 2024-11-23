#define leftMotor 1
#define rightMotor 2

//function signatures
void get_position(int x, int getX, int y, int getToY, int key);
void drive(int speed);
void Angle_rotation(int y, int Y);
void driveToPosition(int x, int X, int y, int Y, int key);


task main()
{
	//initializing distance to be 0
	int x = 3;
	int y = 1;
	int X = 3;
	int Y = 7;
	
	//calling get_distance() function
	displayCenteredBigTextLine(1, "Position: [%d,%d]", x, y);
	sleep(2000);
	
	// gets the position destination
	get_position(x, X, y, Y, 0);
	
	// stops for 5 seconds
	sleep(5000);
	
	// gets the position destination
	get_position(X, 1, Y, 1, 1);
}


//funtion to get the destination for the robot
void get_position(int x, int getX, int y, int getToY, int key)
{	
	// displays that the robot is heading to the given coordinates
	displayCenteredBigTextLine(1, "Heading to [%d,%d]", getX, getToY);
	sleep(2000);	
	
	driveToPosition(x, getX, y, getToY, key);     //calling funtion to move the robot to the destination
}


//function to drive forward one square
void drive(int speed)
{
	// rotates the robot's wheels 360 degrees
	setMotorSyncEncoder(leftMotor, rightMotor, 0, 320, speed);
	sleep(3000);
	
}


//function to turn an angle of 90 degrees left or right
void Angle_rotation(int y, int Y)
{	
	int Angle, key = 0;
	
	
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
	
	
	
	// checks if y is smaller or equal to the destination number
	if (y < Y) 
	{
		setMotorSync(leftMotor, rightMotor, -100, 10); //start motor 
		displayCenteredTextLine(4,"rotating 90");
		while (abs(Angle) < 90)
		{
			sleep(2);
			Angle=getGyroDegrees(S2);
			displayCenteredBigTextLine(5,"current angle %4d",Angle); //displays the current angle
			
		}
		setMotorSync(leftMotor, rightMotor, 0, 0); // stop the motors
		sleep(500);
	}
	
	// checks if y is bigger than the destination number
	else if (y > Y) 
	{
		setMotorSync(leftMotor, rightMotor, 100, -10); //start motor 
		displayCenteredTextLine(4,"rotating 90");
		while (abs(Angle) < 270)
		{
			sleep(2);
			Angle=getGyroDegrees(S2);
			displayCenteredBigTextLine(5,"current angle %4d",Angle);  //displays the current angle
			
		}
		setMotorSync(leftMotor, rightMotor, 0, 0); // stop the motors
		sleep(500);
	} 
	
	// checks if y is equal to the destination number
	else if (y == Y) 
	{
		setMotorSync(leftMotor, rightMotor, 100, -10); //start motor 
		displayCenteredTextLine(4,"rotating 90");
		while (abs(Angle) < 180)
		{
			sleep(2);
			Angle=getGyroDegrees(S2);
			displayCenteredBigTextLine(5,"current angle %4d",Angle);  //displays the current angle
			
		}
		setMotorSync(leftMotor, rightMotor, 0, 0); // stop the motors
		sleep(500);
	} 
	
	eraseDisplay(); // Clear the display	
}

//function that drives in a square
void driveToPosition(int x, int X, int y, int Y, int key)
{
	int distance = X - x;
	int dist = Y - y;
	
	
	// checks if the robot is facing the right way
	if (key == 1) {
		changes the angle
		Angle_rotation(4, 2);
	}
	
	// loops while the distance is not 0
	while (distance != 0)
	{
		// if the distance is bigger than 0, moves the robot forward
		if (distance > 0) 
		{
			drive(20); //calling drive function to drive straight
			x = x + 1; // increments x by 1
			displayCenteredTextLine(4, "Current Position [%d,%d]", x, y);
			distance--;
		}
		
		// if distance is less than 0, moves the robot forward
		else if (distance < 0) 
		{
			drive(20); //calling drive function to drive straight
			x = x - 1; // decrements x by 1
			displayCenteredTextLine(4, "Current Position [%d,%d]", x, y);
			distance++;
		}
	}
	
	// checks if the robot is facing left or right
	if (key == 1) 
	{
		Angle_rotation(Y, y); //calling function to turn 90 degrees if facing left
	}
	else 
	{
		Angle_rotation(y, Y); //calling function to turn 90 degrees if facing right
	}	
	
	// loops while the distance is not 0
	while (dist != 0)
	{
		// if the distance is bigger than 0, moves the robot forward
		if (dist > 0) 
		{
			drive(20); //calling drive function to drive straight
			y = y + 1;  // increments y by 1
			displayCenteredTextLine(4, "Current Position [%d,%d]", x, y);
			sleep(500);
			dist--;
		}
		
		// if distance is less than 0, moves the robot forward
		else if (dist < 0) 
		{
			drive(20); //calling drive function to drive straight
			y = y - 1;  // decrements x by 1
			displayCenteredTextLine(4, "Current Position [%d,%d]", x, y);
			sleep(500);
			dist++;
		}
	}
	
	Angle_rotation(y, Y); //calling function to turn 90 degrees
	playTone(440,10);
	
	// stops the motors
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);
	sleep(2);
}