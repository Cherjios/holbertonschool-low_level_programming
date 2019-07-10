#include "holberton.h"

/**
*_pow_recursion-Function return the factorial
*
*@x: Is an int value
*@y: is an int value
*
*Return: Int value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else
	{
		if (y == 0)

			return (1);

		x = x;
		y--;
		return (x * _pow_recursion(x, y));
	}
}
