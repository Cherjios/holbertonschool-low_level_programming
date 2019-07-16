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
	int count = 0;

	if (str != NULL)
	{
		while (*str)
		{
			count++;
			str++;
		}

		s = malloc((count * sizeof(char)));

		s = copy;

		while (*str != '\0')
		{
			*copy = *str;
			copy++;
			str++;
		}

		return (s);
	}

	else

		return (NULL);

}
