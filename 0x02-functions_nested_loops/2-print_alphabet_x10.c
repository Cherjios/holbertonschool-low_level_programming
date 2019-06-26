#include "holberton.h"
/**
* main  - check the code for Holberton School students.
* Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/* #include "holberton.h" */

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
