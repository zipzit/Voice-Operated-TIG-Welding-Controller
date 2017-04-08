// http://elinux.org/RPi_GPIO_Code_Samples#WiringPi
// note, you have to install modified library for Orange Pi, per
// https://github.com/zhaolei/WiringOP

// gcc tigger.c -o tigger -lwiringPi

/*
* tigger.c:
*      Run one optoisolator device via GPIO pinout
*      Run one digital potentiometer via SPI output from Orange pi
*/

#include <stdio.h>
#include <wiringPi.h>

int main(void)
{
	printf("Orange Pi test\n");

	if (wiringPiSetup() == -1)
		return 1;

	pinMode(0, OUTPUT);         // aka BCM_GPIO pin 17      Actual pin #11
								// This pin feeds optoisolator circuit

	for (;;)
	{
		digitalWrite(0, 1);        // On
		delay(1500);               // mSeconds
		digitalWrite(0, 0);        // Off
		delay(400);
	}
	return 0;
}

// use the wPi column for pin readouts.