#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*_strlen -Function that swap the values of tow integers
*@s: is a chracter
*Return: Always 0
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
/**
*binary_to_uint- Function that converts a binary numbert to an usgined int
*@b: Takes chart value
*Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int bn = 0, pow = 1;
	int index;

	if (b == NULL)
		return (0);

	index = _strlen((char *)b);

	while (index--)
	{
		if (b[index] > '1' ||  b[index] < '0')
		return (0);

	bn += pow * (b[index] - '0');
	pow *= 2;
	}
	return (bn);

}

