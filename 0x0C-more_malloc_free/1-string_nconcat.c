#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 *string_nconcat - concat two strings
 *@s1: char in the array
 *@s2: char in the array
 *@n: len of int
 *Return: returns array
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int len1;
	unsigned int len2, i;

	len1 = s1 == NULL ? 0 : strlen(s1);
	len2 = s2 == NULL ? 0 : strlen(s2);

	ar = (char *)malloc((len1 + n) + 1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (len2 > n)
		n = len2;

	for (i = 0; i < len1 && s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		ar[i] = s2[i];
	}
	return (ar);
}
