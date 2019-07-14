/*
 * LCD.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#ifndef LCD_H_
#define LCD_H_

#include<string.h>
#define BITS_MODES    4
//#define FIRST_PINS

/* control pins*/
#define  RS     PB1
#define  RW     PB2
#define  E      PB3
#define DIRECTION_CTRL_PINS     DDRB
#define CTRL_OUTPUT_PINS        PORTB

#define CURSOR_OFF            0x0c
#define CURSOR_MoveToFirstLoc 0x80

/* set functions*/
#define BITS_8_MODES               0x38
#define BITS_4_MODES               0x02
#define TWO_LINE_LCD_Four_BIT_MODE 0x28
#define CLEAR_LCD                  0x01


/*output pins */

#define DIRECTION_DATA_PINS     DDRA
#define DATA_OUTPUT_PINS        PORTA

/*command to write*/
#ifdef FIRST_PINS
#define TAKE_FTCOMMAND(PORT,COMMAND)    PORT=(PORT&0xF0)|((COMMAND&0xF0)>>4)
#define TAKE_SCCOMMAND(PORT,COMMAND)    PORT=(PORT&0xF0)|(COMMAND&0x0F)
#endif

#ifndef FIRST_PINS
#define TAKE_FTCOMMAND(PORT,COMMAND)    PORT=(PORT&0x0F)|(COMMAND&0xF0)
#define TAKE_SCCOMMAND(PORT,COMMAND)    PORT=(PORT&0x0F)|((COMMAND&0x0F)<<4)
#endif


#include"INTERFACE.h"
#include"UNIT_types.h"
#include"MICRO_setting.h"




void LCD_sendCommand(unit8 command);
void LCD_displayChar(unit8 data);
void LCD_init(void);
void LCD_displayString(const char *Str);
void LCD_gotoRawCol(unit8 row, unit8 col);
void LCD_IntToStr(unit8 data);
void LCD_displayStrRowCol(unit8 row,unit8 col,const char *Str);
void LCD_clearScreen(void);
#endif /* LCD_H_ */
