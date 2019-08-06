#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*sum_listint- Function that returns the sum of all the data
*@head: First element of list
*Return: Sume of element of linked list
*/
int sum_listint(listint_t *head)
{
	int suma = 0;

	if (!head)
		return (0);

	while (head)
	{
		suma += head->n;
		head = head->next;

	}
	return (suma);
}

