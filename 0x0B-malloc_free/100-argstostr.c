#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int w, x, y = 0, pi = 0;
	char *hp;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x]; x++)
			pi++;
	}
	pi += ac;

	hp = malloc(sizeof(char) * pi + 1);
	if (hp == NULL)
		return (NULL);
	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x]; x++)
		{
			hp[y] = av[w][x];
			pi++;
		}
		if (hp[y] == '\0')
		{
			hp[y++] = '\n';
		}
	}
	return (hp);
}
