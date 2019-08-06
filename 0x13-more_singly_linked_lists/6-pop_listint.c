#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*pop_listint- Function that deletes the head node of a listint_t linked list
*and returns the head node's data(n)
*@head: First element of list
*Return: Structure type
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *first = *head;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(first);
	return (n);

}
