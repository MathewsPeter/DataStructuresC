/**
 * @file linkedlist.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of LinkedList in C language
 */

#include <stdio.h>
#include <stdlib.h>//for malloc() function

void linkedlist_insertleft(int);
void linkedlist_insertright(int);
void linkedlist_printall(void);
void linkedlist_length(void);

struct LLnode
{	int data;
	struct LLnode* next;
};

struct LLnode* LLhead = NULL;


/**
Insert value n to left side (near HEAD end) of the LinkedList

@param n, the value to be inserted
@return void
*/
void linkedlist_insertleft(int n)
{	struct LLnode* newLLnode = (struct LLnode*)malloc(sizeof(struct LLnode));
	newLLnode->data = n;
	newLLnode->next = LLhead;

	LLhead = newLLnode;
	printf("%d inserted at left\n", n);
}


/**
Insert value n to right side (near NULL end) of the LinkedList

@param n, the value to be inserted
@return void
*/
void linkedlist_insertright(int n)
{	struct LLnode* newLLnode = (struct LLnode*)malloc(sizeof(struct LLnode));
	newLLnode->data = n;
	newLLnode->next = NULL;

	struct LLnode *ptr = LLhead;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	ptr->next = newLLnode;
	printf("%d inserted at right\n", n);
}

/**
Print all values of the LinkedList

@param  void
@return void
*/
void linkedlist_printall(void)
{	struct LLnode *ptr = LLhead;
	printf("LinkedList: <");

	while(ptr != NULL)
	{	printf("%d, ",ptr->data);
		ptr = ptr->next;
	}
	printf(">\n");
}

/**
Print length (number of elements) LinkedList

@param  void
@return void
*/
void linkedlist_length(void)
{
   int length = 0;
   printf("LinkedList length: ");
   struct LLnode *ptr = LLhead;

   while(ptr!=NULL)
   {   length++;
   	   ptr = ptr->next;

   }
   printf("%d\n", length);
}
