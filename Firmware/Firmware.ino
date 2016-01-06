#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	servo.attach(SERVO_SIGNAL_PIN);
	Serial.println("start");
}

void loop() 
{	
	int sample = potentiometer.read();
	Serial.println(sample);
	servo.write(map(sample,0,1024,0,180));
}
