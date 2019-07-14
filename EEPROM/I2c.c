/*
 * I2c.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"I2c.h"



void TWI_Init(void){
	/*status reg is zero for init & prescaler is equal to 0   & clock 400k hz mode*/
	TWSR=0x00;

	TWBR=0x02;
	/*address of my master as if it turns into slave and any master want to call it */
	TWAR = 0b00000010;
	/*Enable I2c*/
	TWCR=(1<<TWEN);

}

void TWI_Start(void){

	/*En & start bit & clear flag*/
	TWCR=(1<<TWEN)|(1<<TWSTA)|(1<<TWINT);

	while(Pin_is_clear(TWCR,TWINT));
}


void TWI_Stop(void){

	/*En & stop bit & clear flag*/
	TWCR=(1<<TWEN)|(1<<TWSTO)|(1<<TWINT);

}



void TWI_Write(unit8 data){
	/*write data */
	TWDR=data ;
	/*Enable & clear flag*/
	TWCR=(1<<TWEN)|(1<<TWINT);
	/* wait until the flag is cleared to make sure that writing is completed*/
	while(Pin_is_clear(TWCR,TWINT));
}



unit8 TWI_Read_with_ACK(void){
	/*Enable & send ack after reading &clear flag*/
	TWCR=(1<<TWEN)|(1<<TWEA)|(1<<TWINT);
	/* wiat unit flag cleared*/
	while(Pin_is_clear(TWCR,TWINT));

	return TWDR;

}


unit8 TWI_Read_with_NACK(void){
	/*Enable & send ack after reading &clear flag*/
	TWCR=(1<<TWEN)|(1<<TWINT);
	/* wiat unit flag cleared*/
	while(Pin_is_clear(TWCR,TWINT));

	return TWDR;
}


unit8 TWI_Get_Status(void){
	unit8 status ;
	status = TWSR & 0xF8;
	return status;
}




