#include <stdio.h>
#include "holberton.h"

/**
* *_strcpy -Function that prints copy a string pointed
*
*@dest: is a char
*@src: is a char
*
*Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

