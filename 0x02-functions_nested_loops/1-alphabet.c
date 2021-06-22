#include "holberton.h"
/**
 * main - print alphabets using function
 * print_alphabet: function name to print alphabets
 * Return: void
*/
/**
 * print_alphabet - func to print alphaets
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
