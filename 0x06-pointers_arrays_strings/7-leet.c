#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int pab, pabg;
	char leet[] = "aAeEoOtTlL";
	char leit[] = "4433007711";

	for (pab = 0; n[pab] != '\0'; pab++)
	{
		for (pabg = 0; pabg < 10; pabg++)
		{
			if (n[pab] == leet[pabg])
			{
				n[pab] = leit[pabg];
			}
		}
	}
	return (n);
}
