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

	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_GAIN, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_BLUE, 0x80);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_RED, 0x80);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM1, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_BAVE, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_GbAVE, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_AECHH, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_RAVE, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM2, 0x02);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM3, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM4, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM5, 0x01);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM6, 0x43);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_AECH, 0x40);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_CLKRC, 0x87);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM7, 0x04);



}
