#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ab;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (ab = 'a'; ab <= 'f'; ab++)
		putchar(ab);
	putchar('\n');
	return (0);
}
