/**
 * @file array.c
 * @author Mathews Peter
 *
 * @section DESCRIPTION
 * Definitions of Array and it's interfaces
 */

#include <stdio.h>

int array_insertni(int,int);//insert value n to index i
int array_deleten(int);//if value n is present in the array, replace all occurrences with '\0'
int array_printall(void);//print all elements in the array
int array_fillall(int);//fill all positions in the array with a specific value
int array_geti(int);
int array_deletei(int);

#define array_size 5
int array[array_size]={'\0'};


/**
Insert value n to index i

@param  n, the value to be inserted
@param  i, the index at which the value should be inserted
@return 0 if success
@return 1 if index overflow
*/
int array_insertni(int n, int i)
{
	if( (0 <= i) && (i < array_size) )
    {   array[i] = n;
        printf("%d inserted at [%d]\n", n, i);
        return 0;
    }
    else
    {   printf("Error inserting %d at index %d. Array size is %d.\n",n, i, array_size);
    	return 1;
    }
}


/**
Replace all occurrences of n with '\0'

@param  n, the value to be deleted
@return 0 if success
@return 1 if n is not found
*/
int array_deleten(int n)
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
    	return 1;
    }
    else
    	return 0;
}


/**
Delete the value at index i

@param  i, the index at which value should be made to NULL
@return 0 if success
@return 1 if failure
*/
int array_deletei(int i)
{
	if(0 <= i && i < array_size)
	{
		array[i] = '\0';
        printf("Value at array index %d is deleted\n",i);
        return 0;
    }
	else
    {   printf("Error deleting the value index %d. Array size is %d.\n", i, array_size);
    	return 1;
    }
}


/**
Print all elements in the array

@param  void
@return 0
*/
int array_printall(void)
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
    return 0;
}


/**
Fill all index positions in the array with a specific value

@param  n, the value to be filled
@return void
*/
int array_fillall(int n)
{
    int i;
    for(i=0;i<array_size;++i)
    {    array[i] = n;
    }

    for(i=0;i<array_size;++i)
    {    if(array[i] != n)
	   	   return 1;
    }

    printf("Array filled with %d\n", n);
    return 0;
}

/**
Return the value at a given index

@param  n, the value to be filled
@return void
*/
int array_geti(int i)
{
	if(i<array_size)
		return array[i];
	else
		return 0;
}




