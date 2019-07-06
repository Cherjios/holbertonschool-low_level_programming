#include "holberton.h"


/**
*_strcat-Function that concatenates two strings
*
*@dest: is a chart value
*@src: is a chart vlue
*
*Return:Returns a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	char *other = dest;

	while (*dest != '\0')
	{
		dest++;

	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}


	return (other);
}
