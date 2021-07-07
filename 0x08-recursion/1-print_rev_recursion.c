#include <stdio.h>
#include "holberton.h"
#include <string.h>
/**
 *_print_rev_recursion - prints string in recursion
 *@s: string
*/
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		printf("\n");
	}
}
