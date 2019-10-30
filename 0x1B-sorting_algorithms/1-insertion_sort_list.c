#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list in ascending order
 * @list: linked list given from main
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *current_next = *list;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;

	while (current_next != NULL)
	{
		current_next = current_next->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;
			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
		current = current_next;
	}

}
