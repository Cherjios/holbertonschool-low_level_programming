#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*array_range-Function that  that creates an array of integers.
*
*@min: is an int value
*@max: is an int value
*
*Return: a char value
*/
int *array_range(int min, int max)
{
	int i, copymin = min;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)

		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		array[i] = copymin;
		copymin++;
	}

	return (array);
}
