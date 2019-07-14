/*
 * ADC.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed ELameer
 */

#include "ADC.h"



volatile unit32 g_ADCRESULT;
void ADC_int(void){
	/*using AREF*/
	ADMUX=0;
	SREG=(1<<7);
	/*ADC ENABLE & pre scaler select ot work within 125*/
    ADCSRA=(1<<ADPS0)|(1<<ADPS1)|(1<<ADEN)|(1<<ADIE);



}

void ADC_readChannel(unit8 ch_num){

ADMUX=(ADMUX&0xE0)|(ch_num&0x07);
Pin_output(ADCSRA,ADSC);





}
ISR(ADC_vect){
	g_ADCRESULT=ADC;

}
