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
#define ENABLE_STACKARR 1
#define ENABLE_QUEUE 0
#define ENABLE_BINARYTREE 0
#define ENABLE_BINARYSEARCHTREE 1

#include "Array/array.h"
#include "LinkedList/linkedlist.h"
#include "Stack/stack_using_array.h"
#include "Queue/queue.h"
#include "BinaryTree/binarytree.h"
#include "BinarySearchTree/binarysearchtree.h"

int main(void)
{
	#if ENABLE_ARRAY == 1
	printf("\n\nArray functions:\n");
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
	#endif

	#if ENABLE_STACKARR == 1
	printf("\n\nStack(using Array) functions:\n");
	stackarr_push(1);
	stackarr_push(2);
	stackarr_push(3);
	stackarr_push(4);
	stackarr_push(5);
	stackarr_push(6);
	stackarr_peek();
	stackarr_pop();
	stackarr_pop();
	stackarr_pop();
	stackarr_pop();
	stackarr_pop();
	stackarr_pop();
	#endif


	#if ENABLE_STACKLL == 1
	printf("\n\nStack(using LinkedList) functions:\n");
	stackll_push(1);
	stackll_pop();
	#endif

	#if ENABLE_QUEUE == 1
	printf("\n\nQueue functions:\n");
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
	#endif

	#if ENABLE_BINARYTREE == 1
	printf("\n\nBinary Tree functions:\n");
	binarytree_insertn(1);
	binarytree_insertn(2);
	binarytree_printall();
	binarytree_insertn(3);
	binarytree_printall();
	#endif

	#if ENABLE_BINARYSEARCHTREE == 1
	printf("\n\nBinary Search Tree functions:\n");
	binarysearchtree_insertn(BSTHead, 2);
	binarysearchtree_insertn(BSTHead, 1);
	binarysearchtree_insertn(BSTHead, 5);
	binarysearchtree_insertn(BSTHead, 3);
	binarysearchtree_insertn(BSTHead, 1);
	binarysearchtree_insertn(BSTHead, 4);
	binarysearchtree_insertn(BSTHead, 7);
	binarysearchtree_insertn(BSTHead, 6);
    binarysearchtree_inordertraverse(BSTHead);

    BSTPrintHead(BSTHead);
    BSTPrint();
    binarysearchtree_deleten(BSTHead, 7);
    binarysearchtree_inordertraverse(BSTHead);
	#endif

	return 1;
}
