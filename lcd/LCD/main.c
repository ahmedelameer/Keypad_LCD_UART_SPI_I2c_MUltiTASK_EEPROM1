/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */


#include"LCD.h"



int main(void){
	      LCD_init();

	      LCD_gotoRawCol(0,1);
	      LCD_displayString("ahmed");
	      LCD_gotoRawCol(0,7);

	      _delay_ms(3000);
	     // LCD_clearScreen();
	      LCD_displayStrRowCol(1,0,"thanks tarek <3");



	      while(1){



	      }




}
