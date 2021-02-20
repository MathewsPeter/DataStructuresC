/**
 * @file queue.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of Queue in C language
 * Queue is implemented using Array
 */

#include<stdio.h>

void queue_enqueue(int);
void queue_dequeue(void);
void queue_printall(void);
void queue_length(void);
#define QUEUE_SIZE_MAX 5
int queue_size_max = QUEUE_SIZE_MAX;
int queue_size_curr = 0;
int queue[QUEUE_SIZE_MAX+1];
int queue_front = 0;//position at which enqueue happened last time
int queue_rear = 1;//position at which dequeue should happen next time


/**
Enqeue (insert) value to Queue
Array considered as a circular data storage, where first position is the "next" position of the last position.
dqpos should not cross qpos

@param  n, the value to be enqueued
@return void
*/
void queue_enqueue(int n)
{	if(queue_size_curr == queue_size_max)
	{	printf("Queue full. Unable to enqueue %d\n",n);
		return;
	}
	++queue_front;
	if ((queue_front) > queue_size_max)//wrap around to first position
		queue_front = 1;

	queue[queue_front] = n;
	queue_size_curr++;
	printf("%d enqueued\n",n);
	return;

}


/**
Dequeue (remove and view) value from the Queue

@param  void
@return void
*/
void queue_dequeue(void)
{	int posdq = queue_rear;
	if (posdq > queue_size_max)//wrap around to first position
		posdq = 1;

	if(queue_size_curr == 0)
	{	printf("Queue empty. Unable to dequeue\n");
		return;
	}

	if(posdq > queue_front)
	{	printf("Queue empty. Unable to dequeue\n");
	}
	else
	{	printf("%d dequeued\n", queue[posdq]);
		queue_size_curr--;
		queue_rear++;
	}
}


/**
Print all values of the Queue

@param  void
@return void
*/
void queue_printall(void)
{
	int i;

	printf("Queue: ");
	printf("rear = %d, front = %d. [", queue_rear, queue_front);
	if(queue_front>=queue_rear)
		for(i=queue_rear;i<=queue_front;++i)
			printf("%d, ", queue[i]);
	else
		for(i=queue_front;i<=queue_rear;++i)
			printf("%d, ", queue[i]);
	printf("]\n");
}

/**
Print length (number of elements) Queue

@param  void
@return void
*/
void queue_length(void)
{
	printf("Queue length: ");
	if(queue_size_curr == 0)
	{	printf("0\n");
		return;
	}
	printf("%d\n",queue_size_curr);
}

