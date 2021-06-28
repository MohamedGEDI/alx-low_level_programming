#include "holberton.h"
#include <string.h>
/**
 *rev_string - print string reverse
 *@s: string pointer
*/
void rev_string(char *s)
{
	int c;
	int i;
	int length;

	length = strlen(s);
	c = 0;
	for (i = length; i >= 0; i--)
	{
		s[c] = s[i];
		c++;
	}
}
