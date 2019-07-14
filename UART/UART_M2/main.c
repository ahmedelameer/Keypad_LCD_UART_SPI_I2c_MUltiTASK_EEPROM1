/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: Mohamed ELameer
 */


#include"uart.h"
#include"keypad.h"




int main(void){
    unit8 num;
	UART_init();
	while(1){
		num=KeyPad_getPressedKey();
		 if((num >= 0) && (num <= 7))
				 {
					 UART_sendByte(num);
				 }
				 _delay_ms(500); //new button every 500ms
}
}
