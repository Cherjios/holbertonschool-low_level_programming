#include "holberton.h"
#include <stdio.h>

/**
*_strstr-Function that locates a substrings
*
*@haystack:Is a chart value
*@needle: Is a chart value
*
*Return: a unsigned int
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (begin);

		haystack = begin + 1;
	}
	return (NULL);

}
