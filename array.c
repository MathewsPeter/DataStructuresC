/*
 * stack.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */

#include<stdio.h>

void array_insertni(int,int);
void array_delete(int);
void array_printall(void);

#define array_size 10
int array[array_size]={'\0'};

//insert value n to index i
void array_insertni(int n, int i)
{
	if(i < array_size)
		{
			array[i] = n;
			printf("Value %d is inserted at array index %d.\n", n, i);
		}
	else
		printf("Index error while inserting value %d to array index %d. Array size is %d.\n",n,i, array_size);
}

//if value n is present in the array, replace all occurrences with '\0'
void array_delete(int n)
{
	int i;
	int flgDeleted=0;
	for(i=0;i<array_size;++i)
		if(array[i] == n)
			{array[i] = '\0';
			printf("Value %d is deleted from array index %d.\n", n, i);
			flgDeleted = 1;
			}
	if (flgDeleted ==0)
		printf("Value %d is not found in array. Unable to delete.\n",n);
}

//print all elements in the array
void array_printall(void)
{
	int i;
	printf("Printing all elements in the array: ");
	for(i=0;i<array_size;++i)
		if(array[i]!='\0')
			printf("%d, ", array[i]);
	printf("\n");
}
