/*
 * slave.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"SPI.h"



int main(void){
	unit8 BUTTON_PUSHED;
	SPI_initSlave();
	Direction_output(Direction_C,3);
	Pin_clear(PC,3);
	while(1){
		BUTTON_PUSHED=SPI_receiveByte();
		if(BUTTON_PUSHED){
		PC^=(1<<3);
		}
	}

}
