#include <stdio.h>
#include "holberton.h"
#include <string.h>
/**
 *_puts_recursion - prints string in recursion
 *@s: string
*/
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		printf("\n");
	}
}
