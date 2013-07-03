/*
	Demonstrates use of temperature library.
	Here we print the temperature over serial
	with the Sprite developer kit
*/

#include <temp.h>

int32_t temp;

void setup()
{
	Serial.begin(9600);

	calibrateTemp();
	readTempX10(); // first reading is usually spurious
}

void loop()
{
	temp = readTempX10();
	Serial.print(temp / 10);
	Serial.print('.');
	Serial.print(temp % 10);
	Serial.println(" degrees Celsius");

	delay(1000);
}
