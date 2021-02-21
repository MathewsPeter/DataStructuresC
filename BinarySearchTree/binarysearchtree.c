/**
 * @file binarysearchtree.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of Binary Search Tree in C language
 */

#include <stdio.h>
#include <stdlib.h>

struct BSTNode* binarysearchtree_insertn(struct BSTNode*, int);//insert value
void binarysearchtree_deleten(int);//delete value if present in tree
void binarysearchtree_inordertraverse(struct BSTNode*);//print all elements in the Binary Tree

struct BSTNode
{	struct BSTNode* left;
	struct BSTNode* right;
	int data;
};
struct BSTNode* BSTHead = NULL;


/**
Insert value n

@param  struct BSTNode* node - Recursively traversed node
@param  n, the value to be inserted
@return void

*/
struct BSTNode* binarysearchtree_insertn(struct BSTNode* node, int n)
{	if(node == NULL)
	{	struct BSTNode* newBSTNode = (struct BSTNode*)(malloc(sizeof(struct BSTNode)));
		newBSTNode->data = n;
		newBSTNode->left = NULL;
		newBSTNode->right = NULL;
		if(BSTHead==NULL)
			BSTHead = newBSTNode;
		printf("%d inserted\n", n);
		return newBSTNode;
	}
	else if(n < node->data)
	{
		node->left = binarysearchtree_insertn(node->left, n);
	}
	else if(n > node->data)
	{
		node->right = binarysearchtree_insertn(node->right, n);
	}
return node;
}
/**
if value n is present in the Binary Tree, delete it

@param  n, the value to be deleted
@return void
*/
void binarysearchtree_deleten(int n)
{
}

/**
Print all elements using in-order traversal method

@param struct BSTNode* node - Recursively traversed node
@return void
*/
void binarysearchtree_inordertraverse(struct BSTNode* node)
{	if(node->left != NULL)
		binarysearchtree_inordertraverse(node->left);
	printf("%d, ", node->data);
	if(node->right != NULL)
		binarysearchtree_inordertraverse(node->right);
}

