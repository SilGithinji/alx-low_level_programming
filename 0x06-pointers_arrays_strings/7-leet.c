#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int pab = 0, pabg;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (n[++pab])
	{
		for (pabg = 0; pabg <= 7; pabg++)
		{
			if (n[pab] == leet[pabg] ||
			n[pab] - 32 == leet[pabg])
				n[pab] = pabg + '0';
		}
	}
	return (n);
}
