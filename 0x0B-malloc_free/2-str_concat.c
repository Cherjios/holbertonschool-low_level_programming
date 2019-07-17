#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*str_length-Function that returns the length of a string
*
*@str: char value
*
*Return: a int value
*/

int str_length(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
*str_concat-Function that concatenates two strings
*
*@s1: char value
*@s2: char value
*
*Return: a char value
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, length_1 = 0, length_2 = 0;
	char  *con;

	if (s1 == NULL)
	{
		s1 = "";
	}
	length_1 = str_length(s1);
	if (s2 == NULL)
	{
		s2 = "";
	}
	length_2 = str_length(s2);

	con = malloc((length_1 + length_2 + 1) * sizeof(char));

	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_1; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; j < length_2; j++)
	{
		con[i + j] = s2[j];
	}
	con[i + j] = '\0';

	return (con);
}
