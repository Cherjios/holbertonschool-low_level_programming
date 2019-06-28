#include "holberton.h"

/**
  *_isdigit -Checks for digit from 0 to 1
  *@c:is a integer value
  *
  *Return: 1 if is a digit, 0 otherwise
  */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')

		return (1);

	else

		return (0);

}
