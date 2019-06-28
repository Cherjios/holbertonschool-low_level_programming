#include "holberton.h"

/**
  *print_square- Print a square, fallowed by a new line
  *@size: Numbers of lines
  *Return: Always 0
  */

void print_square(int size)
{
	int s, d;

	if (size <= 0)

		_putchar('\n');
	else
	{
		for (d = 0; d < size; d++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}

