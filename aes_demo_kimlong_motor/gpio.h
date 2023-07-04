
#ifndef __STM32F103_GPIO_H_
#define __STM32F103_GPIO_H_

#include <Arduino.h>
// Communication
// RS485 USART1
#define RS485_TX_EN				PA8
#define RS485_TX				PA9
#define RS485_RX				PA10
// CAN
#define CAN_TX					PA12
#define CAN_RX					PA11
// I2C
#define I2C_SCL					PB6
#define I2C_SDA					PB7
// Debug USART2
#define DEBUG_TX				PA3
#define DEBUG_RX				PA2

// Debug USART2
#define SPI2_CS					PB12
#define SPI2_SCK				PB13	
#define SPI2_MISO				PB14
#define SPI2_MOSI				PB15

// Other GPIO function
// LED INDICATE
#define LED_GREEN				PA13
#define LED_RED					PA14
// PITTONG
#define PITTONG					PA8
// SENSOR COUNTER
#define SENSOR_CNT				PB9
// Led debug
#define LED_DEBUG				PC13


extern void GPIO_Init();
#endif
