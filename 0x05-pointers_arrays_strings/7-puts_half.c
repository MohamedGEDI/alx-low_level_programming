#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - prints a last half of a string
 *@str: parameter
*/
void puts_half(char *str)
{
	int c;

	c = strlen(str)  / 2;
	for (; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
