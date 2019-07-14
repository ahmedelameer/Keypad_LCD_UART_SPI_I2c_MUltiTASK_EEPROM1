/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"ADC.h"
#include"LCD.h"


extern unit16 g_ADCVALUE;

int main(void){

	LCD_init();

	ADC_int();
	LCD_clearScreen();
	LCD_displayString("ADC value ");
	while(1){
		LCD_gotoRawCol(0,11);

		ADC_readChannel(0);

		LCD_IntToStr(g_ADCVALUE);




	}






}
