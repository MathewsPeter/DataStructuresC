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
struct BSTNode* binarysearchtree_deleten(struct BSTNode*, int);//delete value if present in tree
void binarysearchtree_inordertraverse(struct BSTNode*);//print all elements in the Binary Tree

struct BSTNode
{    struct BSTNode* left;
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
{    if(node == NULL)
    {    struct BSTNode* newBSTNode = (struct BSTNode*)(malloc(sizeof(struct BSTNode)));
        newBSTNode->data = n;
        newBSTNode->left = NULL;
        newBSTNode->right = NULL;
        if(BSTHead==NULL)
            BSTHead = newBSTNode;
        printf("%d inserted\n", n);
        return newBSTNode;
    }
    else if(n < node->data)
    {    node->left = binarysearchtree_insertn(node->left, n);
    }
    else if(n > node->data)
    {    node->right = binarysearchtree_insertn(node->right, n);
    }
return node;
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
struct BSTNode* binarysearchtree_deleten(struct BSTNode* node, int n)
{
    if(node == NULL)
        return NULL;
    else if(n < node->data)
        binarysearchtree_deleten(node->left, n);
    else if(node->data < n)
        binarysearchtree_deleten(node->right, n);
    else if(n == node->data)
    {
        if((node->left == NULL) &&(node->right == NULL))
        {   free(node);
            printf("%d deleted as leaf node\n",n);
            return NULL;
        }
        if(node->left == NULL)
        {    node = node->right;
            free(node->right);
            printf("%d deleted\n",n);
            return NULL;
        }
        if(node->right == NULL)
        {    node = node->left;
            free(node->left);
            printf("%d deleted\n",n);
            return NULL;
        }
        if((node->left != NULL) &&(node->right != NULL))
        {
            struct BSTNode* inordersuc = node->right;
            while(inordersuc->left!=NULL)
                inordersuc = inordersuc->left;
            node->data = inordersuc->data;
            inordersuc->data = n;
            binarysearchtree_deleten(inordersuc, inordersuc->data);
            printf("%d deleted\n",n);
            return NULL;
        }

    }
}

/**
Print all elements using in-order traversal method

@param struct BSTNode* node - Recursively traversed node
@return void
*/
void binarysearchtree_inordertraverse(struct BSTNode* node)
{    if(node->left != NULL)
        binarysearchtree_inordertraverse(node->left);
    printf("%d, ", node->data);
    if(node->right != NULL)
        binarysearchtree_inordertraverse(node->right);
}




void BSTPrintHead(struct BSTNode* node)
{
	printf("%d\n",node->data);
}
 void BSTPrint()
 {
		printf("%d\n",BSTHead->data);
 }
