/*
 Author: Parvaj malik
 email: parvajmalik93898@gmail.com
 Date: 7/01/2025

*/

#include "led.h"

void LedInit(uint32_t pin) {
	// enable GPIOD clock -- RCC AHB1ENR[GPIO_CLKEN] = 1
	RCC->AHB1ENR |= BV(GPIO_LED_CLKEN);

	// config GPIOD.pin as output -- MODER[2*pin+1:2*pin] - 01
	GPIO_LED->MODER &= ~BV(pin*2+1);
	GPIO_LED->MODER |= BV(pin*2);

	// config GPIOD.pin as pushpull -- OTYPER[pin] - 0
	GPIO_LED->OTYPER &= ~BV(pin);

	// config GPIOD.pin as low-speed -- OSPEEDR[2*pin+1:2*pin] - 00
	GPIO_LED->OSPEEDR &= ~(BV(pin*2+1) | BV(pin*2));

	// config GPIOD.pin with no pullup & pulldown resistor PUPDR[2*pin+1:2*pin] -- 00
	GPIO_LED->PUPDR &= ~(BV(pin*2+1) | BV(pin*2));
}

void LedOn(uint32_t pin) {
	// GPIOD.pin -- ODR[pin] = 1
	GPIO_LED->ODR |= BV(pin);
}

void LedOff(uint32_t pin) {
	// GPIOD.pin -- ODR[pin] = 0
	GPIO_LED->ODR &= ~BV(pin);
}

void LedBlink(uint32_t pin, uint32_t delayMs) {
	LedOn(pin);
	DelayMs(delayMs);
	LedOff(pin);
}

void LedToggle(uint32_t pin) {
	// GPIOD.pin -- ODR[pin] ^= 1      // led toggle is and led blink is same but in the led toggle is the best for the
	GPIO_LED->ODR ^= BV(pin);          // for the not block the code
}



