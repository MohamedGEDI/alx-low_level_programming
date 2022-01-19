#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - linear search  algorithm
 * @array: the array
 * @size: size of array
 * @value: value being searched
 * Return: index where value is found
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i, index = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			index = i;
			break;
		}
	}
	if (index == 0)
		return (-1);
	return (index);
}
