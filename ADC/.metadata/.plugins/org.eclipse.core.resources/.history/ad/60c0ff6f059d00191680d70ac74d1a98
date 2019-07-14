/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"ADC.h"
#include"LCD.h"




int main(void){
	unit16 value;
	LCD_init();
	ADC_int();
	LCD_clearScreen();
	LCD_displayString("ADC value ");
	while(1){
		LCD_gotoRawCol(0,11);

		value=ADC_readChannel(0);

		LCD_IntToStr(value);




	}






}
