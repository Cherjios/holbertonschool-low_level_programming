#include "holberton.h"

/**
*_memcpy-Function that copies memory area.
*
*@dest: Is a chart value
*@src: Is a chart value
*@n: is an int value
*
*Return: a char value
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);


}
