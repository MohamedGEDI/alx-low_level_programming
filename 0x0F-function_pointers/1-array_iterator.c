#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - goes through the array
 *@array: array
 *@size: size of array
 *@action: call back func
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
