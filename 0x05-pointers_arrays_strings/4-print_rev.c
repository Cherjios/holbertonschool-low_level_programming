#include "holberton.h"
/**
*print_rev -Function that prints a string in reverse
*
*@s: is a chracter
*
*Return: Always 0
*/

void print_rev(char *s)
{
	int i, count, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = count - 1; s[j] > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}
