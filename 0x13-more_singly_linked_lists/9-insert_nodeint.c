#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*insert_nodeint_at_index-Function that adds a new node at the beginning of
* a list_t.
*@head: First element of list
*@idx: Given position
*@n: Const int value
*Return: Structure type
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	/* create a new node and temp  with struc type */
	listint_t *new_node, *temp = *head;

	if ((!*head && idx) || !head) /* check if head or idx are 0 */
		return (NULL);

	while (idx > 1)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		idx--;
	}
	/*malloc the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	if (!idx)
	{
		*head = new_node;
		new_node->next = temp;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	new_node->n = n;  /*Give value to the new node*/
	return (new_node);
}
