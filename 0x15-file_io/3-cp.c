#include “main.h”
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 *main - copies the content of one file to another file
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 on successs, or the corresponding error code
*/
int main(int argc, char *argv[])
{
	int ret_code;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	ret_code = cp(argv[1], argv[2]);

	return (ret_code);
}

/**
 * cp - copy the content of one file to another file
 * @file_from: source file
 * @file_to: destination file
 * Return: 0 on success, corresponding error on failure
 */
int cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, read_size, write_size, close_from, close_to;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	}
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from),
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
		exit(99);
	}
}
