/*
 * URT_interface.h
 *
 *  Created on: Sep 7, 2021
 *      Author: hp
 */

#ifndef URT_URT_INTERFACE_H_
#define URT_URT_INTERFACE_H_

void URT_init(void);
void URT_sendData(u8 data);
u8 URT_ReceiveData(void);

#endif /* URT_URT_INTERFACE_H_ */
