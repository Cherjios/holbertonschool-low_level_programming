#include "holberton.h"

/**
*_strchr-Function that copies memory area.
*
*@s:Is a chart value
*@c: Is a chart value
*
*Return: a char value
*/

char *_strchr(char *s, char c)
{

	while (*s != c)
	{
		s++;
	}

	return (s);


}
