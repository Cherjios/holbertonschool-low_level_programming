#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid-Function that returns a pointer to
* a 2 dimensional array of integers
*
*@width: int value
*@height: int value
*
*Return: a char value
*/

int **alloc_grid(int width, int height)
{
	int **grid, row, column;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == 0)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = (int *) malloc(sizeof(int) * width);

		if (grid[row] == 0)
		{
			for (row = 0; row > -1; row--)
				free(grid[row]);

			free(grid);
			return (NULL);
		}

		for (column = 0; column < width; column++)
			grid[row][column] = 0;
	}

	return (grid);
}
