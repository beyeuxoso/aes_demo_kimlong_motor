
#ifndef __DEBUG_H_
#define __DEBUG_H_

#include <Arduino.h>
#include <stdint.h>
#define DBG_BAUDRATE	(115200U)
#define Dbg				(Serial1)
#if (1)
#define Dbg_Println(...)						do {Dbg.println(__VA_ARGS__);} while(0);
#define Dbg_Printf(...)							do {Dbg.printf(__VA_ARGS__);} while(0);
#define Dbg_Print(...)							do {Dbg.print(__VA_ARGS__);} while(0);
#else
#define Dbg_Println(...)						do {} while(0)
#define Dbg_Printf(...)							do {} while(0)
#define Dbg_Print(...)							do {} while(0)
#endif

extern void Dbg_Init();
extern uint16_t au16data[16];
#endif