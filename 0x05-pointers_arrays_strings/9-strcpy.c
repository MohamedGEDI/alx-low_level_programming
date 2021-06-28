#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcpy - coies strings
 *@dest: desination
 *@src: source
 *Return: copied string
*/
char *_strcpy(char *dest, char *src)
{
	int c;
	int length = strlen(src);

	for (c = 0; c <= length; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
