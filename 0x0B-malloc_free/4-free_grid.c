#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_grid-Function that free two dimensional grid
*
*@grid: is an int value
*
*@height: is a int value
*
*Return: Always 0
*/

void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)

		free(grid[s]);

	free(grid);

}
