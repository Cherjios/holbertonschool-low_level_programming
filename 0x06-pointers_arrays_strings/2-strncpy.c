#include "holberton.h"

/**
*_strncpy-Function that copy a string
*
*@dest: is a chart value
*@src: is a chart value
*@n: is a int value
*
*Return:Returns a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, lenth = 0;

	for (i = 0; src[i] != '\0'; i++)
		lenth++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);

	}
		if (n > lenth)
		{
			for (i = lenth; i < n; i++)
				*(dest + i) = '\0';
		}

	return (dest);
}
