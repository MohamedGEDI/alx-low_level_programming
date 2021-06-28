#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - finds the length of a string
 *@s: parameter
 *Return: returns the lenght of the string
*/
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;

	return (c);
}
