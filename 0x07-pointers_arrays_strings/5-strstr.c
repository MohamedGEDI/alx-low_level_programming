#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_strstr - compares same chars in two strings
 *@haystack: string array
 *@needle: char to be searched
 *Return: first matching char
*/
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
