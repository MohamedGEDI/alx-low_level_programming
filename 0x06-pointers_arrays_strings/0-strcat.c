#include "holberton.h"
#include "string.h"
/**
 *_strcat - adds two strings
 *@dest: destination
 *@src: source
 *Return: dest
*/
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);

	return (dest);
}
