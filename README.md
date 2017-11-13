# Eclipse-ESP32-CPP-Arduino-Template
ESP-IDF c++ project template for Eclipse with integrated Arduino core (Blink Example)

Starts a FreeRTOS task to blink an LED with Arduino HAL functions.

------------------------------------------------

To install:

git clone https://github.com/JRaux/Eclipse-ESP32-CPP-Arduino-Template

cd Eclipse-ESP32-CPP-Arduino-Template

git submodule update --init --recursive

Change the name of the project (directory and also Makefile and .project files) and import the project into Eclipse.

------------------------------------------------

To update Arduino core to the lastest version:

cd Eclipse-ESP32-CPP-Arduino-Template/ESP32_Template/components/arduino-esp32

git pull origin master
