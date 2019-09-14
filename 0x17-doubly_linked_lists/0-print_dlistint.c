#include "lists.h"

/**
  *print_dlistint- Function that prints all elements of a list.
  *@h: Takes in a const struct type *h
  *Return: size_t counter value
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;

	}
	return (counter);

}
