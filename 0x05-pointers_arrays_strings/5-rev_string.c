#include "holberton.h"
/**
*rev_string -Function that reverses a string.
*
*@s: is a chracter
*
*Return: Always 0
*/

void rev_string(char *s)
{
	int i, count, end, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	end = count - 1;

	for (i = 0; i < end; i++, end--)
	{
	temp = s[i];
	s[i] = s[end];
	s[end] = temp;
	}


}

