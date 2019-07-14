/*
 * EEPROM.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#ifndef EEPROM_H_
#define EEPROM_H_

#include"I2c.h"

void EEPROM_Init(void);

void EEPROM_WriteByte(unit16 address,unit8 data);

void EEPROM_ReadByte(unit16 address ,unit8* data);



#endif /* EEPROM_H_ */
