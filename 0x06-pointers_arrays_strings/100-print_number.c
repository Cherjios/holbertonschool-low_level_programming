#include "holberton.h"

/**
 *print_number-Function that prints an integer
 *
 *@n: is an int value
 *
 *Return:Always 0
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
		i = n;

	if (i >= 10)
	{
		print_number(i / 10);
		_putchar((i % 10) + '0');
	}
	else
		_putchar((i % 10) + '0');

}
