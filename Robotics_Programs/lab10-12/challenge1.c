#define leftMotor 1
#define rightMotor 2

//function signatures
void get_position(int x, int y);
void drive(int speed);
int Angle_rotation(int y, int Y);
int getDistance();
void driveToPosition(int x, int X, int y, int Y, int key);


task main()
{
	//initializing distance to be 0
	int x;
	int y;
	
	// asks the user to enter a distance for x
	displayCenteredBigTextLine(1, "Choose X Axis");
	x = getDistance(); // finds the number for x
	sleep(1000); // stops for 1 seconds
	
	// asks the user to enter a distance for y
	displayCenteredBigTextLine(1, "Choose Y Axis");
	y = getDistance(); // finds the number for y
	
	//calling get_distance() function
	displayCenteredBigTextLine(1, "Position: [%d,%d]", x, y);
	sleep(2000);
	
	// gets the position destination
	get_position(x,y);
}


//funtion to get the destination for the robot
void get_position(int x, int y)
{	
	int getX = 5;
	int getToY = 5;
	int temp = x;
	int key = 0;
	
	
	// displays that the robot is heading to the given coordinates
	displayCenteredBigTextLine(1, "Heading to [%d,%d]", getX, getToY);
	sleep(2000);
	
	// checks if x is bigger than the destination number
	if (x > getX) 
	{
		// to turn the robot left
		key = Angle_rotation(x, temp);
	} 
	
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
int Angle_rotation(int y, int Y)
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
		
		key = 1; // makes a key to let the program know the robot is facing left
	} 
	
	eraseDisplay(); // Clear the display
	return key;
	
}


//function that drives in a square
void driveToPosition(int x, int X, int y, int Y, int key)
{
	int distance = X - x;
	int dist = Y - y;
	
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
	playTone(700,15);
	
	// stops the motors
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);
	sleep(2);
}

// finds what the distance for an axis is
int getDistance() 
{
	int distance;
	
	
	// loops until a button is pressed
	while (getButtonPress(buttonEnter)  == 0)
	{
		// checks which button is pressed and displays the coordinate number
		if (getButtonPress(buttonUp))
		{
			displayCenteredBigTextLine(1, "1 Picked");
			distance = 1;	// sets the distance to 1
			break;
		}
		else if (getButtonPress(buttonDown))
		{
			displayCenteredBigTextLine(1, "5 Picked");
			distance = 5;	// sets the distance to 5
			break;
			
		}
		else if (getButtonPress(buttonLeft))
		{
			displayCenteredBigTextLine(1, "6 Picked");
			distance = 6; // sets the distance to 6
			break;
			
		}
		else if (getButtonPress(buttonRight))
		{
			displayCenteredBigTextLine(1, "7 Picked");
			distance = 7; // sets the distance to 7
			break;
		}
		
		sleep(1000); // stops for 1 second
		
	}	 
	
	// returns the distance for the axis
	return distance;
	
}