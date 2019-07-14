/*
 * master.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"SPI.h"


int main(void){
	unit8 key;
	SPI_initMaster();
	Direction_input(Direction_A,0);
	while(1){
		if(Pin_is_set(PINA,0)){
			 _delay_ms(30);
			 if(Pin_is_set(PINA,0)){
				 key=Pin_is_set(PINA,0);
				 SPI_sendByte(key);
				 while(Pin_is_set(PINA,0));
			}

		}
	}





}
