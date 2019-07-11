#include "holberton.h"

/**
*find_squ-Function that finds the sqr
*@y: is an int value
*@n: is an int value
*
*Return: Int value
*/
int find_squ(int y, int n)
{
	if (n == (y * y))

		return (y);

	else if (n < (y * y))

		return (-1);
	else
		return (find_squ(++y, n));
}

/**
*_sqrt_recursion-Function return the factorial
*
*@n: is an int value
*
*Return: Int value
*/

int _sqrt_recursion(int n)
{

	if (n < 0)

		return (-1);

	if (n == 0)

		return (0);


	return (find_squ(1, n));


}
