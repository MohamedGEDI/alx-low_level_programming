#include "holberton.h"
#include "string.h"
/**
 *_strncpy - copies two strings
 *@dest: destination
 *@src: source
 *@n: int parameter
 *Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);

	return (dest);
}
