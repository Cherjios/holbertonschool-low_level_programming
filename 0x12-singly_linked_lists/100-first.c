#include <stdio.h>

void Print_before_main(void)__attribute__((constructor));

/**
* Print_before_main - Print text before main.c
*/

void Print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
