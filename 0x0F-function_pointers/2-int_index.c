#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - return first number that doesnt return a 0 in cmp
 *@array: array 
 *@size: ln of array
 *@cmp: compare function
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c, res;
	
	if (size <= 0)
		return (-1);

	for(i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
		{
			res = array[i];
			break;
		}
	}
	return (res);
}
