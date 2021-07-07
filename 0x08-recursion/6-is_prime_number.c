#include "holberton.h"
#include <stdio.h>
/**
 *
 *
*/
int is_prime_number(int n)
{
	int a = n / 2;

	if (a == 1)
	{
		return (1);
	}
	else 
	{
		if (n % a == 0)
			return (0);
		else 
		{
			a--;
			is_prime_number(n);
		}
	}
}
