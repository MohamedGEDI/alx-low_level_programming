#include "holberton.h"
/**
 * print_last_digit - prints the last number
 * @n: inout parameter
 * Return: 0 or 1
*/
int print_last_digit(int n)
{
	int mod;

	if (n < 0)
	{
		n = -n;
	}
	mod = n % 10;
	_putchar(mod + '0');
	return (mod);
}
