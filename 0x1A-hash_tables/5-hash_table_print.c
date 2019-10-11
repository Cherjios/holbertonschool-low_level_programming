#include "hash_tables.h"

/**
 *hash_table_print-Function that retrieves a value associated with key
 *@ht: Pointer to hash table
 *
 *Return: Print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *helper;
	int items = 0;

	if (!ht)
		return;

	printf("{");
	while (index < ht->size)
	{
		helper = ht->array[index];
		while (helper)
		{
			if (items != 0)
				printf(", ");
			printf("'%s': '%s'", helper->key, helper->value);
			helper = helper->next;
			items = 1;
		}
		index++;
	}
	printf("}\n");
}
