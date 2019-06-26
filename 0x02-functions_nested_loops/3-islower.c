#include "holberton.h"

/**
*_islower -Checks for lowercase character
*@c:is a integer value
*
*Return: Lowercase
*/


int _islower(int c)
{
	int _islowercase;

	if (c >= 'a' && c <= 'z')

		_islowercase = 1;

	else

		_islowercase = 0;

	return (_islowercase);

}
