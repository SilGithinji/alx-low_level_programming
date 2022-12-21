#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int lvi = 0;

	while (str[lvi])
	{
		while (!(str[lvi] >= 'a' && str[lvi] <= 'z'))
			lvi++;
		if (str[lvi - 1] == ' ' ||
				str[lvi - 1] == '\t' ||
				str[lvi - 1] == '\n' ||
				str[lvi - 1] == ',' ||
				str[lvi - 1] == ';' ||
				str[lvi - 1] == '.' ||
				str[lvi - 1] == '!' ||
				str[lvi - 1] == '?' ||
				str[lvi - 1] == '"' ||
				str[lvi - 1] == '(' ||
				str[lvi - 1] == ')' ||
				str[lvi - 1] == '{' ||
				str[lvi - 1] == '}')
			str[lvi] -= 32;
	}
	return (str);
}
