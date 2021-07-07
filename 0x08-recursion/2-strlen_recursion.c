#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - strlen using recusion
 *@s: strşng
 *Return: strlen
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
