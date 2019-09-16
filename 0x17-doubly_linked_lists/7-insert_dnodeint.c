#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: address of pointer to current head node
 * @idx: the index to at which to insert
 * @n: the value of the inserted node
 *
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *node;

	if (!h || !new_node)
		return (new_node ? free(new_node), NULL : NULL);
	node = *h;
	new_node->n = n;
	if (!idx)
	{
		new_node->prev = NULL;
		new_node->next = node ? node : NULL;
		if (node)
			node->prev = new_node;
		return (*h = new_node);
	}
	for (; node; node = node->next, idx--)
	{
		if (idx - 1 == 0)
		{
			new_node->prev = node;
			new_node->next = node->next;
			if (new_node->next)
				new_node->next->prev = new_node;
			node->next = new_node;
			return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
