#include "main.h"
#include "sapi.h"
#include "stdint.h"

uint16_t tiempo = 0;

int main(void)
{
	boardInit();
	while (1)
	{
		tiempo = tickRead();
		if(tiempo >= 200){
			HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
			tickWrite(0);
		}
	}
}
