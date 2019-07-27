#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings- function that prints strings, followed by a new line.
*
*@separator: char value
*@n:Int value
*
*Return: Always 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/*initialize valist for num number or argument */
	va_start(args, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL) /* n -1 is for the comma */
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	/*clean memory reserved for valist */
	va_end(args);

}
