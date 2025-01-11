/*
 Author: Parvaj malik
 email: parvajmalik93898@gmail.com
 Date: 7/01/2025

*/

#ifndef SWITCH_INTR_H_
#define SWITCH_INTR_H_

#include "stm32f4xx.h"

#define GPIO_SWITCH				GPIOA    // GPIO port A is connected to the switch acoording the User mannual
#define SWITCH_PIN				0        // pin is PA0
#define SWITCH_GPIO_CLKEN		0        // and AHB1 pin is 0

#define SWITCH_EXTI				0

void SwitchInit(void);
void EXTI0_IRQHandler(void);

extern volatile uint32_t SwitchExtiFlag;


#endif /* SWITCH_INTR_H_ */
