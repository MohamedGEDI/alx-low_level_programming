#include <stdio.h>
#include "holberton.h"
#include <string.h>
/**
 *_print_rev_recursion - prints string in recursion
 *@s: string
*/
void _print_rev_recursion(char *s)
{
	int length = strlen(s);

	if (*s)
	{
		_putchar(s[length - 1]);
		_print_rev_recursion(s + (length - 1));
	}
	else
	{
		printf("\n");
	}
}
