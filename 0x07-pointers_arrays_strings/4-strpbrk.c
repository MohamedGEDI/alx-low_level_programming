#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_strpbrk - compares same char in two strings
 *@s: string array
 *@accept: char to be searched
 *Return: first matching char
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = strpbrk(s, accept);
	return (p);
}
