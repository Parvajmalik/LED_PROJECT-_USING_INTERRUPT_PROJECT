/*
 Author: Parvaj malik
 email: parvajmalik93898@gmail.com
 Date: 7/01/2025

*/

#include "switch_intr.h"
#include "led.h"

void SwitchInit(void) {
	// Enable GPIO clock
    RCC->AHB1ENR |= BV(SWITCH_GPIO_CLKEN);

	// Set gpio mode as input
    GPIOA->MODER &= ~(BV(SWITCH_PIN*2+1) | BV(SWITCH_PIN*2));

	// set no pull-up pull-down registers
    GPIOA->PUPDR &= ~(BV(SWITCH_PIN*2+1) | BV(SWITCH_PIN*2));
    // for switch use as a externel interrupt
	// enable falling edge detection (in FTSR)  in switch remove the bouncing problem then use the FTSR
    EXTI->FTSR |= BV(SWITCH_EXTI);

	// enable (unmask) exti interrupt (in IMR)
    EXTI->IMR |= BV(SWITCH_EXTI);     // set 1 to the pin

	// select exti interrupt (in SYSCFG->EXTICRx) -- EXTI0 --> EXTICR1[3:0] = 0000
    SYSCFG->EXTICR[0] &= ~(BV(3)|BV(2)|BV(1)|BV(0));

	// enable exti in NVIC ( NVIC_EnableIRQ()) using  the startup file
    NVIC_EnableIRQ(EXTI0_IRQn); // EXTI0_IRQn
}

// Global SwitchExtiFlag
volatile uint32_t SwitchExtiFlag = 0;

// it overrides the WEAK function written in startup.S
void EXTI0_IRQHandler(void) {

	EXTI->PR |= BV(SWITCH_EXTI);  //PR = pending reqest interrupt
	// interrupt handling logic

	SwitchExtiFlag = 1;

}









