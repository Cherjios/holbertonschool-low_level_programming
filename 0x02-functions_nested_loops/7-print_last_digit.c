#include "holberton.h"

/**
*print_last_digit - function that prints the last digit of a number.
*@num: integer
*
*Return: The value of the las digit
*/

int print_last_digit(int num)
{
	int val;

	if (num >= 0)
	{
		val = num % 10;
	}
	else
	{
		val = -num % 10;
	}
	_putchar (val + '0');
	return (val);
}
