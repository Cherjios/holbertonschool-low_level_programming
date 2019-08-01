#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
*print_list- Function that prints all elements of a list.
*@h: Takes in a const struct type *h
*Return: size_t counter value
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
