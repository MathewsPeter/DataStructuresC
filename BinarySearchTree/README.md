# Binary Search Tree

Properties:
Left subtree of a node has values lesser than the node.
Right subtree of a node has values greater than the node.
Left and right subtrees must also be a binary search trees. 
There are no duplicates.
If balancing is not done explicitly, then the BST can become more of a linear data structure. (AVL rotation is solution)
Best case: Such ordered arrangement allows faster searching.

Advantages:

Disadvantages:

Operations:
insert
delete
bread-first traversal or search
depth-first traversal or search
pre-, in-, post- order traversal

Applications:
How to sort a list of unique numbers: add them to a BST and do pre/post order traversal.

Searching uses a divide-and-conquer technique, where successive search space becomes half in best case. 

number of nodes = power(2,h), for a full tree.

    O     Level 1
   / \\
  O   O   Level 2
 /\   /\
O  O O  O Level 3

Time complexity:
insert,delete search: Ω(1), Θ(log2 of n), O(n)

Space complexity:
O(n)

