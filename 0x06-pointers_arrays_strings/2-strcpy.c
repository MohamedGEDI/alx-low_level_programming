#include "holberton.h"
#include "string.h"
/**
 *_strcpy - copies two strings
 *@dest: destination
 *@src: source
 *@n: int parameter
 *Return: dest
*/
char *_strcpy(char *dest, char *src, int n)
{
	dest = strcat(dest, src, n);

	return (dest);
}
