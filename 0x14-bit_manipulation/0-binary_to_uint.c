#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - convert string of binary to int
 * @b: binary string
 * Return: unsigned int
*/
unsigned int binary_to_uint(char *b)
{
	unsigned int decimal = 0;
	unsigned int base = 1;
	int i;

	i = strlen(b);

	for (; i >= 0; i--)
	{
		if (!(b[i] == '1' || b[i] == '0') || b == NULL)
		{
			decimal = 0;
			return (decimal);
		}
		if (b[i] == '1')
		{
			decimal += base;
		}
		base *= 2;
	}
	return (decimal);
}
