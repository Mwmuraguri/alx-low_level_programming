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
	int fd, w;
	char *buf = malloc(sizeof(char) * letters);
	ssize_t t = 0;

	if (!buf)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (free(buf), 0);

	while ((t = read(fd, buf, letters)) > 0)
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (t == -1 ? free(buf), 0 : w);
}
