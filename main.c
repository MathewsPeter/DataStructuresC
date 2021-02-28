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
#define ENABLE_STACKARR 0
#define ENABLE_STACKLL 0

#define ENABLE_QUEUE 0

#define ENABLE_QUEUEARR 0
#define ENABLE_QUEUELL 0
#define ENABLE_BINARYTREE 0
#define ENABLE_BINARYSEARCHTREE 1

#include "Array/array.h"
#include "LinkedList/linkedlist.h"
#include "StackUsingArray/stack_using_array.h"
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

	#if ENABLE_STACARR == 1
	printf("\n\nStack(using LinkedList) functions:\n");
	stackarr_push(1);
	stackarr_pop();
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
    #include"BinarySearchTree/binarysearchtree_node.h"

	struct node *root = NULL;
	   root = insert(root, 1);
	   root = insert(root, 2);
	   root = insert(root, 3);
	   root = insert(root, 4);
	   root = insert(root, 5);
	   root = insert(root, 6);
	   root = insert(root, 7);
	   printf("Inorder traversal: ");
	   inordertraversal(root);
	   printf("\nDelete 2\n");
	   root = deleteNode(root, 2);
	printf("Inorder traversal: ");   inordertraversal(root);
	   printf("\nDelete 3\n");
	   root = deleteNode(root, 3);
	printf("Inorder traversal: ");   inordertraversal(root);
	   printf("\nDelete 5\n");
	   root = deleteNode(root, 5);
	printf("Inorder traversal: ");   inordertraversal(root);
	printf("\nDelete 7\n");
	   root = deleteNode(root, 7);
	printf("Inorder traversal: ");   inordertraversal(root);
	printf("\nDelete 1\n");
	   root = deleteNode(root, 1);
	printf("Inorder traversal: ");   inordertraversal(root);

//	struct node *root = NULL;
//	printf("check 1\n");
//	   root = insert(root, 1);
//	   printf("check 2\n");
//	   root = insert(root, 2);
//	   printf("check 3\n");
//	   root = insert(root, 3);
//	   root = insert(root, 40);
//	   root = insert(root, 70);
//	   root = insert(root, 60);
//	   root = insert(root, 80);
//	   printf("Inorder traversal of the given tree \n");
//
//	   inordertraversal(root);
//	   printf("\nDelete 20\n");
//	   root = deleteNode(root, 20);
//	   printf("Inorder traversal of the modified tree \n");
//	   inordertraversal(root);
//	   printf("\nDelete 30\n");
//	   root = deleteNode(root, 30);
//	   printf("Inorder traversal of the modified tree \n");
//	   inordertraversal(root);
//	   printf("\nDelete 50\n");
//	   root = deleteNode(root, 50);
//	   printf("Inorder traversal of the modified tree \n");
//	   inordertraversal(root);
	#endif

	return 1;
}
