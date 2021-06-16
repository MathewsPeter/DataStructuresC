rm -f main.o
rm -f array.o
rm -f linkedlist.o
rm -f stack_using_array.o
rm -f queue.o
rm -f binarytree.o
rm -f binarysearch tree.o
rm -f avltree.o
rm -f a.out
clear

gcc -Wall -g -c main.c
gcc -Wall -g -c Array/array.c
gcc -Wall -g -c LinkedList/linkedlist.c
gcc -Wall -g -c StackUsingArray/stack_using_array.c
gcc -Wall -g -c Queue/queue.c
gcc -Wall -g -c BinaryTree/binarytree.c
gcc -Wall -g -c BinarySearchTree/binarysearchtree.c
gcc -Wall -g -c AVLTree/avltree.c

gcc -o a.out main.o array.o linkedlist.o stack_using_array.o queue.o binarytree.o binarysearchtree.o avltree.o

chmod a+x a.out
./a.out

rm -f main.o
rm -f array.o
rm -f linkedlist.o
rm -f stack_using_array.o
rm -f queue.o
rm -f binarytree.o
rm -f binarysearchtree.o
rm -f avltree.o
rm -f a.out

#echo ""
#echo "Press Enter to close"
#read line
