#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
*list_len- Function that returns the number of elements in a linked list.
*@h: Takes in a const struct type *h
*Return: size_t counter value
*/

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
