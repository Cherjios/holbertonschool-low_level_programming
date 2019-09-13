#include "lists.h"

/**
  *dlistint_len- Function that prints all elements of a list.
  *@h: Takes in a const struct type *h
  *Return: size_t counter value
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;

	}
	return (counter);

}
