#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array-Function that creates and array of chars
*
*@size: is an unsigned int value
*
*@c: is a char value
*
*Return: a char value
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size != 0)
	{
		s = malloc(size * sizeof(char));

		if (s == NULL)
		{
			return (NULL);
		}

		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		return (s);

	}

	else

		return (NULL);

}
