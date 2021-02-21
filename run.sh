rm -f main.o
rm -f array.o
rm -f linkedlist.o
rm -f stack.o
rm -f queue.o
rm -f binarytree.o
clear

gcc -Wall -g -c main.c
gcc -Wall -g -c array.c
gcc -Wall -g -c linkedlist.c
gcc -Wall -g -c stack.c
gcc -Wall -g -c queue.c
gcc -Wall -g -c binarytree.c

gcc -o a.out main.o array.o linkedlist.o stack.o queue.o binarytree.o

chmod a+x a.out
./a.out

echo "Press Enter to close"
read line