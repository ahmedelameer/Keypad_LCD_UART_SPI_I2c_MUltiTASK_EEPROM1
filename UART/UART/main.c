/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */
#include"uart.h"
#include"keypad.h"




int main(void){
    unit8 num;
	UART_init();
	Direction_C=0xFF;
	PC=0;
	while(1){
		num=UART_recieveByte();
		PC=(1<<num);

	}
}

