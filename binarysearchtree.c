/**
 * @file binarysearchtree.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of Binary Search Tree in C language
 */
 
 #include<stdio.h>
#include<stdlib.h>
#include "binarysearchtree_node.h"

struct BSTNode *newNode(int n)
{  struct BSTNode *temp = (struct BSTNode *)malloc(sizeof(struct BSTNode));
   temp->data = n;
   temp->left = temp->right = NULL;
   return temp;
}


/**
Print all elements using in-order traversal method

@param struct BSTNode* node - Recursively traversed node
@return void
*/
void bst_inordertraversal(struct BSTNode *root)
{  	if (root != NULL)
	{	bst_inordertraversal(root->left);
      	printf("%d ", root->data);
      	bst_inordertraversal(root->right);
	}
}


/**
Insert value n

@param  struct BSTNode* node - Recursively traversed node
@param  n, the value to be inserted
@return void

*/
struct BSTNode* bst_insertn(struct BSTNode* node, int n)
{	if (node == NULL) return newNode(n);
      if (n < node->data)
         node->left = bst_insertn(node->left, n);
      else
         node->right = bst_insertn(node->right, n);
   return node;
}

struct BSTNode * minValueNode(struct BSTNode* node)
{	struct BSTNode* current = node;
	while (current && current->left != NULL)
      current = current->left;
	return current;
}

/**
if value n is present in the Binary Tree, delete it
1. if tree Head is NULL, return NULL
2. if n < node, recursively traverse the left tree
3. if node < n, recursively traverse the right tree
4. if n == node, then:
    4.1. if node is no children, delete it
    4.2. if node has either only right or only left child, then swap the node and child, delete the child
    4.3. if node has 2 children, find the smallest node in righttree of the node, swap the node with it, delete it

@param  n, the value to be deleted
@return void
*/
struct BSTNode* bst_deleten(struct BSTNode* root, int key)
{	if (root == NULL) return root;
	if (key < root->data)
         root->left = bst_deleten(root->left, key);
	else if (key > root->data)
         root->right = bst_deleten(root->right, key);
	else
	{
      if (root->left == NULL)
      {
         struct BSTNode *temp = root->right;
         free(root);
         return temp;
      }
      else if (root->right == NULL)
      {
         struct BSTNode *temp = root->left;
         free(root);
         return temp;
      }
      struct BSTNode* temp = minValueNode(root->right);
      root->data = temp->data;
      root->right = bst_deleten(root->right, temp->data);
   }
   return root;
}
