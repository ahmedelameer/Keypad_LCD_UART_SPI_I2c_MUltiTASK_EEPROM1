 /******************************************************************************
 *
 * Module: UART
 *
 * File Name: uart.h
 *
 * Description: Header file for the UART AVR driver
 *
 * Author: Mohamed Tarek
 *
 *******************************************************************************/

#ifndef UART_H_
#define UART_H_

#include "INTERFACE.h"
#include "UNIT_types.h"
#include "MICRO_setting.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* UART Driver Baud Rate */
#define USART_BAUDRATE 9600

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void UART_init(void);

void UART_sendByte(const unit8 data);

unit8 UART_recieveByte(void);

void UART_sendString(const unit8 *Str);

void UART_receiveString(unit8 *Str); // Receive until #

#endif /* UART_H_ */
