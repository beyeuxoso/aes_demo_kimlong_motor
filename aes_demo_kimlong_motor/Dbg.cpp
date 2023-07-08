

#include "Dbg.h"
HardwareSerial Serial1(PA10, PA9);

void Dbg_Init()
{
	Dbg.begin(DBG_BAUDRATE);
}