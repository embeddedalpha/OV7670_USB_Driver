/*
 * OV7670.c
 *
 *  Created on: Oct 18, 2022
 *      Author: Kunal
 */


#include "OV7670.h"


void OV7670_Init(I2C_TypeDef *port)
{
	OV7670.I2C = I2C1;
	OV7670.mode = I2C_Fast_Mode;
	I2C_Master_Init(OV7670);

	I2C_Master_Write_Register(OV7670, OV7670_address, 0x00, 0x00);
}
