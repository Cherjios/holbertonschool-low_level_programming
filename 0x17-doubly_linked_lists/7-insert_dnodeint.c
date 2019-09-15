#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at the given position
 * @h: pointer to the given linked list
 * @idx: index
 * @n: element(integer) to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur, *new_node;
	unsigned int i;

	if ((h == NULL) || (*h == NULL && idx > 0))
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	else
	{
		cur = *h;
		for (i = 0; i < idx - 1; ++i)
		{
			if (cur == NULL)
				return (NULL);
			cur = cur->next;
		}
		if (cur->next != NULL)
			new_node->next = cur->next;
		cur->next = new_node;
		new_node->prev = cur;
		cur = new_node;
	}
	return (cur);
}
