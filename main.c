/*
 * main.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */
#include <stdio.h>
#include <stdlib.h>

#define ENABLE_ARRAY 0
#define ENABLE_LINKEDLIST 1
#define ENABLE_STACK 0

#include "array.h"
#include "stack.h"
#include "linkedlist.h"

int main(void)
{
	#if ENABLE_ARRAY == 1
	array_insertni(1,0);
	array_insertni(9,2);
	array_printall();
	array_insertni(9,10);
	array_delete(6);
	array_delete(1);
	array_printall();
	#endif

	#if ENABLE_LINKEDLIST == 1

	linkedlist_length();
	linkedlist_insertleft(2);
	linkedlist_insertleft(1);
	linkedlist_length();
	linkedlist_insertright(3);
	linkedlist_printall();
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
