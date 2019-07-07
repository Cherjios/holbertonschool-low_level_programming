#include "holberton.h"

/**
**_strncat-Function that concatenates two strings from n bytes
*
*@dest: is a chart value
*@src: is a chart value
*@n: is an int value
*
*Return:Returns a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}


	for (j = 0; j < n && src[j] != '\0'; j++)
	{

	dest[i + j] = src[j];

	}

	dest[i + j] = '\0';


	return (dest);
}
