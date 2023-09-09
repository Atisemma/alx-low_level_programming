#include "main.h"
/**
 * create_file - creates a fie and writes the given text to it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	written_bytes = write(fd, text_content, i);
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
