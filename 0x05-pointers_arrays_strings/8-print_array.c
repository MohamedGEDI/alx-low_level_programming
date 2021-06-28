#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 *print_array - prints an array
 *@a:array parameter
 *@n: array lengt
*/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if ((n - c) == 1)
		{
			printf("%d", a[c]);
			break;
		}

		printf("%d, ", a[c]);
	}
	printf("\n");
}
