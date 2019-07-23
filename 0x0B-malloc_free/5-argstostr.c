#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*argstostr-Function that concatenates all the arguments of your program
*
*@ac: is an int value
*@av: is a char value
*
*Return: Always 0
*/
char *argstostr(int ac, char **av)
{
	char *constring;
	int i, strlen, j;
	int  k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strlen++;
		}
		strlen++;
	}

	constring = malloc((sizeof(char)) * (strlen + 1));

	if (constring == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			constring[k] = av[i][j];
				k++;
		}
		constring[k] = '\n';
		k++;
	}

	return (constring);
}
