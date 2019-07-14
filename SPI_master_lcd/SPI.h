/*
 * SPI.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"INTERFACE.h"
#include"MICRO_setting.h"
#include"UNIT_types.h"



void SPI_initMaster(void);
void SPI_initSlave(void);
void SPI_sendByte(unit8 data);
unit8 SPI_receiveByte(void);
void SPI_SendStr(const unit8 *Str);
void SPI_receiveStr(unit8 *Str);
//void SPI_receiveStr(unit8 *Str,unit8 Str_lenght);




