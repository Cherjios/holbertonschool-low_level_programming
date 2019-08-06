#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*free_listint- Function that frees a listin_t list
*@head: Pointer to the first element of the list
*
*Return: Always 0
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
