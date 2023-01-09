#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int ab;

	ab = 0;
	while (s1[ab] != '\0' && s2[ab] != '\0')
	{
		if (s1[ab] != s2[ab])
		{
			return (s1[ab] - s2[ab]);
		}
	ab++;
	}
	return (0);
}
