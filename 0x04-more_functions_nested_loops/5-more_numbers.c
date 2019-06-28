#include "holberton.h"

/**
 *print_numbers_14 - Prints numbers from 0 to 9
 *Return: Always 0
 */

void print_numbers_14(void)
{
	int n = 0;
	int d1;

	while (n <= 14)
	{
		if (n > 9)
		{
			d1 = n / 10;
			_putchar(d1 + '0');
		}

		_putchar(n % 10 + '0');

		 n++;
	}
	 _putchar('\n');
}

/**
  *more_numbers - Prints numbers from 0 to 14, 10 times
  *Return: Always 0
  */

void more_numbers(void)
{
	int print;

	while (print < 10)
	{
		print_numbers_14();

		print++;
	}

}

