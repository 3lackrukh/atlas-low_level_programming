#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * create_file- creates a file with rw permissions for the owner.
 *
 * @filename: the name of the file to be created.
 *
 * @text_content: a char string to be written into the file.
 *
 * Return: 1 on success, -1 if unsuccessful.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t chars;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);

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
