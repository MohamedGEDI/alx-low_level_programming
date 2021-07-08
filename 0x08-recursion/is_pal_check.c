#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *is_pal_check - checks recursively if string is palindrome
 *@s:string
 *@st: start
 *@e: end
 *Return: 1 or recurse
*/
int is_pal_check(char *s, int st, int e)
{
	if (st == e)
		return (1);

	if (s[st] != s[e])
		return (0);

	if (st < e + 1)
		return (is_pal_check(s, st + 1, e - 1));

	return (1);
}
