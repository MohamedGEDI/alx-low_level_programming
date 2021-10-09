#include "hash_tables.h"
/**
 * hash_table_delete - delete ht
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			if (node->next == NULL)
			{
				free(node->value);
				free(node->key);
				free(node);
				continue;
			}
			while (node != NULL)
			{
				free(node->value);
				free(node->key);
				free(node);
				node = node->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
