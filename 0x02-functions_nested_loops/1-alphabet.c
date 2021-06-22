#include "holberton.h"
/**
 * print_alphabet - func to print alphabets
*/
void print_alphabet(void)
{
	char a;
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
