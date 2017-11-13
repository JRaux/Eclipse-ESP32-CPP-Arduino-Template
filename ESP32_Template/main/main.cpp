/*************************************************************************************************/
// Company: 
// Project:
// File: main.cpp
// Description: main project file
// Created on: 
// Last modified date: 
// Version: 
/*************************************************************************************************/

// Include standard c/c++ libs
#include <stdio.h>

// Include SDK and Arduino libs
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "Arduino.h"

// Include custom libs
#include "constants.h"
#include "global.h"
#include "led.h"

/*************************************************************************************************/

// Tasks Prototypes
void blink_task(void *pvParameter);

/*************************************************************************************************/

// Main Function
extern "C" void app_main(void)
{
	printf(STR_LINE);
	printf(STR_SYSTEM_START);

	printf(STR_ARDUINO_CORE_INIT);
	initArduino();
	printf(STR_ARDUINO_CORE_INIT_OK);

	printf(STR_CREATING_TASKS);
	xTaskCreate(&blink_task, "blink_task", configMINIMAL_STACK_SIZE, NULL, 5, NULL);
}

/*************************************************************************************************/

// TASKS

// Blink Task
void blink_task(void *pvParameter)
{
	printf("[OK] Blink Task initialized\n");

	printf("Blink Task: Configuring LED Pin\n");
	LED blink_led(PIN_LED, LOW);
	printf("[OK] Blink Task: LED Pin configured to digital output\n");

	while(1)
	{
		printf("Blink Task: LED Pin on\n");
		blink_led.on();
		delay(1000);

		printf("Blink Task: LED Pin off\n");
		blink_led.off();
		delay(1000);
	}
}
