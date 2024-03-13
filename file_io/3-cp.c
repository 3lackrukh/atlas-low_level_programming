#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 *
 */

int cp_file(const char *file_from, const char *file_to)
{
	int fr_fd, to_fd, file_close;
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t chars_rd;
	ssize_t chars_wr;
	
	char buffer[1024];

	fr_fd = open(file_from, O_RDONLY);
	if (fr_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n" , file_from);
		return (98);
	}

	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n" , file_to);
		file_close = close(fr_fd);
		if (file_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n" , file_from);
			return (100);
		}

		return (99);
	}

	while((chars_rd = read(fr_fd, buffer, sizeof(buffer))) > 0)
	{
		chars_wr = ]write(to_fd, buffer, chars_rd);
		if (chars_wr != chars_rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			file_close = close(fr_fd);
			if (file_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n" , file_from);
			return (100);
		}
			file_close = close(to_fd);
			if (file_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n" , file_to;
			return (100);
		}
			return (99);
		}

	}
	file_close = close(fr_fd);
	if (file_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n" , file_from);
			return (100);
		}
	file_close = close(to_fd);
	if (file_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n" , file_from);
			return (100);
		}
	return (1);
}

int main (int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	result = cp_file(argv[1], argv[2]);
	return (result);

}