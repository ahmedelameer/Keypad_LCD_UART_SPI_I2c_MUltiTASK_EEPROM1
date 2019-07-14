/*
 * slave.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"SPI.h"
#include"LCD.h"


int main(void){

	char ch[20];
	LCD_init();
	SPI_initSlave();

	SPI_receiveStr(ch);
	LCD_displayString(ch);


	while(1){

	}

}
