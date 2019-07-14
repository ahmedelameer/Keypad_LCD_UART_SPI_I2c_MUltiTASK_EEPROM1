/*
 * EEPROM.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"EEPROM.h"



void EEPROM_Init(void){
	 TWI_Init();
}

void EEPROM_WriteByte(unit16 address,unit8 data){

	 TWI_Start();
	 TWI_Write((unit8)(0xA0 | ((address & 0x0700)>>7)));
	 TWI_Write((unit8)address);
	 TWI_Write(data);
	 TWI_Stop();

}
void EEPROM_ReadByte(unit16 address ,unit8* data){

	TWI_Start();
	TWI_Write((unit8)(0xA0 | ((address & 0x0700)>>7)));
	TWI_Write((unit8)address);

	TWI_Start();
	TWI_Write((unit8)(0xA0 | ((address & 0x0700)>>7)|1));

	*data =TWI_Read_with_NACK();
	TWI_Stop();


}
