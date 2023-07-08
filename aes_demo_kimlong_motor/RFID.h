
#ifndef __RFID_H_
#define __RFID_H_

#include <Arduino.h>
#include <MFRC522.h>
#include "gpio.h"
#include "Dbg.h"

extern void RC522_Init();
extern String getUID();
#endif