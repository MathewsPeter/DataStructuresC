/*
 * main.c
 *
 *  Created on: 07-Feb-2021
 *      Author: Mathews Peter
 */
#include <stdio.h>
#include <stdlib.h>

#define ENABLE_ARRAY 1
#include "array_pub.h"

void main(void)
{

	#if ENABLE_ARRAY == 1
	array_insertni(1,0);
	array_insertni(2,1);
	array_insertni(9,2);
	array_printall();
	array_delete(6);
	array_delete(1);
	array_printall();
	#endif

}
