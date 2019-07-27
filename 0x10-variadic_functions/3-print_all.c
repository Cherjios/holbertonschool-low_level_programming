#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_c-Function that prints a chart
*@args: va_list variable of storing
*/
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
*print_i-Function that prints an int
*@args: va_list variable of storing
*/
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
*print_f-Function that prints a floating
*@args: Va_list variable of storing
*/
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
*print_str-Function that prints a string
*@args: Va_list variable of storing
*/
void print_str(va_list args)
{
	char *st;

	st = va_arg(args, char *);
	if (st == NULL)
		st = "(nil)";
	printf("%s", st);
}
/**
*print_all- function that prints anything.
*
*@format:Int value
*
*Return: Always 0
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";

	format_opt data_t[] = {
			{"c", print_c},
			{"i", print_i},
			{"f", print_f},
			{"s", print_str},
			{NULL, NULL}
			};

	/*initialize valist for num number or argument */
	va_start(args, format);

	/* access all the arguments assigned to valist */
	while (format && format[i])
	{
		while (data_t[j].type)
		{
			if (*data_t[j].type == format[i])
			{
				printf("%s", separator);
				data_t[j].f(args);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	/*clean memory reserved for valist */
	va_end(args);

}
