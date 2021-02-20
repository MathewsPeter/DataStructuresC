/**
 * @file linkedlist.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of LinkedList in C language
 */

#include<stdio.h>
#include <stdlib.h>//for malloc() function

struct node
{	int data;
	struct node* next;
};

struct node *head = NULL;


/**
Insert value n to left side (near HEAD end) of the LinkedList

@param n, the value to be inserted
@return void
*/
void linkedlist_insertleft(int n)
{	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = n;
	newnode->next = head;

	head = newnode;
	printf("%d inserted at left\n", n);
}


/**
Insert value n to right side (near NULL end) of the LinkedList

@param n, the value to be inserted
@return void
*/
void linkedlist_insertright(int n)
{	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = n;
	newnode->next = NULL;

	struct node *ptr = head;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	ptr->next = newnode;
	printf("%d inserted at right\n", n);
}

/**
Print all values of the LinkedList

@param  void
@return void
*/
void linkedlist_printall(void)
{	struct node *ptr = head;
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
   struct node *ptr = head;

   for(ptr; ptr != NULL; ptr = ptr->next)
   {	length++;
   }
   printf("%d\n", length);
}
