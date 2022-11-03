#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 *		   if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
