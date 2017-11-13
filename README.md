# Eclipse-ESP32-CPP-Arduino-Template
ESP-IDF c++ project template for Eclipse with integrated Arduino core (Blink Example)

Starts a FreeRTOS task to blink an LED wth Arduino HAL functions.

Download the project, import it to Eclipse and change the name of the project.

------------------------------------------------

To update Arduino core to the lastest version:

cd ESP32_Template/components/arduino-esp32

git pull origin master

git submodule update --init --recursive
