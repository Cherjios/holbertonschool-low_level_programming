#include "holberton.h"

/**
*print_alphabet - pritns the alphabet in lowercase, followed by a new line
*Return: Always 0
*/

void print_alphabet(void)
{
	int num;

	num = 97;

	while (num <= 122)
	{
	_putchar(num);

	num++;
	}

	_putchar('\n');


}
