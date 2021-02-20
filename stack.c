/**
 * @file stack.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of Stack in C language
 * Stack is implemented using Array
 */

#include<stdio.h>

void stack_push(int);
void stack_pop(void);
#define STACK_SIZE_MAX 5
int stack_size_max = STACK_SIZE_MAX;
int stack[STACK_SIZE_MAX+1];
int stack_top = 0;


/**
Push(insert) value to top of Stack

@param  n, the value to be inserted
@return void
*/
void stack_push(int n)
{	if(stack_top == stack_size_max)
	{	printf("Stack full. Unable to push %d\n",n);
	}
	else
	{	stack[++stack_top] = n;
		printf("%d pushed\n",n);
	}
}


/**
Pop (remove and view) value from top of Stack

@param  void
@return void
*/
void stack_pop(void)
{	if(stack_top == 0)
	{	printf("Stack empty. Unable to pop\n");
	}
	else
	{	printf("%d popped\n", stack[stack_top--]);
	}
}


/**
View the value from top of Stack. Stack is not modified.

@param  void
@return void
*/
void stack_peek(void)
{	if(stack_top == 0)
	{	printf("Stack empty. Unable to peek\n");
	}
	else
	{	printf("%d is at stack top\n", stack[stack_top]);
	}

}
