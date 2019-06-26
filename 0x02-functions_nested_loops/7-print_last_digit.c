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

	val = num % 10;


	if (num >= 0)
	{
		return (val);
	}
	else
	{
		return (-val);
	}
	_putchar (val + '0');

}
