#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - function that search for an int
*
*@array:int values
*@size: int value
*@cmp: Function pointer that takes int arguments
*
*Return: index of the first element for which the cmp
*function does not return 0,If no element matches, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);

}
