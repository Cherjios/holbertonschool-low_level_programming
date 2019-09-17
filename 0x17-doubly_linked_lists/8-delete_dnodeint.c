#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: double pointer to head
 * @index: index of the list where the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	for (; i < index; i++)
	{
		new_node = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next; /* change head of list */
	else if (current->next)
		new_node->next = current->next; /* unlink node from linked list */
	else
		new_node->next = NULL; /* change end of list */

	free(current); /* free memory of deleted node */

	return (1);
}
