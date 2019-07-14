/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"EEPROM.h"




int main(void)
{
	unit8 data = 0;

	DDRD  = 0x0F;
	PORTD = 0x00;


	/* Init EEPROM */
	EEPROM_Init();

	EEPROM_WriteByte( 0x0211,0x03); /* Write 0x0F in the external EEPROM */
	_delay_ms(10);
	EEPROM_ReadByte( 0x0211,&data);  /* Read 0x0F from the external EEPROM */
	while(1)
	{
		PORTD = data; /* out the read value from the external EEPROM */
	}
	return 0;
}
