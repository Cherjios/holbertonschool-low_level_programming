#include "hash_tables.h"

/**
 *hash_table_get-Function that retrieves a value associated with key
 *@ht: Pointer to hash table
 *@key: Key to look for in hash table
 *
 *Return: Char value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *helper;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
		helper = ht->array[index];
	else
		return (NULL);
	while (helper)
	{
		if (strcmp(helper->key, key) == 0)
			return (helper->value);
		helper = helper->next;
	}
	return (NULL);

}
