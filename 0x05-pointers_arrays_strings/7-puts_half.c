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
	if (strlen(str) % 2 == 0)
	{
		c = strlen(str)  / 2;
	}
	else 
	{
		c = (strlen(str) / 2) + 1;
	}			
	for (; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
