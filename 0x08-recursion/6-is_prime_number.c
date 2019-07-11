#include "holberton.h"

/**
*find_num-Function that find the num
*@i: in an int value
*@n: is an int value
*
*Return: Int value
*/
int find_num(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i  == 0 || n <= 1)
		return (0);

	return (find_num(n, ++i));
}

/**
*is_prime_number-Function return the factorial
*
*@n: is an int value
*
*Return: Int value
*/

int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n == 1)

		return (0);

	return (find_num(n, i));

}
