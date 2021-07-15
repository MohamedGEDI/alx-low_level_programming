#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - array range
 *@min: min num
 *@max: max num
 *Return: pointer
*/
int *array_range(int min, int max)
{
	int i;
	int *p;

	i = 0;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (; min < max; min++)
	{
		p[i] = min;
		i++;
	}
	return (p);
}
