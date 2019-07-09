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
	int i, count_c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			count_c++;
	}

	if (count_c != 0)
	{
		while( *s != c)
			s++;
			return(s);
	}
	else
		return(0); 
}
