#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*add_nodeint_end- Function that adds a new node at the beginning
* of a list_t list.
*@head: First element of list
*@n: Const int value
*Return: Structure type
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create a new node wit struc type */
	listint_t *new_node;
	listint_t *prev = *head;

	/*malloc the new node */
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	/* Put data into the node */
	new_node->n = n;

	/* Make next of new node as end */
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (prev->next)
		prev = prev->next;

	/* Make old node as head */
	prev->next = new_node;

	return (new_node);

}
