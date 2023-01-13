#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pi;
	char *a;
	unsigned int d;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!pi)
		return (malloc(new_size));
	pi = malloc(new_size);
	if (!pi)
		return (NULL);
	a = ptr;

	if (new_size < old_size)
	{
		for (d = 0; d < new_size; d++)
			pi[d] = a[d];
	}
	if (new_size > old_size)
	{
		for (d = 0; d < old_size; d++)
			pi[d] = a[d];
	}
	free(ptr);
	return (pi);
}
