#include "holberton.h"
/**
 *print_rev - print string reverse
 *@s: string pointer
*/
void print_rev(char *s)
{
	int strlen;
	int c;
	char *begin;
	char *end;
	char tmp;

	strlen = _strlen(s);
	begin = s;
	end = s;

	for (c = 0; c < (strlen - 1); c++)
		end++;
	for (c = 0; c < strlen / 2; c++)
	{
		tmp = *end;
		*end = *begin;
		*end = tmp;

		begin++;
		end--;
	}
}
