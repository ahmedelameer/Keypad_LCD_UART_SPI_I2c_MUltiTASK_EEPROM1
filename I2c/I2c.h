/*
 * I2c.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#ifndef I2C_H_
#define I2C_H_

#include"INTERFACE.h"
#include"MICRO_setting.h"
#include"UNIT_types.h"


void TWI_Init(void);
void TWI_Start(void);
void TWI_Stop(void);
void TWI_Write(unit8 data);
unit8 TWI_Read_with_ACK(void);
unit8 TWI_Read_with_NACK(void);
unit8 TWI_Get_Status(void);






#endif /* I2C_H_ */
