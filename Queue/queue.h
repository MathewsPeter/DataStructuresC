/**
 * @file queue.h
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * Extern declarations of API - function call - interfaces of Queue
 * defined in queue.c
 */

#ifndef QUEUE_H_
#define QUEUE_H_

extern void queue_enqueue(int);
extern void queue_dequeue(void);
extern void queue_length(void);
extern void queue_printall(void);

#endif /* QUEUE_H_ */
