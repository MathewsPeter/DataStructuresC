target := a.out
objs := main.o array.o linkedlist.o stack_using_array.o queue.o binarytree.o binarysearchtree.o avltree.o

CC := gcc
CFLAGS := -Wall

all: $(target)

$(target): $(objs)
	$(CC) $(CFLAGS) -o $@ $^
	
%.o: %.c
	$(CC) $(CFLAGS) -g -c $<

clean:
	rm -f $(target) $(objs)