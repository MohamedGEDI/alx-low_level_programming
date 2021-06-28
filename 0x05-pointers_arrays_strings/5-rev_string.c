#include "holberton.h"
#include <string.h>
/**
 *rev_string - print string reverse
 *@s: string pointer
*/
void rev_string(char *s)
{
	*s = strrev(s);
}
