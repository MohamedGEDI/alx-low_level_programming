#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - linear search  algorithm
 * @array: the array
 * @size: size of array
 * @value: value being searched 
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i, index;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (value == array[i])
		{
			index = i;
			break;
		}
	}
	return index;
}
