#include "main.h"

/**
 * read_textfile - Function to read text file
 *
 * @filename: pointer to the name of the file
 * @letters: Number of letters to be write and write to STDOUT
 *
 * Return: Number of letters read and written on successful
 *         0 if not successful.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);

		return (0);
	}

	free(buffer);

	close(o);

	return (w);
}
