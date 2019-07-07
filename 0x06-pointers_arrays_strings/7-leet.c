#include "holberton.h"

/**
 *leet-Function that encodes a string into 1337
 *
 *@s: is an char value
 *
 *Return:Char value
 */
char *leet(char *s)
{
	int i, j;
	char lowc[] = {'a', 'e', 'o', 't', 'l'};
	char uppc[] = {'A', 'E', 'O', 'T', 'L'};
	char codn[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)

		{
			if (s[i] == lowc[j] || s[i] == uppc[j])
			{
				s[i] = codn[j];
			}
		}
	}

	return (s);
}
