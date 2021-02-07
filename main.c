/*
 * main.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */
#include <stdio.h>
#include <stdlib.h>

#define ENABLE_ARRAY 1
#define ENABLE_STACK 1

#include "array.h"
#include "stack.h"

int main(void)
{

	#if ENABLE_ARRAY == 1
	array_insertni(1,0);
	array_insertni(2,1);
	array_insertni(9,2);
	array_printall();
	array_delete(6);
	array_delete(1);
	array_printall();
	#endif

	#if ENABLE_STACK == 1
	stack_push(2);
	stack_push(1);
	stack_pop();
	stack_pop();
	stack_pop();
	#endif

	return 1;
}
