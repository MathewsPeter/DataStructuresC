# Binary Search Tree

Left subtree of a node has values lesser than the node.
Right subtree of a node has values greater than the node.
Left and right subtrees must also be a binary search trees. 
There are no duplicates.
If balancing is not done explicitly, then the BST can become more of a linear data structure.

Best case: Such ordered arrangement allows faster searching.

Example: How to sort a list of unique numbers: add them to a BST and do pre/post order traversal.

Searching uses a divide-and-conquer technique, where successive search space becomes half. 



number of nodes = power(2,h), for a full tree.

     O     Level 1
    /   \
  O   O   Level 2
  /\    /\
OO OO Level 3

Time complexity for insert and delete and insert are log n
