#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_calloc-Function that allocates memory for an array, using malloc.
*
*@nmemb: is an int value
*@size: is an int value
*
*Return: a char value
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)

		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
