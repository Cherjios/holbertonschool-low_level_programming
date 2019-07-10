#include "holberton.h"
#include <stdio.h>

/**
*_strpbrk-Function that search for any os a set of bytes
*
*@s:Is a chart value
*@accept: Is a chart value
*
*Return: a unsigned int
*/

char *_strpbrk(char *s, char *accept)
{
	int len1, len2, i, j;

	for (len1 = 0; s[len1] != '\0'; len1++)

	for (len2 = 0; accept[len2] != '\0'; len2++)

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
