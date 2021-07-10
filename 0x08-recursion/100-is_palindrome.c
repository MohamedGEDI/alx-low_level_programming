#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *is_palindrome - returns 1 or 0
 *@s: string
 *Return: palindrome checker
*/
int is_palindrome(char *s)
{
	if (s == strrev(s))
		return (1);
	return (0);
}
