#include "holberton.h"
/**
*puts_half -Function that prints  half of a strig
*
*@str: is a chracter
*
*Return: Always 0
*/

void puts_half(char *str)
{
	int i, lenth_of_the_string, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenth_of_the_string++;
	}
		n = (lenth_of_the_string - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

