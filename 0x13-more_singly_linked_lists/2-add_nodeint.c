#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*add_nodeint- Function that adds a new node at the beginning of a list_t list.
*@head: First element of list
*@n: Const int value
*Return: Structure type
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node wit struc type */
	listint_t *new_node;

	/*malloc the new node */
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	/* Put data into the node */
	new_node->n = n;

	/* Make next of new node as head */
	new_node->next = (*head);

	/* Move the head to point to the new node */
	(*head) = new_node;

	return (*head);

}
