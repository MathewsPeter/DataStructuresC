/**
 * @file avltree.h
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * extern declarations of API - function call - interfaces of Binary Search Tree
 */

#ifndef AVLTREE_H_
#define AVLTREE_H_

#include "avltree_node.h"
extern void avl_inordertraversal(struct AVLNode*);
extern struct AVLNode* avl_insertn(struct AVLNode* , int);
extern struct AVLNode* avl_deleten(struct AVLNode* , int);

#endif /* AVLTREE_H_ */
