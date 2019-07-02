#include "holberton.h"

/**
* swap_int -Function that swap the values of tow integers
*
*@a:is an integer value
*@b:is an integer value
*
*Return: Always 0
*/


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
