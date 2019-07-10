#include "holberton.h"

/**
*factorial-Function return the factorial
*
*@n: Is an int value
*
*Return: Int value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else
	{
		if (n == 0)

			return (1);

		return (n * factorial(n - 1));
	}
}
