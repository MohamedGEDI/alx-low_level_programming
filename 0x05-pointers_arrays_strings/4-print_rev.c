#include "holberton.h"
#include <string.h>
/**
 *print_rev - print from reverse
 *@s: parameter argument
*/
void print_rev(char *s)
{
	int i;
	int count;
	int length;

	count = 1;
	length = strlen(s);
	for (i = 1; i <= length; i++)
	{
		_putchar(s[length - count]);
		count++;
	}
	_putchar('\n');
}
