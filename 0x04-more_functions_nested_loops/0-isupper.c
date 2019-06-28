#include "holberton.h"

/**
  *_isupper -Checks for Upper character
  *@c:is a integer value
  *
  *Return: 1 if is uppercase, 0 otherwise
  */


int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')

		return (1);

	else

		return (0);

}
