#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers of base 10'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + num);
	putchar('\n');
	return (0);
}

