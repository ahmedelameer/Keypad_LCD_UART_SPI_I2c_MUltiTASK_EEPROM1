/*
 * master.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"SPI.h"
#include"LCD.h"



int main(void){
	//unit8 GET_READY=0;
	const unit8 *Str ="ahmed";
	SPI_initMaster();
	//GET_READY=SPI_receiveByte();
	_delay_ms(50);
	//while(!(GET_READY));
	SPI_sendString(Str);

	while(1){

	}





}
