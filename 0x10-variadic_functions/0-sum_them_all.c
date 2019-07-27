#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all- Function that returns the sum of all its parameters.
*
*@n:Int value
*
*Return: int value
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0;
	unsigned int i;

	/*initialize valist for num number or argument */
	va_start(valist, n);

	/* access all the arguments assigned to valist */
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	/*clean memory reserved for valist */
	va_end(valist);

	return (sum);

}
