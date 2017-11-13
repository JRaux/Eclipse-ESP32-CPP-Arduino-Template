/*************************************************************************************************/
// Company: 
// Project: 
// File: led.cpp
// Description: Led class to manage digital output pins
// Created on: 
// Last modified date: 
// Version: 
/*************************************************************************************************/

#include "led.h"

/*************************************************************************************************/

LED::LED(const uint8_t pin, const uint8_t stat_led)
{
    _pin = pin;
    stat = stat_led;
	pv = true;
	configure();
}

/*************************************************************************************************/

void LED::configure(void)
{
    pinMode(_pin, OUTPUT);
    digitalWrite(_pin, stat);
}

/*************************************************************************************************/

void LED::on(void)
{
    if(stat == LOW)
    {
        digitalWrite(_pin, LOW);
        stat = HIGH;
    }
}

void LED::off(void)
{
    if(stat == HIGH)
    {
        digitalWrite(_pin, HIGH);
        stat = LOW;
    }
}

void LED::turn(void)
{
    stat = !stat;
    digitalWrite(_pin, stat);
}

void LED::test(const unsigned long time)
{
    on();
    delay(time/4);
    off();

    delay(time/2);

    on();
    delay(time/4);
    off();
}

void LED::flash(const unsigned long time)
{
    if(pv == true)
    {
        t0 = millis();
        pv = false;
    }

    t1 = millis();
    if(t1 >= t0+time)
    {
        turn();
        t0 = millis();
    }
}

int LED::state(void)
{
    return stat;
}
