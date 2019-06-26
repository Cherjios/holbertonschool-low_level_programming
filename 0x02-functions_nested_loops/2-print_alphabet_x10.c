#include "holberton.h"

/**
*print_alphabet - Prints the alphabet one time
*print_alphabet_x10- Prints the alphabet ten times
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

void print_alphabet_x10(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		print_alphabet();
		num++;
	}
}
