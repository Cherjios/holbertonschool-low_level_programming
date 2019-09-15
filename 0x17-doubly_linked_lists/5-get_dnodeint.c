#include "lists.h"

/**
  *get_dnodeint_at_index- Function Returns the nth node of a list
  *@head: Fist element of the list
  *@index: int value getting into the list
  *Return: strucy type
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head)
	{
		if (num == index)
			return (head);

		head = head->next;
		num++;
	}
	return (NULL);
}
