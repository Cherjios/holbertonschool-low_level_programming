#include "sort.h"

/**
 * bubble_sort - sorting algorithm using bubble sort
 * @array: array given from main
 * @size: size limit from main
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int flag = 0, swap;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				swap = array[y];
				array[y] = array[y + 1];
				array[y + 1] = swap;
				flag = 1;
			}
			if (flag == 1)
			{
				print_array(array, size);
				flag = 0;
			}
		}
	}
}
