#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *reverse_array - reverse array
 *@a: int array
 *n: size of array
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0, i < n, i++)
	{
		if ((n - i) == 1)
		{
			printf("%d", a[n-i]);
		}
		printf("%d, ", a[n-i]);
	}
}
