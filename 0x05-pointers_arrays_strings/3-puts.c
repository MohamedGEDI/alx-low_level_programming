#include "holberton.h"
/**
 *_puts - prints a string
 *@str: parameter
*/
void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
