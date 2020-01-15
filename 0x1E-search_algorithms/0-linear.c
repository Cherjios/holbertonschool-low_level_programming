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
 * Return: -1 if not value fuond otherwise the array index
 */

int linear_search(int *array, size_t size, int value)
{
unsigned int i;

if (!array)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array [%i] = [%i]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
