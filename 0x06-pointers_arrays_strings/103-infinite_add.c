#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int ls = 0;
	int cd = 0;
	char vb;

	while (*(n + ls) != '\0')
	{
		ls++;
	}
	ls--;
	for (cd = 0; cd < ls; cd++, ls--)
	{
		vb = *(n + cd);
		*(n + cd) = *(n + ls);
		*(n + ls) = vb;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, ls = 0, cd = 0, less = 0;
	int pb = 0, pc = 0, c = 0;

	while (*(n1 + ls) != '\0')
		ls++;
	while (*(n2 + cd) != '\0')
		cd++;
	ls--;
	cd--;
	if (cd >= size_r || ls >= size_r)
		return (0);
	while (cd >= 0 || ls >= 0 || flow == 1)
	{
		if (ls < 0)
			pb = 0;
		else
			pb = *(n1 + ls) - '0';
		if (cd < 0)
			pc = 0;
		else
			pc = *(n2 + cd) - '0';
		c = pb + pc + flow;
		if (c >= 10)
			flow = 1;
		else
			flow = 0;
		if (less >= (size_r - 1))
			return (0);
		*(r + less) = (c % 10) + '0';
		less++;
		cd--;
		ls--;
	}
	if (less == size_r)
		return (0);
	*(r + less) = '\0';
	rev_string(r);
	return (r);
}
