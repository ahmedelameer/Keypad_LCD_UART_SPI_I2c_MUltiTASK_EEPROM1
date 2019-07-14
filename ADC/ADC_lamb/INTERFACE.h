/*
 * INTERFACE.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Mohamed ELameer
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_



/*Direction  ports */
#define Direction_A   DDRA
#define Direction_B   DDRB
#define Direction_C   DDRC
#define Direction_D   DDRD

/*ports*/
#define PA    PORTA
#define PB    PORTB
#define PC    PORTC
#define PD    PORTD




#define Direction_output(REG,pin) (REG=REG|(1<<pin))
#define Direction_input(REG,pin)  (REG=REG&~(1<<pin))


#define Pin_output(REG,pin)       REG=REG|(1<<pin)
#define Pin_clear(REG,pin)        REG&=~(1<<pin)
#define Pin_toggle(REG,pin)       REG=REG^(1<<pin)



#define Pin_is_set(REG,pin)       (REG&(1<<pin))
#define Pin_is_clear(REG,pin)     (!((REG)&(1<<pin)))
#define Internal_pullup(REG,pin)  (REG=REG|(1<<pin))







#endif /* INTERFACE_H_ */
