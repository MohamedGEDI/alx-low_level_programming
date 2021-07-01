#include "holberton.h"
#include "string.h"
/**
 *_strncat - adds two strings
 *@dest: destination
 *@src: source
 *@n: int parameter
 *Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);

	return (dest);
}
