#include "holberton.h"

/**
 *cap_string-Function that capitalizes all words of a string
 *
 *@s: is an char value
 *
 *Return:Char value
 */

char *cap_string(char *s)
{
	int i, j;
	char schar[] = " ,;.!?\"(){}\t\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] > 'a' && s[i] < 'z' && schar[j] != '\0' ; j++)

		{
			if (s[i - 1] == schar[j] || s[i] == s[0])
			{

				s[i] = s[i] - 32;
			}
		}
	}

	return (s);
}
