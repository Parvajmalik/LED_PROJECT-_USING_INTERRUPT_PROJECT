/*
 Author: Parvaj malik
 email: parvajmalik93898@gmail.com
 Date: 7/01/2025

*/

#ifndef LED_H_
#define LED_H_

#include "stm32f4xx.h"

#define GPIO_LED		GPIOD   // port is D

#define LED_ORANGE_PIN	13      // GPIO port 13 pin
#define LED_RED_PIN		14      // GPIO port 14 pin
#define LED_BLUE_PIN	15      // GPIO port 15 pin

#define GPIO_LED_CLKEN	3       // GPIOD is connected to AHB1 port in 3 pin

void LedInit(uint32_t pin);
void LedOn(uint32_t pin);
void LedOff(uint32_t pin);
void LedBlink(uint32_t pin, uint32_t delayMs);
void LedToggle(uint32_t pin);

#endif /* LED_H_ */












