#include "lists.h"

/**
  *add_dnodeint- Function that adds a new node at the biginning of alist
  *@head: Fist element of the list
  *@n: int value getting into the list
  *Return: strucy type
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* allocate node*/
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	/* Put data in the node */
	new_node->n = n;

	/*Make next of new node as head and previous as NULK */
	new_node->prev = NULL;

	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	/*Move the head to point to the new node */
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
