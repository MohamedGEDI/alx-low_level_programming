#include "holberton.h"
/**
 * print_last_digit - prints the last number
 * @n: inout parameter
 * Return: 0 or 1
*/
int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	_puchar(mod + '0');
	return (mod);
}
