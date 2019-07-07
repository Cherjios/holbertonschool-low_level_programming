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
	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	if (s1[i] != s2[i])

		return (*s1 - *s2);

		return (*s1 - *s2);

}
