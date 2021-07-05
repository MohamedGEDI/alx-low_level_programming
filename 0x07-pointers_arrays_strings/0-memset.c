#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_memset - sets a number of character to constant b
 *@s: array to be initialized
 *@b: value to initialize with
 *@n: number of characters to initialize
 *Return: initialied array
*/
char *_memset(char *s, char b, int n);
{
	while (n >= 0)
	{
		s[n] = b;
		n--;
	}
	return (s);
}
