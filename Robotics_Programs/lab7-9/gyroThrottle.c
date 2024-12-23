#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_Rate)
#pragma config(Motor,  motorA,          gyroMotor,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int p;
	
	// erases the display on the robot and resets the gyro
	eraseDisplay();
	resetGyro(S2);
		
	// loops while true
	while(true)
	{
		p = 50; // since 50 is the middle, it is set to 0
		
		// displays what the current angle is
		displayCenteredTextLine(2, "Angle %d", getGyroDegrees(S2));
		
		// sets the motor speeds based on what the gyro degrees are
		setMotorSpeed(leftMotor, p+(getGyroDegrees(S2)));
		setMotorSpeed(rightMotor, p+(getGyroDegrees(S2)));
	
		// checks if the angle is bigger than 50 or less than -50
		if (getGyroDegrees(S2) >= 50) 
		{
			setMotorSpeed(gyroMotor, -5);
		}
		
		else if (getGyroDegrees(S2) <= -50) 
		{
			setMotorSpeed(gyroMotor, 5);
		}
		
	}

}