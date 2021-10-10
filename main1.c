/*
/*
 * main.c
 *
 *  Created on: Aug 15, 2021
 *      Author: connect
 */

#include <stdlib.h>
#include  "STD_TYPES.h"
#include  "BIT_MATH.h"
#include "WatchDog_interface.h"
#include "DIO_interface.h"
#include <avr/delay.h>


int main()
{

VidDioInit();
WDT_vidInit();
WDT_vidEnableWDT();
DIO_VidSetPinValue(16,1);
_delay_ms(500);
DIO_VidSetPinValue(16,0);
WDT_vidEnableWDT();

		while(1)
		{


		}
		return 0;
}

