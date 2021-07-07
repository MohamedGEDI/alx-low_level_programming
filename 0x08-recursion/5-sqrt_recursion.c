#include "holberton.h"
#include <stdio.h>
/**
 *_sqrt_recursion - squareroot
 *@n: parame
 *Return:result
*/
int _sqrt_recursion(int n)
{
	int a = 1;

	if (n <= 0 || n == a)
		return (-1);
	else if (n / a == a && n % a == 0)
	{
		return (a);
	}
	else
	{
		a++;
		return (_sqrt_recursion(n));
	}
}
