#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup - creates an array using malloc
 *@str: char in the array
 *Return: returns array
*/
char *_strdup(char *str)
{
	char *array;
	int len;

	len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	array = strdup(str);
	return (array);
}
