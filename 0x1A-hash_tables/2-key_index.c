#include "hash_tables.h"
/**
 * key_index - find the key
 * @key: key value using djb2 algo
 * @size: size of hash_table
 * Return: key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
