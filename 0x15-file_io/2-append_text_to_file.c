#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of file
 * @filename: is the name of the file
 * @text_content: is NULL terminated string
 *
 * Return: 1 on success and -1 on failure
 *		   1 if the file exists and -1 if the file does not exist or
 *		   if there is no permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	if (text_content != NULL)
	{
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
