#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_c(va_list args);
void print_i(va_list args);
void print_f(va_list args);
void print_str(va_list args);

/**
*struct format-Struct format
*@type: The format data
*@f:The function associated
*/

typedef struct format
{
	char *type;
	void (*f)();

} format_opt;

#endif /*VARIADIC_FUNCTIONS_H */
