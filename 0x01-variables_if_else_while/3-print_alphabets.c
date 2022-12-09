#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int I;

	for (i = 0; i < 26; i++)
	{
		for (I = 0; I < 26; I++)
		{
			putchar(ALP[I]);
		}
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
