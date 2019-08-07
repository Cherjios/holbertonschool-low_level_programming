#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*reverse_listint- Function that reverses a listnt_t linked list
*@head: First element of list
*
*Return: Structure type
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = 0, *next;

	if (!*head)
		return (0);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (!next)
			break;
		*head = next;
	}
	return (*head);
}
