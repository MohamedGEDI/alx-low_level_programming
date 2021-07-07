#include "holberton.h"
#include <stdio.h>
/**
 *factorial - finds n!
 *@n: parameter
 *Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
