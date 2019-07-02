#include <stdio.h>
#include "holberton.h"

/**
*print_array -Function that prints n elements in an array
*
*@a: is an  int
*@n: is an int
*
*Return: Always 0
*/

void print_array(int *a, int n)
{

	for (n = 0; a[n] != '\0'; n++)
	{
		printf("%i, ", a[n]);
	}

	printf("\n");

}

