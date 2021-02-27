/**
 * @file array.c
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * Definitions of Array and it's interfaces
 */

#include <stdio.h>

void array_insertni(int,int);//insert value n to index i
void array_deleten(int);//if value n is present in the array, replace all occurrences with '\0'
void array_printall(void);//print all elements in the array
void array_fillall(int);//fill all positions in the array with a specific value

#define array_size 5
int array[array_size]={'\0'};


/**
Insert value n to index i

@param  n, the value to be inserted
@param  i, the index at which the value should be inserted
@return void
*/
void array_insertni(int n, int i)
{    if(i < array_size)
    {    array[i] = n;
        printf("%d inserted at [%d]\n", n, i);
    }
    else
    {    printf("Error inserting %d: Index %d more than array array size is %d.\n",n, i, array_size);
    }
}


/**
if value n is present in the array, replace all occurrences with '\0'
Memory location cannot be deleted or removed at runtime.

@param  n, the value to be deleted
@return void
*/
void array_deleten(int n)
{
    int i;
    int flg_IsnDeleted=0;
    for(i=0;i<array_size;++i)
    {
        if(array[i] == n)
        {    array[i] = '\0';
            printf("Value %d deleted at [%d]\n", n, i);
            flg_IsnDeleted = 1;
        }
    }

    if (flg_IsnDeleted == 0)
    {    printf("%d not found in array. Unable to delete\n",n);
    }
}


/**
Delete the value at index i

@param  i, the index at which value should be made to NULL
@return void
*/
void array_deletei(int i)
{   if(i<0)
        printf("Index %d should not be less than zero\n", i);
    else if (i>=array_size)
        printf("Index %d should not be more than array size\n", i);
    else
    {   array[i] = '\0';
        printf("Value at array index %d is deleted\n",i);
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
    printf("Array[0 to %d]: [", array_size);
    for(i=0;i<array_size;++i)
    {    if(array[i]!='\0')
            printf("%d, ", array[i]);
        else
            printf("NULL, ");
    }
    printf("]\n");
}


/**
Fill all index positions in the array with a specific value

@param  n, the value to be filled
@return void
*/
void array_fillall(int n)
{
    int i;
    for(i=0;i<array_size;++i)
    {    array[i] = n;
    }
    printf("Array filled with %d\n", n);
}
