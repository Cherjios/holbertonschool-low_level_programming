#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all the numbers of base 16 in lowercase,
* followed by a new line.
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
		putchar(a);

	for (a = 97; a <= 102; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
