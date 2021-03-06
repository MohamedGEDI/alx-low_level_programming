#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - non type malloc space
 *@nmemb: array
 *@size: size
 *Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		*((int *)p + (i * sizeof(int))) = 0;
	}

	return (p);
}
