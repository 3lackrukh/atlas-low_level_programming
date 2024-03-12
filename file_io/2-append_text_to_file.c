#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * append_text_to_file- appends text to the end of a file.
 *
 * @filename: the name of the file to be added to.
 *
 * @text_content: a char string to be added to the file.
 *
 * Return: 1 on success, -1 if unsuccessful.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t chars;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		chars = write(fd, text_content, strlen(text_content));
		if (chars == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
