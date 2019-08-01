#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_list - Function that frees a list
*@head: Pointer
*Return: size_t counter value
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp  = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
