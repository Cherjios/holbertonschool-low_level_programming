#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat-Function that concatenates two string
*
*@s1: is a char value
*@s2: is a char value
*@n: is an int
*
*Return: a char value
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *word;
	unsigned int i = 0, j;
	unsigned int ls1 = 0, ls2 = 0;

	while (s1[ls1] != '\0')
	{
		ls1++;
	}
	while (s2[ls2] != '\0')
	{
		ls2++;
	}
	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	word = malloc(sizeof(s1) + sizeof(n) + 1);

	if (word == NULL)

		return (NULL);

	while (s1[i] != '\0')
	{
		word[i] = s1[i];
		i++;
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		word[i + j] = s2[j];
	}

	word[i + j] = '\0';

	return (word);

}
