#include "holberton.h"

/**
*_puts_recursion-Function that prints a strings, fallowed by a new line
*
*@s: Is a chart value
*
*Return: a char value
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')

		_putchar('\n');

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s++);
	}

}
