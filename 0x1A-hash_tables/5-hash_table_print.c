#include "hash_tables.h"
/**
 * hash_table_print - print out ht
 * @ht:  ht
*/
void hash_table_print(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;
	unsigned int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (flag == 1 && node != NULL)
			printf(", ");
		if (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			continue;
		}
		while (node != NULL)
		{
			flag = 1;
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
