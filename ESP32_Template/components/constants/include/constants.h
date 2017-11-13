/*************************************************************************************************/
// Company: 
// Project: 
// File: constants.h
// Description: Constants file to use them in all the files of the project
// Created on: 
// Last modified date: 
// Version: 
/*************************************************************************************************/

#ifndef COMPONENTS_CONSTANTS_H_
	#define COMPONENTS_CONSTANTS_H_

	/*********************************************************************************************/

	// I/O Pins Defines
    #define PIN_LED                         13

	// Strings constants max length fixed-sizes
	#define STR_MAX_LEN_8                    8
	#define STR_MAX_LEN_16                  16
	#define STR_MAX_LEN_24                  24
	#define STR_MAX_LEN_32                  32
	#define STR_MAX_LEN_64                  64
	#define STR_MAX_LEN_128                128

	/*********************************************************************************************/

	// Strings constants
    const char STR_LINE[STR_MAX_LEN_24] =                 "\n----------------\n";
    const char STR_SYSTEM_START[STR_MAX_LEN_24] =         "\nSystem Start\n";
    const char STR_ARDUINO_CORE_INIT[STR_MAX_LEN_32] =    "\nInitializing Arduino core...\n";
    const char STR_ARDUINO_CORE_INIT_OK[STR_MAX_LEN_32] = "[OK] Arduino core initialized\n";
    const char STR_CREATING_TASKS[STR_MAX_LEN_24] =       "\nCreating tasks...\n";

	/*********************************************************************************************/

#endif
