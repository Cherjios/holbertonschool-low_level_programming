#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*delete_nodeint_at_index-Function that adds a new node at the beginning of
* a list_t.
*@head:First element of list
*@index:Given position
*Return:Int value
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	/* create a new node and temp  with struc type */
	listint_t *temp2, *temp = *head;

	if (!*head) /* check if head is =i 0 */
		return (-1);
	if (!index) /* Check index*/
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (index > 1)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
		index--;
	}
	temp2 = temp->next;

	if (!temp2)
		return (-1);
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
