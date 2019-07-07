#include "holberton.h"

/**
 *reverse_array-Function that reverses the content of an array of integers.
 *
 *@a: is an int value
 *@n: is an int value
 *
 *Return:Always 0
 */
void reverse_array(int *a, int n)
{
	int  temp, i, end;

	end = n - 1;

	for (i = 0; i < end; i++, end--)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
	}
}
