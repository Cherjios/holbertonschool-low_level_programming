#include "holberton.h"

/**
  *print_diagonal- Print n diagonals
  *@n: Numbers of lines
  *Return: Always 0
  */

void print_diagonal(int n)
{
	int s, d;

	if (n <= 0)

		_putchar('\n');
	else
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s <= (d - 1); s++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}

