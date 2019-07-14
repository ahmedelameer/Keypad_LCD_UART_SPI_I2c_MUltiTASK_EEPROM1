/*
 * SPI.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */


#include"SPI.h"



void SPI_initMaster(void){
	Direction_B|= (1<<PB4)|(1<<PB5)|(1<<PB7);
	Direction_input(Direction_B,PB5);
	SPCR=(1<<SPE)|(1<<MSTR);
}

void SPI_initSlave(void){
	Direction_output(Direction_B,PB5);
	Direction_B&= ~(1<<PB4)&~(1<<PB5)&~(1<<PB7);
	SPCR=(1<<SPE);
}

void SPI_sendByte(unit8 byte){
	SPDR=byte;
	//while(Pin_is_clear(WCOL,SPSR));

	while(Pin_is_clear(SPSR,SPIF));
}
unit8 SPI_receiveByte(void){
	//while(Pin_is_clear(WCOL,SPSR));
	while(Pin_is_clear(SPSR,SPIF));
	return SPDR;

}
void SPI_sendStr(char *Str){
	unit8 i=0;
	while(Str[i] !='\0'){
		SPI_sendByte(Str[i]);
		i++;

	}

}


void SPI_receiveStr(char *Str){
	unit8 i=0;
	Str[i]=SPI_receiveByte();
	while(Str[i]!='#'){
		i++;
		Str[i]=SPI_receiveByte();

	}
    Str[i]='\0';


}

/*
void SPI_receiveStr(unit8 *Str,unit8 Str_lenght){
	unit8 i=0;
	Str[i]=SPI_receiveByte();
	while(*Str!=Str_lenght){
		Str++;
		*Str=SPI_receiveByte();

	}
    Str[i]='\0';


}*/
