#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the name of the file
 *
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 *			0, if the file can not be opened or read
 *			0, if filename is NULL
 *			0, if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL || letters == '\0')
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, letters);
	if (w == -1)
		return (0);

	free(buffer);
	close(fd);

	return (w);
}
