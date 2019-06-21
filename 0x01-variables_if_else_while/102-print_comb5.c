#include<stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int n1, n2, n3, n4, p1, p2;

	for (p1 = 0; p1 <= 99; p1++)
	{
		for (p2 = p1 + 1; p2 <= 99; p2++)
		{
			n1 = (p1 / 10) + 48;
			n2 = (p1 % 10) + 48;
			n3 = (p2 / 10) + 48;
			n4 = (p2 % 10) + 48;

			putchar(n1);
			putchar(n2);
			putchar(' ');
			putchar(n3);
			putchar(n4);

			if (n1 != '9' || n2 != '8' || n3 != '9' || n4 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

