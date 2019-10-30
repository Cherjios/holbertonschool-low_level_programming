#include "sort.h"

/**
 * selection_sort - sort using selection sort algorithm
 * @array: array given from main
 * @size: size given from main
 */

void selection_sort(int *array, size_t size)
{
	size_t x, y, to_swap;
	int temp, flag = 0;

	for (x = 0; x < size; x++)
	{
		to_swap = x;

		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[to_swap])
				to_swap = y;
		}
		if (to_swap != x)
		{
			temp = array[to_swap];
			array[to_swap] = array[x];
			array[x] = temp;
			flag = 1;
		}
		if (flag == 1)
		{
			print_array(array, size);
			flag = 0;
		}
	}
}
