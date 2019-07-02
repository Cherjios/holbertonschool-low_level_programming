#include "holberton.h"

/**
*_puts -Function that prints a string, falowwed by a new lines
*
*@str: is a chracter
*
*return: Always 0
*/


void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
