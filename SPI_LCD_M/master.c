/*
 * master.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */


#include"SPI.h"


int main(void){

	SPI_initMaster();

	_delay_ms(50);

	SPI_SendString("ahmed#");
	while(1){



	}





}
