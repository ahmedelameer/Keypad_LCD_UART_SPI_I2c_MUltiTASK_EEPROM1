/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"ADC.h"
#include"LCD.h"




int main(void){
	unit16 value,temp;
	LCD_init();
	ADC_int();
	LCD_clearScreen();
	LCD_displayString("temp =");
	LCD_gotoRawCol(0,10);
		/* display character 'C' on the screen "Temp =   C" */
	LCD_displayChar('C');
	while(1){
		LCD_gotoRawCol(0,6);

		value=ADC_readChannel(2);
		temp=(150*value*5)/(1.5*1023);

		LCD_IntToStr(temp);




	}






}
