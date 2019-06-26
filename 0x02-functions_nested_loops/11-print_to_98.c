#include "holberton.h"
#include <stdio.h>

/**
*print_to_98  - Function that prints all natural numbers
* from n to 98, followed by a new line.
*@n: integer value
*Return: R
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{

				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
}
