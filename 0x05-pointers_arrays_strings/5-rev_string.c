#include "main.h"

/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void rev_string(char *s)
{
	int p, alp, w, pb;

	p = 0;
	while (s[p] != '\0')
		p++;
	w = 0;
	alp = p - 1;

	while (w < alp)
	{
		pb = s[w];
		s[w] = s[alp];
		s[alp] = pb;
		w++;
		alp--
	}
}
