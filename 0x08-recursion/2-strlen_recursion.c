#include "holberton.h"

/**
*_strlen_recursion-Function that the length of a string.
*
*@s: Is a chart value
*
*Return: Int value
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')

		return (0);

	else
	{
		i++;
		s++;
		i = i + _strlen_recursion(s);
		return (i);
	}
}
