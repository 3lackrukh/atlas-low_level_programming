#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * cp_file- copies the content of a file to another file.
 *
 * @file_from: the file to be copied from.
 *
 * @file_to: the file to be copied to.
 *
 * Return: if copy is successful, 0.
 */
//nolint:all
int cp_file(const char *file_from, const char *file_to)
{
	int fr_fd, to_fd;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	ssize_t chars_rd;
	ssize_t chars_wr;

	char buffer[1024];

	fr_fd = open(file_from, O_RDONLY);
	if (fr_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		if (close(fr_fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
			exit(100);
		}

		exit(99);
	}

	while ((chars_rd = read(fr_fd, buffer, sizeof(buffer))))
	{
		if (chars_rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			if (close(fr_fd) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
				exit(100);
			}
			if (close(to_fd) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
				exit(100);
			}
			exit(98);
		}
		chars_wr = write(to_fd, buffer, chars_rd);
		if (chars_wr != chars_rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			if (close(fr_fd) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
				exit(100);
			}
			if (close(to_fd) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
				exit(100);
			}
			exit(99);
		}

	}
	if (close(fr_fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
			exit(100);
		}
	if (close(to_fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
			exit(100);
		}
	return (0);
}

int main (int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}

	result = cp_file(argv[1], argv[2]);
	return (result);

}
