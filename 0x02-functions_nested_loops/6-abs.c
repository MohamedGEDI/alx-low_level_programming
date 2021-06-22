#include "holberton.h"
/**
 * _abs - print sign of a number
 * @n: inout parameter
 * Return: 0 or 1
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
