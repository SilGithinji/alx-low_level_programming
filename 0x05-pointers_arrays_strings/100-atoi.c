#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int pull;
	unsigned int push;
	char *get;

	get = s;
	push = 0;
	pull = 1;
	while (*get != '\0' && (*get < '0' || *get > '9'))
	{
		if (*get == '-')
			pull *= -1;
		get++;
	}
	if (*get != '\0')
	{
		do	{
			push = push * 10 + (*get - '0');
			get++;
		}	while (*get >= '0' && *get <= '9');
	}
	return (push * pull);
}
