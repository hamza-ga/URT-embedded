/*
 * URT_program.c
 *
 *  Created on: Sep 7, 2021
 *      Author: hp
 */
#include"../lib/STD.h"
#include"../lib/bitmath.h"

#include"URT_private.h"

void URT_init(void)
{
	//select mode
	//Asynchronous Operation
	CLR_BIT(UCSRC,UMSEL);//6

	//choose data bits
	SET_BIT(UCSRC,UCSZ1);//2
	SET_BIT(UCSRC,UCSZ0);//1
	CLR_BIT(UCSRB,UCSZ2);//2

	//select parity
	//no parity
	CLR_BIT(UCSRC,UPM0);//4
	CLR_BIT(UCSRC,UPM1);//5

	//select stop bits
	//1 bit stop
	CLR_BIT(UCSRC,USBS);//3

	//select BAUD rate
	//9600 BAUD_RATE
	CLR_BIT(UCSRA,U2X);//1
	UBRRL = 51;

	//enable rx and tx
	SET_BIT(UCSRB,RXEN);//4
	SET_BIT(UCSRB,TXEN);//3


}
