#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print the alphabet in lowercase,
* Return: 0
*/

int main(void)
{
char c;

c = 'a';

while (c <= 'z')
{
	putchar (c);
	c++;
}
	putchar('\n');
return (0);
}
