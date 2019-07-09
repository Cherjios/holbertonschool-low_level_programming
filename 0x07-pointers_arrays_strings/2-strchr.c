#include "holberton.h"

/**
*_strchr-Locates a character in a string.
*
*@s:Is a chart value
*@c: Is a chart value
*
*Return: a char value
*/

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return ('\0');
		}
	}

	return ('\0');
}
