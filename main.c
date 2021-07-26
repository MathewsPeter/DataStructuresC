/*
 * main.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define ENABLE_ARRAY 1
#define ENABLE_LINKEDLIST 1
#define ENABLE_STACKARR 0
#define ENABLE_STACKLL 0

#define ENABLE_QUEUE 0

#define ENABLE_QUEUEARR 0
#define ENABLE_QUEUELL 0
#define ENABLE_BINARYTREE 0
#define ENABLE_BINARYSEARCHTREE 0
#define ENABLE_AVLTREE 0

#if ENABLE_ARRAY == 1
#include "array.h"
#endif
#if ENABLE_LINKEDLIST == 1
#include "linkedlist.h"
#endif
#if ENABLE_STACKARR == 1
#include "stack_using_array.h"
#endif
#if ENABLE_STACKLL == 1

#endif
#if ENABLE_QUEUE == 1
#include "queue.h"
#endif
#if ENABLE_BINARYTREE == 1
#include "binarytree.h"
#endif
#if ENABLE_BINARYSEARCHTREE == 1
#include "binarysearchtree.h"
#endif
#if ENABLE_AVLTREE == 1
#include "avltree.h"
#endif


int main(void)
{
	#if ENABLE_ARRAY == 1
	printf("\n\nArray functions:\n");
	assert(array_fillall(200) == 0);
	assert(array_insertni(13,0) == 0);
	assert(array_insertni(45,1) == 0);
	assert(array_insertni(99,2) == 0);
	assert(array_insertni(199,5)== 1);
	assert(array_geti(0)==13 );
	assert(array_geti(1)==45 );
	assert(array_geti(2)==99 );
	assert(array_geti(3)==200);
	assert(array_geti(4)==200);
	assert(array_deleten(13) == 0);
	assert(array_deleten(13) == 1);
	assert(array_deletei(5) == 1);
	assert(array_deletei(4) == 0);
	assert(array_printall() == 0);
	printf("\n\n");
	#endif

	#if ENABLE_LINKEDLIST == 1
	assert(linkedlist_length() == 0);
	assert(linkedlist_insertleft(2) == 0);
	assert(linkedlist_insertleft(1) == 0);
	assert(linkedlist_length() == 2);
	assert(linkedlist_insertright(3) == 0);
	assert(linkedlist_printall() == 0);
	assert(linkedlist_deleten(3) == 0);
	assert(linkedlist_deleten(2) == 0);
	assert(linkedlist_deleten(1) == 0);
	assert(linkedlist_printall() == 0);
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
	printf("\n\nBinarySearchTree functions:\n");
    #include"BinarySearchTreeTree/binarysearchtree_node.h"
    struct BSTNode *root = NULL;
    root = binarysearchtree_insertn(root, 1);
    root = binarysearchtree_insertn(root, 2);
    root = binarysearchtree_insertn(root, 3);
    root = binarysearchtree_insertn(root, 4);
    root = binarysearchtree_insertn(root, 5);
    root = binarysearchtree_insertn(root, 6);
    root = binarysearchtree_insertn(root, 7);
    printf("Inorder traversal: ");   binarysearchtree_inordertraversal(root);
    printf("\nDelete 2\n");          root = binarysearchtree_deleten(root, 2);
    printf("Inorder traversal: ");   binarysearchtree_inordertraversal(root);
    printf("\nDelete 3\n");          root = binarysearchtree_deleten(root, 3);
    printf("Inorder traversal: ");   binarysearchtree_inordertraversal(root);
    printf("\nDelete 5\n");          root = binarysearchtree_deleten(root, 5);
    printf("Inorder traversal: ");   binarysearchtree_inordertraversal(root);
    printf("\nDelete 7\n");          root = binarysearchtree_deleten(root, 7);
    printf("Inorder traversal: ");   binarysearchtree_inordertraversal(root);
    printf("\nDelete 1\n");          root = binarysearchtree_deleten(root, 1);
    printf("Inorder traversal: ");   binarysearchtree_inordertraversal(root);
	#endif

	#if ENABLE_AVLTREE == 1
	printf("\n\nAVL Tree functions:\n");
    #include"AVLTree/avltree_node.h"
    struct AVLNode *root = NULL;
    root = avl_insertn(root, 1);
    root = avl_insertn(root, 2);
    root = avl_insertn(root, 3);
    root = avl_insertn(root, 4);
    root = avl_insertn(root, 5);
    root = avl_insertn(root, 6);
    root = avl_insertn(root, 7);
    printf("Inorder traversal: ");   avl_inordertraversal(root);
    printf("\nDelete 2\n");          root = avl_deleten(root, 2);
    printf("Inorder traversal: ");   avl_inordertraversal(root);
    printf("\nDelete 3\n");          root = avl_deleten(root, 3);
    printf("Inorder traversal: ");   avl_inordertraversal(root);
    printf("\nDelete 5\n");          root = avl_deleten(root, 5);
    printf("Inorder traversal: ");   avl_inordertraversal(root);
    printf("\nDelete 7\n");          root = avl_deleten(root, 7);
    printf("Inorder traversal: ");   avl_inordertraversal(root);
    printf("\nDelete 1\n");          root = avl_deleten(root, 1);
    printf("Inorder traversal: ");   avl_inordertraversal(root);
	#endif

	return 1;
}
