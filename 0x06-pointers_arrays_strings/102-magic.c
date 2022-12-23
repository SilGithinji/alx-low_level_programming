#include <stdio.h>

int main(void)
{
	int vu;
	int pbc[5];
	int *li;

	pbc[2] = 1024;
	li = &vu;
	/*
 * write your line of code here
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(li + 5) = 98;
	/* ... so that this prints 98\n */
	printf("pbc[2] = %d\n", pbc[2]);
	return (0);
}
