#include "hash_tables.h"

/**
 *hash_table_set-Function that adds an element to the hash table
 *@ht: Pointer to hash table
 *@key: Key to look for in hash table
 *@value: Pointer to the value
 *
 *Return: 1 if it succees, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *prev, *checker;
	unsigned long int index;

	if (!key || !ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	checker = ht->array[index];
	while (checker)
	{
		if (strcmp(checker->key, key) == 0)
		{
			free(checker->value);
			checker->value = strdup(value);
			if (checker->value == NULL)
				return (0);
			return (1);
		}
		checker = checker->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	prev = ht->array[index];
	ht->array[index] = new_node;
	new_node->next = prev;
	return (1);
}
