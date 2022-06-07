#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: string to be key
 * @value: value for the key
 *
 * Return: 1 if is success, 0 if is wrong
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	hash_node_t *node = NULL;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);

	indx = key_index((unsigned char *)key, ht->size);
	node = ht->array[indx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	add_node(&ht->array[indx], key, value);
	if (!ht->array[indx])
		return (0);
	return (1);
}

/**
 * add_node - add a node
 * @head: first node in the index
 * @key: key for the new node
 * @value: value for the key
 *
 * Return: The new node, NULL if something is wrong
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_node_t));
	if (!new_hash)
		return (NULL);
	new_hash->key = strdup(key);
	new_hash->value = strdup(value);
	if (*head == NULL)
	{
		*head = new_hash;
		new_hash->next = NULL;
	}
	else
	{
		new_hash->next = *head;
		*head = new_hash;
	}
	return (*head);
}

