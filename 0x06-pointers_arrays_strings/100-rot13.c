#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int ab;
	int dc;
	char pabg[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char xyz[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (ab = 0; s[ab] != '\0'; ab++)
	{
		for (dc = 0; dc < 52; dc++)
		{
			if (s[ab] == pabg[dc])
			{
				s[ab] = xyz[dc];
				break;
			}
		}
	}
	return (s);
}
