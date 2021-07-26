/**
 * @file linkedlist.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of LinkedList in C language
 */

#include <stdio.h>
#include <stdlib.h>//for malloc() function

int linkedlist_insertleft(int);
int linkedlist_insertright(int);
int linkedlist_printall(void);
int linkedlist_length(void);

struct LLnode
{   int data;
    struct LLnode* next;
};
struct LLnode* LLhead = NULL;


/**
Insert value n to left side (near HEAD end) of the LinkedList

@param n, the value to be inserted
@return void
*/
int linkedlist_insertleft(int n)
{   struct LLnode* newLLnode = (struct LLnode*)malloc(sizeof(struct LLnode));
    newLLnode->data = n;
    newLLnode->next = LLhead;

    LLhead = newLLnode;
    printf("%d inserted at left\n", n);
    return 0;
}


/**
Insert value n to right side (near NULL end) of the LinkedList

@param n, the value to be inserted
@return void
*/
int linkedlist_insertright(int n)
{   struct LLnode* newLLnode = (struct LLnode*)malloc(sizeof(struct LLnode));
    newLLnode->data = n;
    newLLnode->next = NULL;

    struct LLnode *ptr = LLhead;
    while(ptr->next!=NULL)
            ptr = ptr->next;
    ptr->next = newLLnode;
    printf("%d inserted at right\n", n);
    return 0;
}

/**
Print all values of the LinkedList

@param  void
@return 0
*/
int linkedlist_printall(void)
{   struct LLnode *ptr = LLhead;
    printf("LinkedList: <");

    while(ptr != NULL)
    {        printf("%d, ",ptr->data);
            ptr = ptr->next;
    }
    printf(">\n");
    return 0;
}

/**
Print length (number of elements) LinkedList

@param  void
@return void
*/
int linkedlist_length(void)
{   int length = 0;
    printf("LinkedList length: ");
    struct LLnode *ptr = LLhead;

    while(ptr!=NULL)
    {   length++;
        ptr = ptr->next;
    }
    printf("%d\n", length);
    return length;
}



/**
Insert value n to right side (near NULL end) of the LinkedList

@param n, the value to be inserted
@return 0 if deleted
@return 1 if not deleted
*/
int linkedlist_deleten(int n)
{
	struct LLnode *ptr = LLhead;
	struct LLnode *ptrtmp;

	 if (ptr->data == n)
	 {
		LLhead = ptr->next;
		free(ptr);
		return 0;
	 }

    while(ptr!= NULL && ptr->data!=n)
    {
    	ptrtmp = ptr;
		ptr = ptr->next;
    }

	if(ptr == NULL)
		return 1;

	ptrtmp->next = ptr->next;
	free(ptr);
	printf("%d deleted\n", n);
	return 0;
}
