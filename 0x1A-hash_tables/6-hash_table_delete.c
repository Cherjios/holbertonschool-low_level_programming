#include "hash_tables.h"

/**
 *hash_table_delete-Function that deletes a hash table
 *@ht: Pointer to hash table
 *
 *Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *helper, *next;

	while (index < ht->size)
	{
		helper = ht->array[index];
		while (helper)
		{
			next = helper->next;
			free(helper->key);
			free(helper->value);
			free(helper);
			helper = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
