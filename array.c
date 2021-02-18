/**
 * @file array.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * API - function call - interfaces of Array in C language
 */

#include<stdio.h>

void array_insertni(int,int);//insert value n to index i
void array_deleten(int);//if value n is present in the array, replace all occurrences with '\0'
void array_printall(void);//print all elements in the array
void array_fillall(int);//fill all positions in the array with a specific value

#define array_size 5
int array[array_size]={'\0'};


/**
Insert value n to index i of the array

@param  n, the value to be inserted
@param  i, the index at which the value should be inserted
@return void
*/
void array_insertni(int n, int i)
{
	printf("\nInside function array_insertni:\n");
	if(i < array_size)
	{	array[i] = n;
		printf("Value %d inserted at array index %d.\n", n, i);
	}
	else
	{	printf("Index error while inserting value %d to array index %d. Array size is %d.\n",n,i, array_size);
	}
}


/**
if value n is present in the array, replace all occurrences with '\0'

@param  n, the value to be deleted
@return void
*/
void array_deleten(int n)
{
	int i;
	int flg_IsnDeleted=0;

	printf("\nInside function array_delete:\n");
	for(i=0;i<array_size;++i)
	{
		if(array[i] == n)
		{	array[i] = '\0';
			printf("Value %d is deleted from array index %d.\n", n, i);
			flg_IsnDeleted = 1;
		}
	}

	if (flg_IsnDeleted == 0)
	{	printf("Value %d is not found in array. Unable to delete.\n",n);
	}
}


/**
Print all elements in the array

@param  void
@return void
*/
void array_printall(void)
{
	int i;
	printf("\nInside function array_printall:\n");
	for(i=0;i<array_size;++i)
	{	if(array[i]!='\0')
			printf("%d, ", array[i]);
		else
			printf("NULL, ");
	}
	printf("\n");
}


/**
Fill all positions in the array with a specific value

@param  n, the value to be filled
@return void
*/
void array_fillall(int n)
{
	int i;
	printf("\nInside function array_fillall:\n");
	for(i=0;i<array_size;++i)
	{	array[i] = n;
	}

	printf("All array is filled with value %d.\n", n);
}
