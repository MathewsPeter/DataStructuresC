rm -f main.o
rm -f array.o
rm -f linkedlist.out
rm -f stack.out
rm -f queue.out
clear

gcc -Wall -g -c main.c
gcc -Wall -g -c array.c
gcc -Wall -g -c linkedlist.c
gcc -Wall -g -c stack.c
gcc -Wall -g -c queue.c

gcc -o a.out main.o array.o linkedlist.o stack.o queue.o

chmod a+x a.out
./a.out
echo "Press Enter to close"
read line