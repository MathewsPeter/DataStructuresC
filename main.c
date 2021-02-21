/*
 * 0_main.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */
#include <stdio.h>
#include <stdlib.h>

#define ENABLE_ARRAY 0
#define ENABLE_LINKEDLIST 0
#define ENABLE_STACK 0
#define ENABLE_QUEUE 0
#define ENABLE_BINARYTREE 0
#define ENABLE_BINARYSEARCHTREE 1

#include "array.h"
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"
#include "binarytree.h"
#include "binarysearchtree.h"

int main(void)
{
	#if ENABLE_ARRAY == 1
	printf("Array functions:\n");
	array_fillall(200);
	array_printall();
	array_insertni(13,0);
	array_insertni(45,1);
	array_insertni(99,2);
	array_printall();
	array_deleten(13);
	array_deleten(13);
	array_printall();
	printf("\n\n");
	#endif

	#if ENABLE_LINKEDLIST == 1
	linkedlist_length();
	linkedlist_insertleft(2);
	linkedlist_insertleft(1);
	linkedlist_length();
	linkedlist_insertright(3);
	linkedlist_printall();
	printf("\n\n");
	#endif

	#if ENABLE_STACK == 1
	printf("Stack functions:\n");
	stack_push(1);
	stack_push(2);
	stack_push(3);
	stack_push(4);
	stack_push(5);
	stack_push(6);
	stack_peek();
	stack_pop();
	stack_pop();
	stack_pop();
	stack_pop();
	stack_pop();
	stack_pop();
	printf("\n\n");
	#endif

	#if ENABLE_QUEUE == 1
	printf("Queue functions:\n");
	queue_enqueue(1);
	queue_enqueue(2);
	queue_enqueue(3);
	queue_printall();
	queue_enqueue(4);
	queue_enqueue(5);
	queue_enqueue(6);
	queue_enqueue(7);
	queue_printall();
	queue_dequeue();
	queue_dequeue();
	queue_dequeue();
	queue_dequeue();
	queue_printall();
	queue_length();
	queue_dequeue();
	queue_dequeue();
	queue_dequeue();
	queue_enqueue(1);
	queue_enqueue(2);
	queue_enqueue(3);
	queue_dequeue();
	queue_dequeue();
	queue_enqueue(4);
	queue_enqueue(5);
	queue_enqueue(6);
	queue_enqueue(7);
	queue_printall();
	queue_length();
	printf("\n\n");
	#endif

	#if ENABLE_BINARYTREE == 1
	printf("Binary Tree functions:\n");
	binarytree_insertn(1);
	binarytree_insertn(2);
	binarytree_printall();
	binarytree_insertn(3);
	binarytree_printall();
	printf("\n\n");
	#endif

	#if ENABLE_BINARYSEARCHTREE == 1
	printf("Binary Search Tree functions:\n");
	binarysearchtree_insertn(1);
	binarysearchtree_insertn(2);
	binarysearchtree_breadthfirsttraverse();
	binarysearchtree_depthfirsttraverse();
	binarysearchtree_insertn(3);
	printf("\n\n");
	#endif

	return 1;
}
