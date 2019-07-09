#include "holberton.h"

/**
*_memset-Function that fills memory with a constant byte.
*
*@s: Is a chart value
*@b: Is a chart value
*@n: is an int value
*
*Return: a char value
*/



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		s[i] = b;

	return (s);


}
