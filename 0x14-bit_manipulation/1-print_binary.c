#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*print_binary -Function that prints the binary representation of a number
*@n: int value to convert
*Return: Always 0
*/
void print_binary(unsigned long int n)
{
	int c, count = 0;
	unsigned long int k;

	for (c = 31; c >= 0; c--)
	{
		k = n >> c;

		if (k & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

