#include "holberton.h"

/**
*print_alphabet_x10 - Prints the alphabet, in lowercase, followed by a new line
*10 times
*Return: Always 0
*/

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
