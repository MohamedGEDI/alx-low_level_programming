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
	int n;

	n = strlen(s);
	if (n == 0)
		return (1);
	return (is_pal_check(s, 0, n - 1));
}
