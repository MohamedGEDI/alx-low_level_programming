#include "hash_tables.h"
/**
 * hash_djb2 - djb2 algorithm
 * @str: passed string
 * Return: hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	unsigned long int hash = 5381;
	while ((c = *str))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
