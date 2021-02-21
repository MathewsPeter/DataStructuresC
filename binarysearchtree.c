/**
 * @file binarysearchtree.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of Binary Tree in C language
 */

#include <stdio.h>
#include <stdlib.h>

void binarysearchtree_insertn(int);//insert value
void binarysearchtree_deleten(int);//delete value if present in tree
void binarysearchtree_printall(void);//print all elements in the Binary Tree
void binarysearchtree_printdepth(void);//print all elements in the Binary Tree
void binarysearchtree_depthfirsttraverse(void);//print all elements in the Binary Tree
void binarysearchtree_breadthfirsttraverse(void);//print all elements in the Binary Tree

struct BSTnode
{
	struct BSTnode* left;
	struct BSTnode* right;
	int data;
};
struct BSTnode* BSThead = NULL;


/**
Insert value n

@param  n, the value to be inserted
@return void
*/
void binarysearchtree_insertn(int n)
{	struct BSTnode* newBSTnode = (struct BSTnode*)(malloc(sizeof(struct BSTnode)));
	newBSTnode->data = n;
	newBSTnode->left = NULL;
	newBSTnode->right = BSThead;
	BSThead = newBSTnode;
	printf("%d inserted on top\n", n);
}


/**
if value n is present in the Binary Tree, delete it

@param  n, the value to be deleted
@return void
*/
void binarysearchtree_deleten(int n)
{	struct BSTnode* i;
	int cnt_nDeleted=0;

	if(BSThead->data == n)//delete first node
		BSThead = BSThead->right;

	for(i=BSThead;i!=NULL;i=i->right)
	{	if(i->right->data == n)
		{	i->right = i->right->right;
			cnt_nDeleted++;
		}
	}

	printf("%d instances of %d is deleted\n",cnt_nDeleted, n);
}


/**
Print all elements depth-first

@param  void
@return void
*/
void binarysearchtree_depthfirsttraverse(void)
{

}

/**
Print all elements breadth-first

@param  void
@return void
*/
void binarysearchtree_breadthfirsttraverse(void)
{

}
