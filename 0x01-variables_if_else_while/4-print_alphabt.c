#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets in lower case but q and e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 18)
			putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
