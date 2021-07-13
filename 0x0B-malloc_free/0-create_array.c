#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates an array using malloc
 *@size: size of array
 *@c: char in the array
 *Return: returns array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else 
	{
		for (i = 0;i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
