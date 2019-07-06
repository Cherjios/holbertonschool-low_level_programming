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
	int i;

	char *other = dest;

	while (*dest)
	{
		dest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
		*dest = '\0';


	return (other);
}
