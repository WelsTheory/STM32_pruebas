/*
 * led.c
 *
 *  Created on: Nov 4, 2020
 *      Author: wels
 */
#include "sapi.h"
#include "led.h"

void OnLED(gpioMap_led led){

	if(led == 0){
		HAL_GPIO_WritePin(GPIOC, LED1_Pin, GPIO_PIN_SET);
	}
	if(led == 1){
		HAL_GPIO_WritePin(GPIOC, LED2_Pin, GPIO_PIN_SET);
	}
	if(led == 2){
		HAL_GPIO_WritePin(GPIOC, LED3_Pin, GPIO_PIN_SET);
	}
	if(led == 3){
		HAL_GPIO_WritePin(GPIOC, LED4_Pin, GPIO_PIN_SET);
	}
}

void OffLED(gpioMap_led led){

	if(led == 0){
		HAL_GPIO_WritePin(GPIOC, LED1_Pin, GPIO_PIN_RESET);
	}
	if(led == 1){
		HAL_GPIO_WritePin(GPIOC, LED2_Pin, GPIO_PIN_RESET);
	}
	if(led == 2){
		HAL_GPIO_WritePin(GPIOC, LED3_Pin, GPIO_PIN_RESET);
	}
	if(led == 3){
		HAL_GPIO_WritePin(GPIOC, LED4_Pin, GPIO_PIN_RESET);
	}
}
