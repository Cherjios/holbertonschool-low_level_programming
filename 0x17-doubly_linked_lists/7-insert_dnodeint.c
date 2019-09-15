#include "lists.h"

/**
  *insert_dnodeint_at_index-Function insert the nth node of a list
  *@h: Fist element of the list
  *@idx:unsigned int value getting into the list
  *@n: int value
  *Return: strucy type
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node;
	unsigned int num = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	node = *h;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	while (node)
	{
		if (num == idx)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		node = node->next;
		num++;
	}
		free(new_node);
		return (node);
}
