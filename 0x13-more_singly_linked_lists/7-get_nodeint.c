#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*get_nodeint_at_index- Function that returns the nth node of a listint_t
*@head: First element of list
*@index: Node pocition in the list
*Return: Structure type
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index)
	{
		head = head->next;
		if (!head)
			return (0);
		index--;
	}
	return (head);
}

