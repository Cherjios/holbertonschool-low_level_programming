#include "lists.h"

/**
  *sum_dlistint- Function Returns the sume of all nodes of the list
  *@head: Fist element of the list
  *Return: Sum value
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
