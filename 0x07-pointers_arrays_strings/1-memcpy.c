#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_memcpy - sets a number of character to constant b
 *@dest: destination array
 *@src: src array
 *@n: number of characters to initialize
 *Return: copied array
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
