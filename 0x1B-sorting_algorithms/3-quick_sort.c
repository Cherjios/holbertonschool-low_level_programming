#include "sort.h"

/**
 * quick_sort - sort using quick sort algorithm
 * @array: array given from main
 * @size: size given from main
 */

void quick_sort(int *array, size_t size)
{
	int first = 0, last = size - 1;

	recursive_quick_sort(array, first, last, size);
}

/**
 * recursive_quick_sort - use recursion on quick sort
 * @array: given from quick sort function
 * @first: first element
 * @last: last element
 * @size: given from quick sort function, size of an array
 */

void recursive_quick_sort(int *array, int first, int last, size_t size)
{
	int partition;

	if (first < last)
	{
		partition = lomuto_partition(array, first, last, size);
		recursive_quick_sort(array, first, partition - 1, size);
		recursive_quick_sort(array, partition + 1, last, size);
	}
}

/**
 * lomuto_partition - implementation of partition scheme of lomuto
 * @array: given from recursive sort function
 * @first: first element passed from recursive sort
 * @last: last element passed from recursive sort
 * @size: given from recursive sort function, size of an array
 * Return: x + 1
 */
int lomuto_partition(int *array, int first, int last, size_t size)
{
	int pivot = array[last], x = first - 1, y, temp;

	for (y = first; y <= last - 1; y++)
	{
		if (array[y] < pivot)
		{
			x++;
			if (x != y)
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
	}
	if (pivot < array[x + 1])
	{
		temp = array[x + 1];
		array[x + 1] = array[last];
		array[last] = temp;
		print_array(array, size);
	}

	return (x + 1);
}
