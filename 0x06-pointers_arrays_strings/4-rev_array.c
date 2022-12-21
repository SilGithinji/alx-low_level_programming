#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int pmp, ab;

	for (ab = n - 1; ab > n / 2; ab--)
	{
		pmp = a[n - 1 - ab];
		a[n - 1 - ab] = a[ab];
		a[ab] = pmp;
	}
}
