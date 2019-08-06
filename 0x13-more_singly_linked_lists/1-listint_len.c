#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*listnt_len- Function that returns the number of elements
* of a listint_t list
*@h: Takes in a const struct type *h
*Return: size_t counter value
*/
size_t listint_len(const listint_t *h)

{
	size_t n_elem = 0;

	while (h)
	{
		h = h->next;
		n_elem++;
	}
	return (n_elem);
}
