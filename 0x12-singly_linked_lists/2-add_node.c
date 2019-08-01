#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
*add_node- Function that adds a new node at the beginning of a list_t list.
*@head: First element of list
*@str: Takes in a const chart
*Return: Structure type
*/

list_t *add_node(list_t **head, const char *str)
{
	/* create a new node wit struc type */
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	/*malloc the new node */
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	/* Put data into the node */
	new_node->str = strdup(str); /*strdup returns a poiter to str */
	new_node->len = len;

	/* Make next of new node as head */
	new_node->next = (*head);

	/* Move the head to point to the new node */
	(*head) = new_node;

	return (*head);

}
