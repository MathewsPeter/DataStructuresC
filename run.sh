rm -f main.o
rm -f array.o
rm -f linkedlist.o
rm -f stack.o
rm -f queue.o
rm -f binarytree.o
rm -f binarysearch tree.o
rm -f a.out
clear

gcc -Wall -g -c main.c
gcc -Wall -g -c Array/array.c
gcc -Wall -g -c LinkedList/linkedlist.c
gcc -Wall -g -c Stack/stack.c
gcc -Wall -g -c Queue/queue.c
gcc -Wall -g -c BinaryTree/binarytree.c
gcc -Wall -g -c BinarySearchTree/binarysearchtree.c

gcc -o a.out main.o array.o linkedlist.o stack.o queue.o binarytree.o binarysearchtree.o

chmod a+x a.out
./a.out

rm -f main.o
rm -f array.o
rm -f linkedlist.o
rm -f stack.o
rm -f queue.o
rm -f binarytree.o
rm -f binarysearchtree.o
rm -f a.out

echo "Press Enter to close"
read line
