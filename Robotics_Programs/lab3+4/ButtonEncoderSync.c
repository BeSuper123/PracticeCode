#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)



int get_distance(int distance);
void drive(int distance, int speed);


task main()
{
	int dist = 0;
	
	displayCenteredBigTextLine(4, "distance = %d", get_distance(dist));
	
}



int get_distance(int distance)
{	

	while (getButtonPress(buttonEnter)  == 0)
	{
		
		
		if (getButtonPress(buttonUp))
		{
			distance = 80;	
			displayCenteredBigTextLine(1, "buttons up");
			drive(distance, 50);
		}
		else if (getButtonPress(buttonDown))
		{
			distance = 60;
			displayCenteredBigTextLine(1, "buttons down");
			drive(distance, 50);
		}
		else if (getButtonPress(buttonLeft))
		{
			distance = 20;
			displayCenteredBigTextLine(1, "buttons left");
			drive(distance, 50);
		}
		else if (getButtonPress(buttonRight))
		{
			distance = 40;
			displayCenteredBigTextLine(1, "buttons right");
			drive(distance, 50);
		}
	
		 
	}	 
		
	return distance;
}


void drive(int distance, int speed)
{
		float wheel_rotations= (distance/15)*360;

		
		setMotorSyncEncoder(leftMotor, rightMotor, 0,wheel_rotations, speed);
		waitUntilMotorStop(leftMotor);
}
