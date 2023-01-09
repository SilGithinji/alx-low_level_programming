#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nil, b, cane;
	int bill[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nil = atoi(argv[1]);
	cane = 0;

	if (nil < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5 && nil >= 0; b++)
	{
		while (nil >= bill[b])
		{
			cane++;
			nil -= bill[b];
		}
	}

	printf("%d\n", cane);
	return (0);
}
