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
		if (n == 0)
		{
			printf("%d", a[n]);
			break;
		}
		printf("%d, ", a[n]);
	}
}
