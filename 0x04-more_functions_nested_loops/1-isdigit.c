#include "holberton.h"
/**
 * _isdigit - checks if ascii is digit
 * @c: is of type integer
 * Return: 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
