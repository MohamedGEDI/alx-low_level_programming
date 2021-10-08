#include "hash_tables.h"
/**
 * hash_table_set - puts elemenets in hash tables
 * @ht: hash table
 * @key: key char
 * @value: key corresponding value
 * Return: 1 sucess 0 failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *node;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
