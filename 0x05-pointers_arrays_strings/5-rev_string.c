#include "main.h"

/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void rev_string(char *s)
{
	int p, alp;
	char pb;

	p = 0;
	while (s[alp] != '\0')
		alp++;
	for (p = 0; p < alp; p++)
	{
		alp--;
		pb = s[p];
		s[p] = s[alp];
		s[alp] = pb;
	}
}
