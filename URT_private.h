/*
 * URT_private.h
 *
 *  Created on: Sep 7, 2021
 *      Author: hp
 */

#ifndef URT_URT_PRIVATE_H_
#define URT_URT_PRIVATE_H_

#define UDR   *((volatile u8*)(0x2C))
#define UCSRA *((volatile u8*)(0x2B))
#define UCSRB *((volatile u8*)(0x2A))
#define UCSRC *((volatile u8*)(0x40))
#define UBRRL *((volatile u8*)(0x29))
#define UBRRH *((volatile u8*)(0x40))


#define RXC  7
#define UDRE 5
#define U2X  1


#define UCSZ2  2
#define TXEN   3
#define RXEN   4

#define URSEL  7
#define UMSEL  6
#define UPM1   5
#define UPM0   4
#define USBS   3
#define UCSZ1  2
#define UCSZ0  1
#define UCPOL  0


#define UNSEE  7


#endif /* URT_URT_PRIVATE_H_ */
