

#include "main.h"
#include "sapi.h"
#include "sapi_gpio.h"
#include "led.h"
#include "semaforo.h"



int main(void)
{
	boardInit();
	while (TRUE)
	{
		Estado();
	}

}


