#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
*add_node_end- Function that adds a new node at the end of a list_t list.
*@head: First element of list
*@str: Takes in a const chart
*Return: Structure type
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/* create a new node wit struc type */
	list_t *new_node;
	list_t *temp = *head;

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

	/* Make next of new node as NULL (END) */
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;
	/*Make old node as head */
	temp->next = new_node;

	return (new_node);

}
