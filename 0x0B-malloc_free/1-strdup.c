#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strdup-Function that returns a pointer to a newly allocated space in memory
*
*@str: char value
*
*Return: a char value
*/

char *_strdup(char *str)
{
	char *s, *copy = str;
	int count = 0, i;

	if (str != NULL)
	{
		while (*str)
		{
			count++;
			str++;
		}

		s = malloc((count * sizeof(char)));

		for (i = 0; i < count; i++)
		{
			s[i] = copy[i];

		}

		return (s);
	}

	else

		return (NULL);

}
