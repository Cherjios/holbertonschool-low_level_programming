#include "holberton.h"

/**
*_strlen -Function that swap the values of tow integers
*
*@s: is a chracter
*
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
