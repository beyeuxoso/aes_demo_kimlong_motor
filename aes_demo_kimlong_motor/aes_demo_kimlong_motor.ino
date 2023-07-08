/*
 Name:		aes_demo_kimlong_motor.ino
 Created:	7/4/2023 3:28:52 PM
 Author:	Công Minh
*/

#include "RFID.h"
#include "Dbg.h";
#include "gpio.h"

void setup() {
    Dbg_Init();
    Dbg_Println("start:");
	RC522_Init();		// Init MFRC522
	delay(4);				// Optional delay. Some board do need more time after init to be ready, see Readme
}


void loop() {
	Dbg_Println(getUID());
	delay(1000);
}


	
