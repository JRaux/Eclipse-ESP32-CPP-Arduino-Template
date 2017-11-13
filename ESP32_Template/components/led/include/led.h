/*************************************************************************************************/
// Company: 
// Project: 
// File: led.h
// Description: Led class to manage digital output pins
// Created on: 
// Last modified date: 
// Version: 
/*************************************************************************************************/

#ifndef COMPONENTS_LED_H_
	#define COMPONENTS_LED_H_

	/*********************************************************************************************/

	#include <Arduino.h>

	/*********************************************************************************************/

	class LED
	{
		public:
			LED(const uint8_t pin, const uint8_t stat_led);
			void on(void);
			void off(void);
			void turn(void);
			int state(void);
			void flash(const unsigned long time);
			void test(const unsigned long time);

		private:
			uint8_t _pin, stat;
			unsigned long t0, t1;
			bool pv;

			void configure(void);
	};

	/*********************************************************************************************/

#endif /* COMPONENTS_LED_H_ */
