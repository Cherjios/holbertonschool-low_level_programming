#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print the alphabet in lowercase in reverse
* Return: 0
*/

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar (c);
		c--;
	}
	putchar('\n');
	return (0);
}
