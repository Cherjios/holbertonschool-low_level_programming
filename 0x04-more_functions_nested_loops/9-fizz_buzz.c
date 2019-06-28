#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz i
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1;
	int d3, d5;

	while (n < 100)
	{
		d3 = n % 3;
		d5 = n % 5;

		if (d3 == 0 && d5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (d3 == 0)
		{
			printf("Fizz ");
		}

		else if (d5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("Buzz\n");
	return (0);
}

