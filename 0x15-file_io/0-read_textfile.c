#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *aim;
	ssize_t pub;
	ssize_t a;
	ssize_t j;

	pub = open(filename, O_RDONLY);
	if (pub == -1)
		return (0);
	aim = malloc(sizeof(char) * letters);
	j = read(pub, aim, letters);
	a = write(STDOUT_FILENO, aim, j);

	free(aim);
	close(pub);
	return (a);
}
