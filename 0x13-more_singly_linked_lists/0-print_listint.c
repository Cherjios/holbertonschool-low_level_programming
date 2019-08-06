#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*print_listint- Function that prints all the elements of a listint_t list
*@h: Takes in a const struct type *h
*Return: size_t counter value
*/

size_t print_listint(const listint_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_elem++;
	}
	return (n_elem);
}
