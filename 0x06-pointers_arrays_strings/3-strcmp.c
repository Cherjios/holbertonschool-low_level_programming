#include "holberton.h"

/**
 *_strcmp-Function that compares two strings
 *
 *@s1: is a chart value
 *@s2: is a chart value
 *
 *Return:Returns a int value
 */

int _strcmp(char *s1, char *s2)
{
	while(*s1 == *s2)
	{
		s1++;
		s2++;
	

		if (*s1 == '\0')

			return (0);

	}

	return (*s1 - *s2);

}
