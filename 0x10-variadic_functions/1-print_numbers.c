#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers- Function that that prints numbers, followed by a new line.
*
*@separator: char value
*@n:Int value
*
*Return: Always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/*initialize valist for num number or argument */
	va_start(args, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)  /* n-1 is for the comma*/
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	/*clean memory reserved for valist */
	va_end(args);

}
