#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch, modeEV3Bump)
#pragma config(Sensor, S3,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Sensor, S4,     Colour,         sensorEV3_Color)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int light, dark, sum, threshold;	

	/*while(true){
			displayBigTextLine(4, "Reflected:  %d", SensorValue[Colour]);
			sleep(20);
	}*/
	
	while (SensorValue[touchSensor] == 0) {
		displayBigTextLine(2, "Read Light Now");
		displayBigTextLine(4, "Val = %d", SensorValue[Colour]);
	}
	light = SensorValue[Colour];
	wait1Msec(1000);
	
	while (SensorValue[touchSensor] == 0) {
		displayBigTextLine(2, "Read Dark Now");
		displayBigTextLine(4, "Val = %d", SensorValue[Colour]);	
	}
	dark = SensorValue[Colour];
	sum = light + dark;
	threshold = sum/2;


	displayBigTextLine(2, "light = %d", light);	
	displayBigTextLine(4, "dark = %d", dark);
	displayBigTextLine(6, "threshold = %d", threshold);
	sleep(5000);

}