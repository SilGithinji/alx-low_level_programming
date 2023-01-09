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

	if (a == 0)
		return (0);

	return (v);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int vi, nil, c, b, d;

	vi = 0;

	for (c = 1; c < argc; c++)
	{
		for (b = 0; argv[c][b] != '\0'; b++)
		{
			if (argv[c][b] > '9' || argv[c][b] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (d = 1; d < argc; d++)
	{
		nil = _atoi(argv[d]);
		if (nil >= 0)
		{
			vi += nil;
		}
	}

	printf("%d\n", vi);
	return (0);
}
