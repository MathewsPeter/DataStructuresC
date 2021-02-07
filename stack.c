/*
 * stack.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */

#include<stdio.h>

void stack_push(int);
void stack_pop(void);

int stack_size = 10;
int stack[10];
int stack_top = -1;

void stack_push(int n)
{
	if(stack_top == -1)//stack is empty
	{
		stack[stack_size - 1] = n;
		stack_top = stack_size - 1;
		printf("Value %d is pushed to stack.\n",n);
	}
	else if(stack_top == 0)
	{
		printf("The stack is full. Unable to push.\n");
	}
	else
	{
		stack[stack_top - 1] = n;
		stack_top--;
		printf("Value %d is pushed to stack.\n",n);
	}
}

void stack_pop(void)
{
	if(stack_top == -1)
	{
		printf("Stack is empty. Unable to pop.\n");
	}
	else
	{

		printf("Value popped is %d\n", stack[stack_top]);
		if(stack_top == stack_size - 1)
		{
				stack_top = -1;
		}
		else
		{
			stack_top++;
		}
	}
}
