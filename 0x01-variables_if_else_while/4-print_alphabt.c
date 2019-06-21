#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print the alphabet in lowercase except q and e
* Return: 0
*/

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{

		if (c != 'e' && c != 'q')
			putchar(c);
		c++;

	}
	putchar('\n');

	return (0);
}
