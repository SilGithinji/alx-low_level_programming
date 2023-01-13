#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pi;
	unsigned int a = 0, b = 0, see = 0, sir = 0;

	while (s1 && s1[see])
		see++;
	while (s2 && s2[sir])
		sir++;

	if (n < sir)
		pi = malloc(sizeof(char) * (see + n + 1));
	else
		pi = malloc(sizeof(char) * (see + sir + 1));

	if (!pi)
		return (NULL);

	while (a < see)
	{
		pi[a] = s1[a];
		a++;
	}
	while (n < sir && a < (see + n))
		pi[a++] = s2[b++];
	while (n >= sir && a < (see + sir))
		pi[a++] = s2[b++];

	pi[a] = '\0';
	return (pi);
}
