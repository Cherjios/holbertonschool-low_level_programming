#include "holberton.h"

/**
*_strspn-Function that gets the length of a prefix substrings.
*
*@s:Is a chart value
*@accept: Is a chart value
*
*Return: a unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
		{
			break;
		}
	}

	return (i);
}
