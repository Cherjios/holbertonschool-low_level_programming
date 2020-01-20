#include "search_algos.h"

/**
 * binary_search- Function that search for a value in an array of int
 * Using the binary serach algorithm
 *
 * @array: Pointer to array of elements
 * @size: Elements in an array
 * @value: Value to search for
 *
 * Return: -1 if not value fuond otherwise the array index
 */

int binary_search(int *array, size_t size, int value)
{
    int ini = 0, i, med;
    int fin = size - 1;

    if (array == NULL)
    return (-1);

    while (ini <= fin)
    {
	printf("Searching in array: ");
	for (i = ini; i < fin; i++)
	{
	    printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);

	med = (ini + fin) / 2;

	if (array[med] < value)
	{
	    ini = med + 1;
	}
	else if (array[med] > value)
	{
	    fin = med - 1;
	}
	else
	{
	    return (med);
	}
    }
	return (-1);
    
}
