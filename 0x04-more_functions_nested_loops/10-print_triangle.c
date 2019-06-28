#include "holberton.h"

/**
 *print_triangle - Print a triangle, fallowed by a new line
 *@size: Numbers of lines
 *Return: Always 0
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)

		_putchar('\n');
	else

		for (x = 0; x < size ; x++)
		{
			for (y = 0; y < size ; y++)
			{
				z = x + 1;

				if (y < size - z)

				{
					_putchar(' ');
				}
				else
					_putchar(35);
			}

			_putchar('\n');
		}

}

