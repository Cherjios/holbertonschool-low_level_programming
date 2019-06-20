#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print the alphabet in lowercase, and alphabet in uppercase
* Return: 0
*/

int main(void)
{

char c, C;

c = 'a';

while (c <= 'z')
{
putchar (c);
c++;
}

C = 'A';

while (C <= 'Z')
{
putchar (C);
C++;
}
putchar('\n');
return (0);
}
