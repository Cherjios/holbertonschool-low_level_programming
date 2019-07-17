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
	int **grid, row, j, x, y;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));

		if (grid[row] == 0)
		{
			for (x = 0; x < row; x++)
				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}
		for (y = 0; y < height; y++)
		{

			for (j = 0; j < width; j++)
				grid[y][j] = 0;
	}

	return (grid);
}
