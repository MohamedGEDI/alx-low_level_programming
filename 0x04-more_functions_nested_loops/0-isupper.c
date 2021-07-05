#include "holberton.h"
/**
 * _isupper - checks if ascii is upper case
 * @c: is of type integer
 * Return: 0 or 1
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
