#include "holberton.h"
#include <stdio.h>
#include <stdlib>
/**
 *create_array - creates an array using malloc
 *@size: size of array
 *@c: char in the array
 *Return: returns array
*/
char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size * sizeof(char));
	array[0] = c;
	return (array);
}
