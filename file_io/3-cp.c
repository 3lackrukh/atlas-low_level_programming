#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 *
 */
int main (int argc, char *argv[])
{

}
int cp_file(const char *file_from, const char *file_to)
{
	int fr_fd, to_fd;
	mode_t mode = S_IRUSR | S_IWUSR;
	ssize_t chars_rd;
	/* ssize_t chars_wr;
	 */
	char buffer[1024];

	fr_fd = open(file_from, O_RDONLY);
	if (fr_fd == -1)
	{
		printf("Error: Can't read from file %s\n" , file_from);
		return (98);
	}

	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (to_fd == -1)
	{
		printf("Error: Can't write to %s\n" , file_to);
		close(fr_fd);
		return (99);
	}

	while((chars_rd = read(fr_fd, buffer, sizeof(buffer))) > 0)
	/*{
		chars_wr = write(to_fd, buffer, chars_rd);
	}*/
	close(fr_fd);
	close(to_fd);
	return (1);
}
