#include "hash_tables.h"
/**
 * hash_table_create - create a hash  table
 * @size: size of the tables
 * Return: pointer to a newlt created has table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	
	hash_table_t *table_size = malloc(sizeof(hash_table_t));

	if (size < 0)
		return (NULL);
	if (table_size == NULL)
		return (NULL);

	table_size->size  = size;
	table_size->array = calloc(size, sizeof(hash_node_t));
	
	if (table_size->array == NULL)
	{
		free(table_size);
		return (NULL);
	}
	return (table_size);
}
