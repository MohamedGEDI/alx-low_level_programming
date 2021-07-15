#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	int len1;
	int len2, i;

	len1 = s1 == NULL ? 0 : strlen(s1);
	len2 = s2 == NULL ? 0 : strlen(s2);

	ar = (char *)malloc((len1 + n) + 1);

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
		if (n > len2)
		{
			for (i = 0; i < len2; i++)
			{
				*(ar + i) = *(s2 + i);
			}
		}
		if (n < len2)
		{
			for (i = 0; i < n; i++)
			{
				*(ar + i) = *(s2 + i);
			}
		}
	}
	ar = ar - (len1 + len2);
	return (ar);
}
