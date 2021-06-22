#include "holberton.h"
/**
 * main - print holberton
 * Return: always 00
*/
int main(void)
{
	char a[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	char b;
	int i = 0;

	for (; i < 10; i++)
	{
		b = a[i];
		_putchar(b);
	}
	return (0);
}
