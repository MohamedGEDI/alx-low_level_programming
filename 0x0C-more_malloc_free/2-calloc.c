#include <stdio.h>
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

	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*((int *)p + i) = 0;
	}

	return (p);
}
