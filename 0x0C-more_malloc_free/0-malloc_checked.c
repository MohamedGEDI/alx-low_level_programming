#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - non type malloc space
 *@b: size
 *Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
