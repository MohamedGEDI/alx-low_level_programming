#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_strchr - find occurence
 *@s: string array
 *@c: char to be searched
 *Return: first occurence
*/
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
}
