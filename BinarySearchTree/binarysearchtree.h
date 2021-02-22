/**
 * @file binarysearchtree.h
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * Extern declarations of API - function call - interfaces of Binary Search Tree
 */

#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

extern struct BSTNode* binarysearchtree_insertn(struct BSTNode*, int);
extern void binarysearchtree_inordertraverse(struct BSTNode*);
extern struct BSTNode* binarysearchtree_deleten(struct BSTNode*, int);
extern void BSTPrintHead(BSTHead);
extern void BSTPrint();
extern struct BSTNode* BSTHead;

#endif /* BINARYSEARCHTREE_H_ */
