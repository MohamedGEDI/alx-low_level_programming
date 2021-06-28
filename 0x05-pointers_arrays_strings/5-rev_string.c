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
	c = 1;
	for (i = 0; i < length; i++)
	{
		s[i] = s[length - c];
		c++;
	}
}
