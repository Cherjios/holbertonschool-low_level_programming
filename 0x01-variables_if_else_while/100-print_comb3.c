#include<stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (n != m || m != n)
			{	putchar(n);
				putchar(m);
				if (n != '9' || m != '9')
					{
					putchar(',');
					putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

