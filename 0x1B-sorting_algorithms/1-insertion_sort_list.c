#include "sort.h"

/**
 * insertion_sort_list - sort a list with insertion sort
 * @list: head of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (!list)
		return;
	current = *list;
	if (!current || current->next == NULL)
		return;
	current = current->next;
	while (current)
	{
		while (current->prev && current->n < current->prev->n)
		{
			if (current->next)
			{
				if (current->prev->prev)
					current->prev->prev->next = current;
				current->prev->next = current->next;
				current->next->prev = current->prev;
				current->prev = current->prev->prev;
				current->next->prev->prev = current;
				current->next = current->next->prev;
			}
			else
			{
				if (current->prev->prev)
					current->prev->prev->next = current;
				current->next = current->prev;
				current->prev = current->prev->prev;
				current->next->prev = current;
				current->next->next = NULL;
			}
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
		}
		current = current->next;
	}
}
