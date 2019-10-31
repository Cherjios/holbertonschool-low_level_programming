#include "sort.h"

/**
 * shell_sort - sorts array in ascending order using shell sort algorithm
 * @array: array given from main
 * @size: size given from main
 */

void shell_sort(int *array, size_t size)
{
	int y, z;
	size_t x, interval = 1;

	if (size < 2)
		return;

	while (interval < size / 3)
		interval = 3 * interval + 1;

	while (interval >= 1)
	{
		x = interval;
		while (x < size)
		{
			z = array[x];
			y = x - interval;
			while (y >= 0 && z < array[y])
			{
				array[y + interval] = array[y];
				y = y - interval;
			}
			array[y + interval] = z;
			x++;
		}
		interval = interval / 3;
		print_array(array, size);
	}

}
