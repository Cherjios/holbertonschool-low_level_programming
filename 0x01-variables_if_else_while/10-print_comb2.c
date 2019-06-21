#include<stdio.h>

/**
 * main - print 0 to 99 with commas
 * Return: 0
 */

int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			if (n != '9' || m != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

