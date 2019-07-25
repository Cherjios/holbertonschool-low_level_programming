#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
*get_op_func - function that that selects the correct operation
*
*@s: selects the correct function to perform the operation asked by the user
*Return: a pointer to the function that corresponds to the operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int n = 0;

	while (n < 5)
	{
		if (ops[n].op[0] == s[0])
			return (ops[n].f);
		n++;
	}
	return (NULL);

}
