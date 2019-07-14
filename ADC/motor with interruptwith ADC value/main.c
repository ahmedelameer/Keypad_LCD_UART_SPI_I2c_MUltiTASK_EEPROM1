/*
 * main.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#include"project2.h"

int main(void){
	unit8 duty;
	unit8 flag=0;
	DDRD|=(1<<0)|(1<<1);
	PORTD&=0xFC;
	Pin_output(PD,PD0);
	INT0_init();
	LCD_init();
	ADC_int();
	LCD_clearScreen();
	LCD_displayString("ADC value ");

	while(1){
		LCD_gotoRawCol(0,11);
		duty=ADC_readChannel(0);
		LCD_IntToStr(duty);
		PWM_init(duty);
		if(Pin_is_set(PIND,PD2)){
			_delay_ms(30);
			if(Pin_is_set(PIND,PD2)){
				if (flag==0){
				PORTD^=(1<<PD1);
				PORTD^=(1<<PD0);

				PWM_init(duty);
				flag=1;
				}
			}
		}
		else
			flag=0;
	}
}
