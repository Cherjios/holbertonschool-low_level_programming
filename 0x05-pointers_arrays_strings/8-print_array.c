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
	int i;

	for (i = 0; i <= n-1; i++)
	{

		printf("%i",a[i]);
		
		if (i != n - 1)

			printf(", ");
		
	}

	printf("\n");

}

