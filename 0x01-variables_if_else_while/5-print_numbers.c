#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print all single digit numbers of base 10
* Return: 0
*/

int main(void)
{
	int c;

	c = 0;

	while (c <= 10)
	{
		printf("%i", c);
		c++;
	}
	printf("\n");
	return (0);
}
