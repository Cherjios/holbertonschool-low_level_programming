#include "lists.h"

/**
  *add_dnodeint_end- Function that adds a new node at the end of alist
  *@head: Fist element of the list
  *@n: int value getting into the list
  *Return: strucy type
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* allocate node*/
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	/* Put data into the node */
	new_node->n = n;

	/*Make next of new node as head and previous as NULK */
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/*Travel till the last node */
	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;

	/*Change the next of the last node */
	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
