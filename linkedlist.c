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
struct node *current = NULL;

void linkedlist_insertn(int n)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = n;
	newnode->next = head;
	head = newnode;
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
