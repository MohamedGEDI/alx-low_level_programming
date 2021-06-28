#include "holberton.h"
#include <string.h>
/**
 *rev_string - print string reverse
 *@s: string pointer
*/
void rev_string(char *s)
{
	char tmp
	char *start = s;
	char *end = start + strlen(s) - 1;

	while (end > start)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
