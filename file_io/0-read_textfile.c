#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	ssize_t bytes_read;

	char *buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	
	fd = open (filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	bytes_read = read(fd, buff, letters);
	
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	buff[bytes_read] = '\0';

	for (i = 0; buff[i] != '\0'; i++)
		_putchar(buff[i]);

	close(fd);
	free (buff);

	return (bytes_read);
}
