#include<stdio.h>

/**
 * main - print 0 to 9 with commas
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);
}

