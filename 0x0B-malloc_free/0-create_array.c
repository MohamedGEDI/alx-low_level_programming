#include "holberton.h"
#include <stdio.h>
#include <stdlib>
/**
 *
 *
 *
*/
char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size * sizeof(char));
	array[0] = c;
}
