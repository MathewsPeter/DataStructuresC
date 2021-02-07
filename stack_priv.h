/*
 * stack_priv.h
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */

#ifndef STACK_PRIV_H_
#define STACK_PRIV_H_

void stack_push(int);
void stack_pop(void);

int stack_size = 10;
int stack[10];
int stack_top = -1;

#endif /* STACK_PRIV_H_ */
