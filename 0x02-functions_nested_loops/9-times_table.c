#include "holberton.h"

/**
*times_table  - Function that prints the 9 times table, starting with 0.
*Return: Print every minute from 00:00 to 23:49
*/

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		y = 0;
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			if ((x * y) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x * y + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x * y / 10 + '0');
				_putchar(x * y % 10 + '0');
			}

		}
		_putchar('\n');
	}

}
