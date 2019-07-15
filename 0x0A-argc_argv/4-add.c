#include <stdio.h>
#include<stdlib.h>

/**
*main -Entry point.
*@argc: Argument count.
*@argv: Argument passed.
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i, j,  sum = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}


		printf("%d\n", sum);
		return (0);
	}

}
