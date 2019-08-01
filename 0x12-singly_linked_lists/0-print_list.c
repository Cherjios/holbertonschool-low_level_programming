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
	size_t counter = 1;
	const list_t *temp = h;

	if (temp == NULL)
	{
		counter = 1;
		return (counter);
	}

	printf("[%d] %s\n", temp->len, temp->str);
	++counter;
	print_list(temp->next);

	return (counter);

}
