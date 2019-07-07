#include "holberton.h"

/**
 *string_toupper-Function that changes all lowercase letter of a string
 *to uppercase.
 *
 *@s: is an char value
 *
 *Return:Char value
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

		if (s[i] >= 'a' && s[i] <= 'z')

			s[i] = s[i] - 32;

	else
		s[i] = s[i];

	return (s);
}
