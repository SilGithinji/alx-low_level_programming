#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print reverse alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
