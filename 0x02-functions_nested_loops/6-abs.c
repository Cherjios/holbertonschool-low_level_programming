#include "holberton.h"

/**
*_abs - function that computes the absolute value of an integer.
*@num: integer
*
*Return: The absolute value
*/

int _abs(int num)
{
	if (num > 0)
		return (num);
	else
		return (-num);

}
