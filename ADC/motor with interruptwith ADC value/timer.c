/*
 * timer.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */
#include "TIMERS.h"








void PWM_init(unit8 duty){
	    DDRB = DDRB | (1<<PB3);
        /*500 HZ EQUATION PRESCALER 8  */

		TCCR0 = (1<<WGM00)|(1<<WGM01) | (1<<CS01)| (1<<COM01);

		TCNT0 = 0;
		/* 25% DUTY DCYCLE */
		//OCR0=64;
		/* 50% DUTY DCYCLE */
		//OCR0=128;
		OCR0=duty;



}


