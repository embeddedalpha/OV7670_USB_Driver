/*
 * OV7670.c
 *
 *  Created on: Oct 18, 2022
 *      Author: Kunal
 */


#include "OV7670.h"

//https://www.youtube.com/watch?v=gp0FxbEmRSw

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
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM8, 0xA7);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_COM9, 0x82);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_HSTART, 0x11);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_HSTOP, 0x61);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_VSTRT, 0x03);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_VSTOP, 0x73);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_PSHFT, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_MVFP, 0x01);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_ADCCTR0, 0x04);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_ADCCTR1, 0x02);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_ADCCTR2, 0x01);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_ADCCTR3, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_AEW, 0x75);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_AEB, 0x63);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_VPT, 0xD4);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_BBIAS, 0x80);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_EXHCL, 0x00);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_HSYST, 0x08);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_HSYEN, 0x30);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_HREF, 0x80);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_CHLF, 0x08);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_ARBLM, 0x11);
	I2C_Master_Write_Register(OV7670, OV7670_address, OV7670_ADC, 0x3f);






}
