#include "holberton.h"
/**
*puts2 -Function that prints one char out of 2 of a string
*
*@str: is a chracter
*
*Return: Always 0
*/


void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] + '0') %  2 == 0)
			_putchar(str[i]);

	}
	_putchar('\n');

}

