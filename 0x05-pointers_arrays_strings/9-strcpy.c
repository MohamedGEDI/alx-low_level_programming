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

	for (c = 0;c < strlen(src); c++)
	{
		dest[c] = src[c];
	}
	return dest;
}
