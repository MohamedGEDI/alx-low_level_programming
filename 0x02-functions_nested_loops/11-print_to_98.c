#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints numbers to 98
 *@n: starting point
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
	}
}
