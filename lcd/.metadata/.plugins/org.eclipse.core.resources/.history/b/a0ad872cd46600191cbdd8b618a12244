/*
 * segment.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#ifndef SEGMENT_H_
#define SEGMENT_H_

#define FIRST_PINS

#include"INTERFACE.h"
#include"MICRO_setting.h"
#include"UNIT_types.h"

#ifdef FIRST_PINS
#define PORT_check_equal(port,num)    ((port&0x0F)==num)
#define PORT_check_lower(port,num)    ((port&0x0F)<num)
#define PORT_check_bigger(port,num)   ((port&0x0F)>num)
#define PORT_equal(port,num)          port=((port&0xF0)|(num&0x0F))


#else

#define PORT_check_equal(port,num)    (((port&0xF0)>>4)==num)
#define PORT_check_lower(port,num)    (((port&0xF0)>>4)<num)
#define PORT_check_bigger(port,num)   (((port&0xF0)>>4)>num)
#define PORT_equal(port,num)          (port=((port&0x0F)|((num&0x0F)<<4)))




#endif























#endif /* SEGMENT_H_ */
