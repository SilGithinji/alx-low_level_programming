#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *bin;
	int l, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = k = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[k] != '\0')
		k++;
	bin = malloc(sizeof(char) * (l + k + 1));

	if (bin == NULL)
		return (NULL);
	l = k = 0;
	while (s1[l] != '\0')
	{
		bin[l] = s1[l];
		l++;
	}
	while (s2[k] != '\0')
	{
		bin[l] = s2[k];
		l++, k++;
	}
	bin[l] = '\0';
	return (bin);
}
