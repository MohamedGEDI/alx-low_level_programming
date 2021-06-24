#include "holberton.h"
/**
 * print_number - print number
 * @n: inout parameter
 * Return: 0 or 1
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n <= 9999 && n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 100) + '0');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n <= 999 && n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n <= 99 && n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
}
