#include <stdio.h>
int main(void)
{
	int vu;
	int pbc[5];
	int *p;

	pbc[2] = 1024;
	p = &vu;
/*
 * write your line of code here
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this ;ine of code
 */
	*(p + 5) = 98;
/* ... so that this prints 98\n */
	printf("pbc[2] = %d\n", pbc[2]);
	return (0);
}
