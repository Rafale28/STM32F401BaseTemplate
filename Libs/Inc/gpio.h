#ifndef __USER_GPIO_H
#define __USER_GPIO_H

#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA

void GPIO_Init(void);
void userLedToggle(void);

#endif
