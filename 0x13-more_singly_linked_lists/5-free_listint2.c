#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*free_listint2- Function that frees a listin_t list
*@head: Pointer to pointerto  the first element of the list
*Return: Always 0
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
