/**
 * @file binarytree.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of Binary Tree in C language
 */

#include <stdio.h>
#include <stdlib.h>

void binarytree_insertn(int);//insert value
void binarytree_deleten(int);//delete value if present in tree
void binarytree_printall(void);//print all elements in the Binary Tree

struct BTnode
{
	struct BTnode* left;
	struct BTnode* right;
	int data;
};
struct BTnode* BThead = NULL;


/**
Insert value n

@param  n, the value to be inserted
@return void
*/
void binarytree_insertn(int n)
{	struct BTnode* newBTnode = (struct BTnode*)(malloc(sizeof(struct BTnode)));
	newBTnode->data = n;
	newBTnode->left = NULL;
	newBTnode->right = BThead;
	BThead = newBTnode;
	printf("%d inserted on top\n", n);
}


/**
if value n is present in the Binary Tree, delete it

@param  n, the value to be deleted
@return void
*/
void binarytree_deleten(int n)
{	struct BTnode* i;
	int cnt_nDeleted=0;

	if(BThead->data == n)//delete first node
		BThead = BThead->right;

	for(i=BThead;i!=NULL;i=i->right)
	{	if(i->right->data == n)
		{	i->right = i->right->right;
			cnt_nDeleted++;
		}
	}

	printf("%d instances of %d is deleted\n",cnt_nDeleted, n);
}


/**
Print all elements in the Binary Tree

@param  void
@return void
*/
void binarytree_printall(void)
{	struct BTnode* i;
	printf("Binary Tree elements: <");

	for(i=BThead;i!=NULL;i=i->right)
	{	printf("%d, ", i->data);
	}
	printf(">\n");
}
