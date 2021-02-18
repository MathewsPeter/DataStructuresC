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
{
	printf("\nInside function stack_push:\n");

	if(stack_top == stack_size_max)
	{	printf("The stack is full. Unable to push value %d.\n",n);
	}
	else
	{	stack[++stack_top] = n;
		printf("Value %d is pushed to stack.\n",n);
	}
}


/**
Pop (remove and view) value from top of Stack

@param  void
@return void
*/
void stack_pop(void)
{
	printf("\nInside function stack_pop:\n");
	if(stack_top == 0)
	{	printf("Stack is empty. Unable to pop further.\n");
	}
	else
	{	printf("Value popped is %d\n", stack[stack_top--]);
	}
}


/**
View the value from top of Stack. Stack is not modified.

@param  void
@return void
*/
void stack_peek(void)
{
	printf("\nInside function stack_peek:\n");
	if(stack_top == 0)
	{	printf("Stack is empty. Unable to peek.\n");
	}
	else
	{	printf("Value at top of stack is %d\n", stack[stack_top]);
	}

}
