#include "main.h"

/**
 * create_file - Create a file and write text content to it.
 * @filename: Name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[text_length] != '\0')
		text_length++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write_result = write(fd, text_content, text_length);
	close(fd);

	if (write_result == -1)
		return (-1);

	return (1);
}
