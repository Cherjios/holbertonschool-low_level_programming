#include "holberton.h"

/**
*jack_bauer - Function that prints every minute of the day
* starting from 00:00 to 23:59.
*
*Return: Print every minute from 00:00 to 23:49
*/

void jack_bauer(void)
{
	int hr, min;

	hr = 0;

	while (hr <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
