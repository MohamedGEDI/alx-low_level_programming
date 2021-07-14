#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *str_concat - concat two strings
 *@s1: char in the array
 *@s2: char in the array
 *Return: returns array
*/
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int len1;
	int len2;

	len1 = s1 == NULL ? 0 : strlen(s1);
	len2 = s2 == NULL ? 0 : strlen(s2);

	ar = (char *)malloc((len1 + len2) + 1);

	if (ar == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (*s1)
		{
			*ar = *s1;
			s1++;
			ar++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			*ar = *s2;
			s2++;
			ar++;
		}
	}
	ar = ar - (len1 + len2);
	return (ar);
}
