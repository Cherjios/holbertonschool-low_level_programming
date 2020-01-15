#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search- Function that search for a value in an array of int
 * Using the Linear serach algorithm
 *
 * @array: Pointer to array of elements
 * @size: Elements in an array
 * @value: Value to search for
 *
 * Return: return a pointer to the new node, or NULL on failure
 */

int linear_search(int *array, size_t size, int value)
{
int i;
size_t j;

for (j = 0, i = 0; j < size; j++, i++)
{
if (array[i] == value)
return (i);
}
return (-1);
}
