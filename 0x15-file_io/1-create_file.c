#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int pub, a, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	pub = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(pub, text_content, l);

	if (pub == -1 || a == -1)
		return (-1);

	close(pub);

	return (1);
}
