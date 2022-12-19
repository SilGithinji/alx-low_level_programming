#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sch, add;

	srand(time(NULL));
	add = 0;
	while (add <= 2645)
	{
		sch = (rand() % 128);
		add += sch;
		printf("%c", sch);
	}
	printf("%c", 2772 - add);
	return (0);
}
