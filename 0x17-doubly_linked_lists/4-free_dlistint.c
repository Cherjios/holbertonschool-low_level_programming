#include "lists.h"

/**
  *free_dlistint- Function that free a struct list
  *@head: Fist element of the list
  *Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
