/*
 * stack.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */

#include<stdio.h>
#include <stdlib.h>//for malloc() function

struct node
{
	int data;
	struct node* next;
};

struct node *head = NULL;

void linkedlist_insertleft(int n)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = n;
	newnode->next = head;
	head = newnode;
	printf("Value %d is inserted at left side of linked-list.\n", n);
}

void linkedlist_insertright(int n)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = n;
	newnode->next = NULL;

	struct node *ptr = head;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	ptr->next = newnode;
	printf("Value %d is inserted at right side of linked-list.\n", n);
}

void linkedlist_printall(void)
{
	struct node *ptr = head;
	printf("Linkedlist elements are: ");

	while(ptr != NULL)
	{
		printf("%d, ",ptr->data);
		ptr = ptr->next;
	}
}

void linkedlist_length(void)
{
   int length = 0;
   struct node *ptr = head;

   for(ptr; ptr != NULL; ptr = ptr->next)
   {
	   length++;
   }

   printf("length of linkedlist = %d\n", length);
}
