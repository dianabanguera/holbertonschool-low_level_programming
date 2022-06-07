#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx = 0, i;
	hash_node_t *node = NULL;
    hash_node_t *last = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			last = ht->array[i];
	}
	printf("{");
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next)
				printf(", ");
			node = node->next;
		}
		if (ht->array[idx] != last && ht->array[idx])
			printf(", ");
		idx++;
	}
	printf("}\n");
}