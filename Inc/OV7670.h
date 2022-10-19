/*
 * OV7670.h
 *
 *  Created on: Oct 18, 2022
 *      Author: Kunal
 */

#ifndef OV7670_H_
#define OV7670_H_




#include "main.h"
#include "I2C.h"


I2C_Config OV7670;

#define OV7670_address	0x42

void OV7670_Init(I2C_TypeDef *port);

#endif /* OV7670_H_ */
