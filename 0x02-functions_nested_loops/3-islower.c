#include "holberton.h"
/**
 * _islower - checks if ascii is lower case
 * c - is of type integer
 * Return: 0 or 1
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
}
