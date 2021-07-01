#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *reverse_array - reverse array
 *@a: int array
 *@n: size of array
*/
void reverse_array(int *a, int n)
{

	for (; n >= 0; n--)
	{
		if (n == 1)
		{
			printf("%d", a[n - 1]);
			break;
		}
		printf("%d, ", a[n - 1]);
	}
}
