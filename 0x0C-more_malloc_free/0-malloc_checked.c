#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked-Function that allocates memory using malloc.
*
*@b: is an int  value
*
*Return: a char value
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
