#include "main.h"
/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: the name of the file
 * @text_content: the null terminated string to add at the end of the file
 * If filename is NULL return -1
 * If the file exists return 1 and -1 if the file does not exist or if you
 * do not have the required permissions to write the file
 * Return:1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, len);
	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
