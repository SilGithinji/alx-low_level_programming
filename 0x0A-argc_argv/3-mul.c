#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, c, v, w, z, cone;

	a = 0;
	c = 0;
	v = 0;
	w = 0;
	z = 0;
	cone = 0;

	while (s[w] != '\0')
		w++;

	while (a < w && z == 0)
	{
		if (s[a] == '-')
			++c;

		if (s[a] >= '0' && s[a] <= '9')
		{
			cone = s[a] - '0';
			if (c % 2)
				cone = -cone;
			v = v * 10 + cone;
			z = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			z = 0;
		}
		a++;
	}

	if (z == 0)
		return (0);

	return (v);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cane, cap, tap;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	cap = _atoi(argv[1]);
	tap = _atoi(argv[2]);
	cane = cap * tap;

	printf("%d\n", cane);

	return (0);
}
