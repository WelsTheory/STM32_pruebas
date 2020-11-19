/*
 * sapi_gpio.c
 *
 *  Created on: Nov 3, 2020
 *      Author: Wels
 */

#include "sapi.h"

bool_t val = 0, i = 0, seq = 0;
uint32_t retardo = 750;

/*
 * FUNCIÓN ENCENDER LED
 * */
bool_t encenderLED(gpioMap_t led){

	apagarLeds();
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
	return TRUE;
}


/*
 * FUNCIÓN APAGAR LEDS
 * */
void apagarLeds(){
	HAL_GPIO_WritePin(GPIOC, LED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, LED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, LED3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, LED4_Pin, GPIO_PIN_RESET);
}


/*
 * FUNCIÓN LEER TECLAS
 * */



/*
 * FUNCIÓN ACTIVAR SECUENCIA
 * */
void activarSecuencia(){

	leerTeclas();
	if (seq == 0){
	  if(i == 3){
		  i = 0;
	  }
	  else{
		  i++;
	  }
	}
	if (seq == 1){
	  if(i == 0){
		  i = 3;
	  }
	  else{
		  i--;
	  }
	}
	if(i == 0){
		encenderLED(LED1);
		HAL_Delay(retardo);
	}
	if(i == 1){
		encenderLED(LED2);
		HAL_Delay(retardo);
	}
	if(i == 2){
		encenderLED(LED3);
		HAL_Delay(retardo);
	}
	if(i == 3){
		encenderLED(LED4);
		HAL_Delay(retardo);
	}
}

