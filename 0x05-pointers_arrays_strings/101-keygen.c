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
	int sch, add, p;
	int get[100];

	srand(time(NULL));
	add = 0;
	for (sch = 0; sch < 100; sch++)
	{
		get[sch] = rand() % 78;
		add += (get[sch] + '0');
		putchar(get[sch] + '0');
		if ((2772 - add) - '0' < 78)
		{
			p = 2772 - add - '0';
			add += p;
			putchar(p + '0');
			break;
		}
	}
		return (0);
}
