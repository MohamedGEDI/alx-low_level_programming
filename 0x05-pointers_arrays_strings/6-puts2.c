#include "holberton.h"
/**
 *puts2 - prints a string
 *@str: parameter
*/
void puts2(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
