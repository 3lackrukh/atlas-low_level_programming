#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 *
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
