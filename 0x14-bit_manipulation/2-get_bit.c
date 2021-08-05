#include "main.h"
#include <stdio.h>
/**
 * get_bit -get bit at index
 * @n: int
 * @index: index
 * Return: 1 or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int abs;

	if (index >= sizeof((n
		return (-1);

	abs = ((n >> index) & 1);
	return (abs);
}
