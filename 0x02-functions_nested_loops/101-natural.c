#include "holberton.h"
#include <stdio.h>
/**
 *main - add multiples of 3 or 5
 *Return: always 0
*/
int main(void)
{
	int n;
	int res;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			res = res + n;
		}
	}
	printf("%d", res);
	return (0);
}
