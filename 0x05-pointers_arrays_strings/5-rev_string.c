#include "holberton.h"
#include <string.h>
/**
 *rev_string - print string reverse
 *@s: string pointer
*/
void rev_string(char *s)
{
	char *rev;
	rev = strrev(s);
	*s = rev;
}
