#include "holberton.h"
/**
 *rev_string - print string reverse
 *@s: string pointer
*/
void rev_string(char *s)
{
	int c;
	char *begin;
	char *end;
	char tmp;
	int i = 10;

	begin = s;
	end = s;

	for (c = 0; c < (i - 1); c++)
		end++;
	for (c = 0; c < i / 2; c++)
	{
		tmp = *end;
		*end = *begin;
		*end = tmp;
		begin++;
		end--;
	}
}
