#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_strspn - count same char in 2 arrays
 *@s: string array
 *@accept: second string
 *Return: first occurence
*/
unsigned int *_strspn(char *s, char *accept)
{
	unsigned int *p = 0;

	*p = strspn(s, accept);
	return (p);
}
