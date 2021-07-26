/**
 * @file avltree_node.h
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * Extern declarations of API - function call - interfaces of Binary Search Tree
 */

#ifndef AVLTREE_NODE_H_
#define AVLTREE_NODE_H_


struct AVLNode{
   int data;
   struct AVLNode *left, *right;
};

#endif /* AVLTREE_NODE_H_ */
