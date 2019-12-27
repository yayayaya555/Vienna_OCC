/*
 * sci.h
 *
 *  Created on: 2018Äê1ÔÂ3ÈÕ
 *      Author: rainman
 */

#ifndef SCI_H_
#define SCI_H_

void sci_init(void);
interrupt void uartIsr(void);
interrupt void uart_send(void);


extern float32 KP2,KI2;
extern float32 Um;
extern Uint16 m;


#endif /* SCI_H_ */
