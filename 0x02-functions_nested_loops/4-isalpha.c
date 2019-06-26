#include "holberton.h"

/**
*_isalpha - check c for alphabet characters
*@c: string
*
*Description: check for alphabet character
*Return: 1 if c is a letter, 0 if not
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

