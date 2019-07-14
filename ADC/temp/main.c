/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */

#include"ADC.h"
#include"LCD.h"




int main(void){
	unit32 temp;
	LCD_init();
	ADC_int();
	LCD_clearScreen();
	LCD_displayString("temp =");
	LCD_gotoRawCol(0,10);
		/* display character 'C' on the screen "Temp =   C" */
	LCD_displayChar('C');
	while(1){
		LCD_gotoRawCol(0,6);

		temp=ADC_readChannel(2);
		temp = (temp*150*5)/(1023*1.5);

		LCD_IntToStr(temp);




	}






}
