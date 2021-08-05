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

	i = strlen(b) - 1;
	

	for (; i >= 0; i--)
	{	
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			decimal += base;
		}
		base *= 2;
	}

	return (decimal);
}
